#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int calculator(char question[], int low, int high);

int add(char question[], int low, int high, int part)
{
    bool leftisnumber = true, rightisnumber = true;
    for(int i=low; i<part; ++i)
    {
        if(question[i]=='*' || question[i]=='/' || question[i]=='-')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(question[i]=='*' || question[i]=='/' || question[i]=='-')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part && question[i]>='0' && question[i]<='9'; ++i)
        {
            left=left*10+(question[i]-'0');
        }
        for(int i=part+1; i<high && question[i]>='0' && question[i]<='9'; ++i)
        {
            right=right*10+(question[i]-'0');
        }
        printf("%d %d %c add\n",left, right, question[part]);
        return left+right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int right = calculator(question, part+1, high);
        int left=0;
        for(int i=low; i<part && question[i]>='0' && question[i]<='9'; ++i)
        {
            left=left*10+(question[i]-'0');
        }
        printf("%d %d %c add\n",left, right, question[part]);
        return left+right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int left = calculator(question, low, part);
        int right=0;
        for(int i=part+1; i<high && question[i]>='0' && question[i]<='9'; ++i)
        {
            right=right*10+(question[i]-'0');
        }
        printf("%d %d %c add\n",left, right, question[part]);
        return left+right;
    }
    else
    {
        int left = calculator(question, low, part);
        int right = calculator(question, part+1, high);
        printf("%d %d %c add\n",left, right, question[part]);
        return left+right;
    }
}

int sub(char question[], int low, int high, int part)
{
    bool leftisnumber = true, rightisnumber = true;
    for(int i=low; i<part; ++i)
    {
        if(question[i]=='*' || question[i]=='/')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(question[i]=='*' || question[i]=='/')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part && question[i]>='0' && question[i]<='9'; ++i)
        {
            left=left*10+(question[i]-'0');
        }
        for(int i=part+1; i<high && question[i]>='0' && question[i]<='9'; ++i)
        {
            right=right*10+(question[i]-'0');
        }
        printf("%d %d %c sub\n",left, right, question[part]);
        return left-right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int right = calculator(question, part+1, high);
        int left=0;
        for(int i=low; i<part && question[i]>='0' && question[i]<='9'; ++i)
        {
            left=left*10+(question[i]-'0');
        }
        printf("%d %d %c sub\n",left, right, question[part]);
        return left-right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int left = calculator(question, low, part);
        int right=0;
        for(int i=part+1; i<high && question[i]>='0' && question[i]<='9'; ++i)
        {
            right=right*10+(question[i]-'0');
        }
        printf("%d %d %c sub\n",left, right, question[part]);
        return left-right;
    }
    else
    {
        int left = calculator(question, low, part);
        int right = calculator(question, part+1, high);
        printf("%d %d %c sub\n",left, right, question[part]);
        return left-right;
    }
}

int multiply(char question[], int low, int high, int part)
{
    bool leftisnumber = true, rightisnumber = true;
    for(int i=low; i<part; ++i)
    {
        if(question[i]=='/')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(question[i]=='/')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part && question[i]>='0' && question[i]<='9'; ++i)
        {
            left=left*10+(question[i]-'0');
        }
        for(int i=part+1; i<high && question[i]>='0' && question[i]<='9'; ++i)
        {
            right=right*10+(question[i]-'0');
        }
        printf("%d %d %c mul\n",left, right, question[part]);
        return left*right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int right = calculator(question, part+1, high);
        int left=0;
        for(int i=low; i<part && question[i]>='0' && question[i]<='9'; ++i)
        {
            left=left*10+(question[i]-'0');
        }
        printf("%d %d %c mul\n",left, right, question[part]);
        return left*right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int left = calculator(question, low, part);
        int right=0;
        for(int i=part+1; i<high && question[i]>='0' && question[i]<='9'; ++i)
        {
            right=right*10+(question[i]-'0');
        }
        printf("%d %d %c mul\n",left, right, question[part]);
        return left*right;
    }
    else
    {
        int left = calculator(question, low, part);
        int right = calculator(question, part+1, high);
        printf("%d %d %c mul\n",left, right, question[part]);
        return left*right;
    }
}

int divide(char question[], int low, int high, int part)
{
    int left=0, right=0;
    for(int i=low; i<part; ++i)
    {
        left=left*10+(question[i]-'0');
    }
    for(int i=part+1; i<high; ++i)
    {
        right=right*10+(question[i]-'0');
    }
    printf("%d %d %c div\n",left, right, question[part]);
    return left/right;
}

int calculator(char question[], int low, int high)
{
    bool isnumber=true;
    for(int i=low; i<high; ++i)
    {
        if(question[i]=='+')
        {
            isnumber = false;
            int result = add(question, low, high, i);
            return result;
        }
    }
    for(int i=low; i<high; ++i)
    {
        if(question[i]=='-')
        {
            isnumber = false;
            int result = sub(question, low, high, i);
            return result;
        }
    }
    for(int i=low; i<high; ++i)
    {
        if(question[i]=='*')
        {
            isnumber = false;
            int result = multiply(question, low, high, i);
            return result;
        }
    }
    for(int i=low; i<high; ++i)
    {
        if(question[i]=='/')
        {
            isnumber = false;
            int result = divide(question, low, high, i);
            return result;
        }
    }
    int result=0;
    for(int i=low; i<high; ++i)
    {
        result=result*10+(question[i]);
    }
    return result;
}

int main()
{
    char question[200];
    fgets(question, 200, stdin);
    for(int i=0; i<strlen(question); ++i)
    {
        if(question[i]==' ' || question[i]=='\t' || question[i]=='\n')
        {
            for(int j=i; j<strlen(question); ++j)
            {
                question[j]=question[j+1];
            }
        }
    }
    int result = calculator(question, 0, strlen(question));
    printf("%d",result);
    return 0;
}