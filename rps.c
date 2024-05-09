#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//A simple Rock, Paper, Scissors Code
//The game might be cringe.. but I had fun so idc loll

int main()
{
    int num;    //Keeps track of the computer's choice
    char c;    //Keeps track of the choice of the player to play the game or not
    int rps, score_diff=0, player=0, computer=0; //rps- the player's choice and the other variables to keep track of amout of wins and losses

    srand(time(NULL));
    printf("Game rules: \n");
    printf("1. Enter a valid choice else you will be disqualified.\n");
    printf("2. These are the game conventions that should be followed:\n");
    printf("\tRock \t- 1\n");
    printf("\tPaper \t- 2\n");
    printf("\tScissors- 3\n");
    printf("3. Once you enter no, the overall scores will be displayed and the winner will be determined.\n");
    printf("4. Be a slave to corporate world and eventually lose your sense of self as you fall deeper and deeper into this endless abyss of mysery and self-hatred without ever thinking of questioning the system you were born in because that's how you were raised to be.. anywaysss have funn!!!\n\n");

    printf("Game on??? (y/n): ");
    scanf("%c",&c);

    while(c!='n' && c!='N')
    {
        switch(c)
        {
            case 'y':
            {
                num=rand();
                num=num%3;
                num=num+1;
                printf("Rock! Paper! scissors!!! (1/2/3): ");
                scanf("%d",&rps);
                if(rps<1 || rps>3)
                {
                    printf("Action against game rules...\n");
                    printf("Player is disqualified\n");
                    break;
                }
                if(num==rps)
                {
                    printf("It's a tie!!!\n");
                }
                else if(rps == 1)
                {
                    if(num == 2)
                    {
                        printf("You Lost!!!\n");
                        score_diff--;
                        computer++;
                    }
                    else if(num == 3)
                    {
                        printf("You Win!!!\n");
                        score_diff++;
                        player++;
                    }
                }
                else if(rps == 2)
                {
                    if(num == 3)
                    {
                        printf("You Lost!!!\n");
                        score_diff--;
                        computer++;
                    }
                    else if(num == 1)
                    {
                        printf("You Win!!!\n");
                        score_diff++;
                        player++;
                    }
                }
                else if(rps == 3)
                {
                    if(num == 1)
                    {
                        printf("You Lost!!!\n");
                        score_diff--;
                        computer++;
                    }
                    else if(num == 2)
                    {
                        printf("You Win!!!\n");
                        score_diff++;
                        player++;
                    }
                }
                break;
            }
            case 'Y':
            {
                num=rand();
                num=num%3;
                num=num+1;
                printf("Rock! Paper! scissors!!! (1/2/3): ");
                scanf("%d",&rps);
                if(rps<1 || rps>3)
                {
                    printf("Action against game rules...\n");
                    printf("Player is disqualified\n");
                    break;
                }
                if(num==rps)
                {
                    printf("It's a tie!!!\n");
                }
                else if(rps == 1)
                {
                    if(num == 2)
                    {
                        printf("You Lost!!!\n");
                    }
                    else if(num == 3)
                    {
                        printf("You Win!!!\n");
                    }
                }
                else if(rps == 2)
                {
                    if(num == 3)
                    {
                        printf("You Lost!!!\n");
                    }
                    else if(num == 1)
                    {
                        printf("You Win!!!\n");
                    }
                }
                else if(rps == 3)
                {
                    if(num == 1)
                    {
                        printf("You Lost!!!\n");
                    }
                    else if(num == 2)
                    {
                        printf("You Win!!!\n");
                    }
                }
                break;
            }
            case 'n':
            {
                break;
            }
            case 'N':
            {
                break;
            }
        }
        if(c!='y' && c!='Y')
        {
            printf("Enter a valid choice please :)\n");
        }
        else
        {
            printf("Game on??? (y/n): ");
        }
        scanf(" %c",&c);
    }
    printf("\n\nThe final scores are...(%d : %d)\n", player, computer);
    if(score_diff>0)
    {
        printf("You win by a score difference, %d\n", score_diff);
    }
    else if(score_diff<0)
    {
        printf("You love by a score difference, %d\n", -score_diff);
    }
    else
    {
        printf("It's a Tie!!!");
    }
    return 0;
}
