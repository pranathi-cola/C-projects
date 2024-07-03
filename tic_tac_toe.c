#include <stdio.h>
#include <stdbool.h>

void enter(char c, int place, char arr[][7])
{
    place--;
    int i=2*((place/3)+1)-1, j=2*((place%3)+1)-1;
    arr[i][j] = c;
    for(int i=0; i<7; ++i)
    {
        for(int j=0; j<7; ++j)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}

bool haswon(char arr[][7], char c)
{
    bool win = false;
    for(int i=1; i<7; i+=2)
    {
        if(arr[i][1]==c && arr[i][3]==c && arr[i][5]==c)
        {
            win = true;
        }
        if(arr[1][i]==c && arr[3][i]==c && arr[5][i]==c)
        {
            win = true;
        }
    }
    if(arr[1][1]==c && arr[3][3]==c && arr[5][5]==c)
    {
        win = true;
    }
    if(arr[5][1]==c && arr[3][3]==c && arr[1][5]==c)
    {
        win = true;
    }
    return win;
}

void ttt()
{
    char visuals[7][7];
    for(int i=0; i<7; ++i)
    {
        for(int j=0; j<7; ++j)
        {
            if(i%2==0 && j%2==1)
            {
                visuals[i][j]='-';
            }
            else if(i%2==1 && j%2==0)
            {
                visuals[i][j]='|';
            }
            else
            {
                visuals[i][j]=' ';
            }
        }
    }
    char x='x', o='o';
    int place=-1;
    bool haswinner = false;
    int n = 0;
    while(!(n>8 || haswinner))
    {
        printf("Player %d, select a position (1 to 9): ", (n%2)+1);
        scanf("%d",&place);
        while(place<1 || place>9 || visuals[2*(((place-1)/3)+1)-1][2*(((place-1)%3)+1)-1]==x || visuals[2*((place/3)+1)-1][2*((place%3)+1)-1]==o)
        {
            printf("Enter an allowed position, please: ");
            scanf("%d",&place);
        }
        if(n%2==0)
        {
            enter(x, place, visuals);
            haswinner = haswon(visuals, x);
        }
        else
        {
            enter(o, place, visuals);
            haswinner = haswon(visuals, o);
        }
        if(haswinner)
        {
            printf("\nCongratulations, Player %d. You won!!!\n\n", (n%2)+1);
        }
        n++;
    }
    if(n>=9 && !haswinner)
    {
        printf("It's a draw\n\n");
    }
}

int main()
{
    printf("Would you like to play Tic-Tac-Toe (Yes/No): ");
    char play;
    scanf("%c",&play);
    while(play == 'Y' || play == 'y')
    {
        ttt();
        printf("Would you like to play Tic-Tac-Toe again: ");
        getchar();
        scanf("%c",&play);
    }
    return 0;
}