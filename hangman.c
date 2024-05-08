#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void word_selector(char word[]) //To selecte the name of the character
{
    srand(2);
    int num = rand();
    num=(num%40)+1;
    if(num==1)
    {
        strcpy(word, "Akush");
    }
    else if(num==2)
    {
        strcpy(word, "Alicia Termina Magentano");
    }
    else if(num==3)
    {
        strcpy(word, "Allop");
    }
    else if(num==4)
    {
        strcpy(word, "Arcos Frontera");
    }
    else if(num==5)
    {
        strcpy(word, "Arosh");
    }
    else if(num==6)
    {
        strcpy(word, "Bangul");
    }
    else if(num==7)
    {
        strcpy(word, "Bayern");
    }
    else if(num==8)
    {
        strcpy(word, "Bibeong");
    }
    else if(num==9)
    {
        strcpy(word, "Cheong Sim");
    }
    else if(num==10)
    {
        strcpy(word, "Christine Cremo");
    }
    else if(num==11)
    {
        strcpy(word, "Emily");
    }
    else if(num==12)
    {
        strcpy(word, "Ggoming");
    }
    else if(num==13)
    {
        strcpy(word, "Greg");
    }
    else if(num==14)
    {
        strcpy(word, "Hamang");
    }
    else if(num==15)
    {
        strcpy(word, "Javier Asrahan");
    }
    else if(num==16)
    {
        strcpy(word, "Jinwoo");
    }
    else if(num==17)
    {
        strcpy(word, "Julian Frontera");
    }
    else if(num==18)
    {
        strcpy(word, "Lloyd Frontera");
    }
    else if(num==19)
    {
        strcpy(word, "Lupellan");
    }
    else if(num==20)
    {
        strcpy(word, "Manticore");
    }
    else if(num==21)
    {
        strcpy(word, "Marbella Frontera");
    }
    else if(num==22)
    {
        strcpy(word, "Meatloaf");
    }
    else if(num==23)
    {
        strcpy(word, "Mellica");
    }
    else if(num==24)
    {
        strcpy(word, "Michael");
    }
    else if(num==25)
    {
        strcpy(word, "Moira");
    }
    else if(num==26)
    {
        strcpy(word, "Neumann");
    }
    else if(num==27)
    {
        strcpy(word, "Ppodong");
    }
    else if(num==28)
    {
        strcpy(word, "Ramos");
    }
    else if(num==29)
    {
        strcpy(word, "Ruria");
    }
    else if(num==30)
    {
        strcpy(word, "Serajard");
    }
    else if(num==31)
    {
        strcpy(word, "Shiloh");
    }
    else if(num==32)
    {
        strcpy(word, "Siluria Namaran");
    }
    else if(num==33)
    {
        strcpy(word, "Solitas");
    }
    else if(num==34)
    {
        strcpy(word, "Suho Kim");
    }
    else if(num==35)
    {
        strcpy(word, "System");
    }
    else if(num==36)
    {
        strcpy(word, "Tordes");
    }
    else if(num==37)
    {
        strcpy(word, "Tyranus");
    }
    else if(num==38)
    {
        strcpy(word, "Verkis");
    }
    else if(num==39)
    {
        strcpy(word, "Victor");
    }
    else if(num==40)
    {
        strcpy(word, "Wels Corgidus");
    }
}

int word_present(char c, char word[], char wtyk[]) //checks if the letter is present in the word or name
{
    int presence=0;
    for(int i=0; i<strlen(word); ++i)
    {
        if(word[i]==c || (word[i]<=90 && word[i]>=65 && c>=97 && c<=122 && word[i]==c-32) || ((word[i]<=122 && word[i]>=97 && c>=65 && c<=90 && word[i]==c+32)))
        {
            presence=1;
            wtyk[i]=word[i];
        }
    }
    return presence;
}

char hint(char word[], char wtyk[]) //helps the player through finding letters
{
    for(int i=0; i<strlen(word); ++i)
    {
        if(wtyk[i]=='_')
        {
            return word[i];
        }
    }
}

void hangman(char word[], char wtyk[])  //the game
{
    int chances = 7;
    char choice;
    char hangmann[8][11];
    int hints=3;
    hangmann[0][0]=hangmann[0][10]=' ';
    for(int i=1; i<10; ++i)
    {
        hangmann[0][i]='_';
    }
    for(int i=1; i<8; ++i)
    {
        hangmann[i][0]='|';
    }
    for(int i=1; i<7; ++i)
    {
        for(int j=1; j<=10; ++j)
        {
            hangmann[i][j]=' ';
        }
    }
    for(int i=1; i<=10; ++i)
    {
        hangmann[7][i]='_';
    }
    while(chances>0)
    {
        if(strcmp(word, wtyk)==0)
        {
            printf("You won!!!\n");
            break;
        }
        scanf(" %c", &choice);
        if(choice=='*' && hints>0)
        {
            char c=hint(word, wtyk);
            int temp=word_present(c, word, wtyk);
            printf("%s\n", wtyk);
            hints--;
            printf("You have %d hints now.. please be careful\n", hints);
        }
        else if(word_present(choice, word, wtyk)==1)
        {
            printf("%s\n", wtyk);
        }
        else
        {
            chances--;
            if(chances==6)
            {
                hangmann[1][9]='|';
            }
            else if(chances==5)
            {
                hangmann[2][9]=2;
            }
            else if(chances==4)
            {
                hangmann[3][9]=hangmann[4][9]='|';
            }
            else if(chances==3)
            {
                hangmann[3][10]='/';
            }
            else if(chances==2)
            {
                hangmann[3][8]='\\';
            }
            else if(chances==1)
            {
                hangmann[5][10]='\\';
            }
            for(int i=0; i<8; ++i)
            {
                for(int j=0; j<11; ++j)
                {
                    printf("%c",hangmann[i][j]);
                }
                printf("\n");
            }
        }
    }
    if(chances==0)
    {
        hangmann[5][8]='/';
        printf("\n\n\n...Hangman died.\n");
        for(int i=0; i<8; ++i)
        {
            for(int j=0; j<11; ++j)
            {
                printf("%c", hangmann[i][j]);
            }
            printf("\n");
        }
    }
    printf("The character was... %s", word);
}

int main()
{
    printf("Game Rules: \n");
    printf("1. You have to guess letters in the randomly generated character's from the comic, The Greatest Estate Developer\n");
    printf("2. If you choose a wrong word, hangman will get closer to dying\n");
    printf("3. If you get the word right, the position of the word in the name will be displayed\n");
    printf("4. If hangman dies, you lose.\n");
    printf("5. If you need help, press *\n");
    printf("6. The hints are limited. So don't waste them.\n");
    printf("\nHave funnn\n\n");
    char * word = malloc(100 * sizeof(char));
    word_selector(word);
    char * wtyk = malloc((strlen(word) + 1) * sizeof(char));
    for(int i=0; i<strlen(word); ++i)
    {
        if(word[i]==' ')
        {
            wtyk[i]=' ';
        }
        else
        {
            wtyk[i]='_';
        }
    }
    wtyk[strlen(word)]='\0';
    printf("%s\n", wtyk);
    hangman(word, wtyk);
    return 0;
}