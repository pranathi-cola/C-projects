#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

float calculator(char ques[], int low, int high);

float sub(char ques[], int low, int high, int part)
{
    bool leftisnumber=true, rightisnumber=true;
    for(int i=low; i<part; ++i)
    {
        if(ques[i]=='-' || ques[i]=='+' || ques[i]=='*' || ques[i]=='/')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(ques[i]=='-' || ques[i]=='+' || ques[i]=='*' || ques[i]=='/')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return (float)left-right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int left=0;
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        for(int i=part+1; i<high; ++i)
        {
            if(ques[i]=='+')
            {
                ques[i]='-';
            }
            else if(ques[i]=='-')
            {
                ques[i]='+';
            }
        }
        float right=calculator(ques, part+1, high);
        return left-right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int right=0;
        float left=calculator(ques, low, part);
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return left-right;
    }
    else
    {
        float left=calculator(ques, low, part);
        for(int i=part+1; i<high; ++i)
        {
            if(ques[i]=='+')
            {
                ques[i]='-';
            }
            else if(ques[i]=='-')
            {
                ques[i]='+';
            }
        }
        float right=calculator(ques, part+1, high);
        return left-right;
    }
}

float add(char ques[], int low, int high, int part)
{
    bool leftisnumber=true, rightisnumber=true;
    for(int i=low; i<part; ++i)
    {
        if(ques[i]=='+' || ques[i]=='*' || ques[i]=='/')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(ques[i]=='+' || ques[i]=='*' || ques[i]=='/')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return (float)left+right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int left=0;
        float right=calculator(ques, part+1, high);
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        return left+right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int right=0;
        float left=calculator(ques, low, part);
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return left+right;
    }
    else
    {
        float left=calculator(ques, low, part);
        float right=calculator(ques, part+1, high);
        return left+right;
    }
}

float multiply(char ques[], int low, int high, int part)
{
    bool leftisnumber=true, rightisnumber=true;
    for(int i=low; i<part; ++i)
    {
        if(ques[i]=='*' || ques[i]=='/')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(ques[i]=='*' || ques[i]=='/')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return (float)left*right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int left=0;
        float right=calculator(ques, part+1, high);
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        return left*right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int right=0;
        float left=calculator(ques, low, part);
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return left*right;
    }
    else
    {
        float left=calculator(ques, low, part);
        float right=calculator(ques, part+1, high);
        return left*right;
    }
}

float div(char ques[], int low, int high, int part)
{

    bool leftisnumber=true, rightisnumber=true;
    for(int i=low; i<part; ++i)
    {
        if(ques[i]=='/')
        {
            leftisnumber=false;
            break;
        }
    }
    for(int i=part+1; i<high; ++i)
    {
        if(ques[i]=='/')
        {
            rightisnumber=false;
            break;
        }
    }
    if(leftisnumber && rightisnumber)
    {
        int left=0, right=0;
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return left/(float)right;
    }
    else if(leftisnumber && !rightisnumber)
    {
        int left=0;
        for(int i=low; i<part; ++i)
        {
            left=left*10+(ques[i]-'0');
        }
        for(int i=part+1; i<high; ++i)
        {
            if(ques[i]=='*')
            {
                ques[i]='/';
            }
            else if(ques[i]=='/')
            {
                ques[i]='*';
            }
        }
        float right=calculator(ques, part+1, high);
        return left/right;
    }
    else if(!leftisnumber && rightisnumber)
    {
        int right=0;
        float left=calculator(ques, low, part);
        for(int i=part+1; i<high; ++i)
        {
            right=right*10+(ques[i]-'0');
        }
        return left/right;
    }
    else
    {
        float left=calculator(ques, low, part);
        for(int i=part+1; i<high; ++i)
        {
            if(ques[i]=='*')
            {
                ques[i]='/';
            }
            else if(ques[i]=='/')
            {
                ques[i]='*';
            }
        }
        float right=calculator(ques, part+1, high);
        return left/right;
    }
}

float calculator(char ques[], int low, int high)
{
    bool isnumber = true;
    for(int i=low; i<high; ++i)
    {
        if(ques[i]=='-')
        {
            isnumber = false;
            float result = sub(ques, low, high, i);
            return result;
        }
    }
    for(int i=low; i<high; ++i)
    {
        if(ques[i]=='+')
        {
            isnumber = false;
            float result = add(ques, low, high, i);
            return result;
        }
    }
    for(int i=low; i<high; ++i)
    {
        if(ques[i]=='*')
        {
            isnumber = false;
            float result = multiply(ques, low, high, i);
            return result;
        }
    }
    for(int i=high-1; i>low; --i)
    {
        if(ques[i]=='/')
        {
            isnumber = false;
            float result = div(ques, low, high, i);
            return result;
        }
    }
    if(isnumber)
    {
        int result=0;
        for(int i=low; i<high; ++i)
        {
            result=result*10+(ques[i]-'0');
        }
        return (float)result;
    }
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
    float result=calculator(question, 0, strlen(question));
    printf("%.2f\n",result);
    return 0;
}