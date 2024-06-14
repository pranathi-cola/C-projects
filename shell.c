#include <stdio.h>
#include "dirent.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    char currentdir[100] = "C:/";
    char appendedpaths[10][100];
    int noofappendedpaths = 0;
    bool programruns = true;
    while(programruns)
    {
        printf("%s$",currentdir);
        char * command = (char *) malloc(100 * sizeof(char));
        fgets(command, 100, stdin);
        char * builtincmds = (char *) malloc (10 * sizeof(char));
        for(int i=0; i<strlen(command);++i)
        {
            bool foundspace = false;
            switch(command[i])
            {
                case ' ':
                case '\n':
                {
                    foundspace = true;
                    break;
                }
            }
            if(foundspace)
            {
                builtincmds[i]='\0';
                break;
            }
            builtincmds[i]=command[i];
        }
        if(strcmp(builtincmds, "exit") == 0)
        {
            programruns = false;
        }
        else if(strcmp(builtincmds, "echo") == 0 || strcmp(builtincmds, "print") == 0)
        {
            char * wordtoecho = (char *) malloc (100 * sizeof(char));
            int i;
            for(i=strlen(builtincmds) + 1; command[i]!='\n'; ++i)
            {
                wordtoecho[i-strlen(builtincmds)-1] = command[i]; 
            }
            wordtoecho[i-strlen(builtincmds)-1] = '\0';
            printf("%s\n",wordtoecho);
        }
        else if(strcmp(builtincmds, "pwd") == 0)
        {
            struct dirent * d;
            DIR * dr;
            dr = opendir(currentdir);
            if(dr!=NULL)
            {
                for(d=readdir(dr); d!=NULL; d =readdir(dr))
                {
                    printf("%s\n",d->d_name);
                }
                printf("\n");
            }
            else
            {
                printf("Error while opening directory!\n");
                continue;
            }
        }
        else if(strcmp(builtincmds, "cd") == 0)
        {
            char pastdir[100];
            strcpy(pastdir, currentdir);
            char * dirname = (char *) malloc (100 * sizeof(char));
            int i;
            for(i=strlen(builtincmds) + 1; command[i]!='\n' && command[i]!=' ' && command[i]!='\t'; ++i)
            {
                dirname[i-strlen(builtincmds)-1] = command[i]; 
            }
            if(dirname[strlen(command)-strlen(builtincmds)-3] == '/')
            {
                dirname[i-strlen(builtincmds)-1] = '\0';
            }
            else
            {
                dirname[i-strlen(builtincmds)-1] = '/';
                dirname[i-strlen(builtincmds)] = '\0';
            }
            currentdir[strlen(currentdir)]='\0';
            if(strcmp(dirname, "")==0 || strcmp(dirname, " ")==0 || strcmp(dirname, "\n")==0 || strcmp(dirname, "\t")==0 )
            {
                printf("Invalid command: please check the syntax of the command again\n");
                continue;
            }
            else if(strcmp(dirname, "../") == 0)
            {
                bool movedtoparentdir = false;
                int flag = strlen(currentdir)-1;
                while(currentdir[flag] == '/')
                {
                    flag--;
                }
                while(!movedtoparentdir)
                {
                    if(currentdir[flag]=='/' && currentdir[flag-1]!='/')
                    {
                        movedtoparentdir = true;
                    }
                    flag--;
                }
                currentdir[flag+2] = '\0';
            }
            else
            {
                strcat(currentdir, dirname);
            }
            if(access(currentdir, F_OK)==-1)
            {
                printf("The directory doesn't exist. Please check again\n");
                strcpy(currentdir, pastdir);
            }
        }
        else if(strcmp(builtincmds, "executable") == 0)
        {
            char * filename = (char *) malloc (100 * sizeof(char));
            int i;
            for(i=strlen(builtincmds) + 1; command[i]!='\n' && command[i]!=' ' && command[i]!='\t'; ++i)
            {
                filename[i-strlen(builtincmds)-1] = command[i]; 
            }
            filename[i-strlen(builtincmds)-1]='\0';
            char file[100];
            file[0] = '\0';
            strcat(file, currentdir);
            strcat(file, filename);
            int result = access(file, F_OK | X_OK);
            if(result == 0)
            {
                printf("%s is executable\n", file);
            }
            else if(noofappendedpaths!=0)
            {
                bool isfound = false;
                for(int i=0; i<noofappendedpaths; ++i)
                {
                    char tempfile[100];
                    tempfile[0]='\0';
                    strcat(tempfile, appendedpaths[i]);
                    strcat(tempfile, filename);
                    printf("%s\n", tempfile);
                    int res = access(tempfile, F_OK|X_OK);
                    if(res==0)
                    {
                        printf("%s is executable\n", tempfile);
                        isfound = true;
                        break;
                    }
                }
                if(!isfound)
                {
                    printf("%s is not executable", file);
                }
            }
            else
            {
                printf("%s is not executable\n", file);
            }
        }
        else if(strcmp(builtincmds, "append") == 0)
        {
            char * filetobeappended = (char *) malloc (100 * sizeof(char));
            int i;
            for(i=strlen(builtincmds) + 1; command[i]!='\n' && command[i]!=' ' && command[i]!='\t'; ++i)
            {
                filetobeappended[i-strlen(builtincmds)-1] = command[i]; 
            }
            if(filetobeappended[strlen(command)-strlen(builtincmds)-3] == '/')
            {
                filetobeappended[i-strlen(builtincmds)-1] = '\0';
            }
            else
            {
                filetobeappended[i-strlen(builtincmds)-1] = '/';
                filetobeappended[i-strlen(builtincmds)] = '\0';
            }
            strcpy(appendedpaths[noofappendedpaths++], filetobeappended);
        }
        else if(strcmp(builtincmds, "run") == 0)
        {
            char * filetobeopened = (char *) malloc (100 * sizeof(char));
            int i;
            for(i=strlen(builtincmds) + 1; command[i]!='\n' && command[i]!=' ' && command[i]!='\t'; ++i)
            {
                filetobeopened[i-strlen(builtincmds)-1] = command[i]; 
            }
            filetobeopened[i-strlen(builtincmds)-1]='\0';
            char tempfile[100];
            strcpy(tempfile, "Start ");
            strcat(tempfile, currentdir);
            strcat(tempfile, filetobeopened);
            system(tempfile);
        }
        else if(strcmp(builtincmds, "run-local") == 0)
        {
            char * filetobeopened = (char *) malloc (100 * sizeof(char));
            int i;
            for(i=strlen(builtincmds) + 1; command[i]!='\n' && command[i]!=' ' && command[i]!='\t'; ++i)
            {
                filetobeopened[i-strlen(builtincmds)-1] = command[i]; 
            }
            filetobeopened[i-strlen(builtincmds)-1]='\0';
            char tempfile[100];
            strcpy(tempfile, "Start ");
            strcat(tempfile, filetobeopened);
            system(tempfile);
        }
        else
        {
            char filename[100];
            strcpy(filename, currentdir);
            strcat(filename, builtincmds);
            if(access(filename, F_OK|X_OK)==0)
            {
                printf("File is executable\n");
            }
            else if(access(filename, F_OK)==0)
            {
                printf("File is available in the current location\n");
            }
            else
            {
                printf("File isn't found in the location\n");
            }
        }
    }
    return 0;
}