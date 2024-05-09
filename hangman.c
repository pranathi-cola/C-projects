#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void word_selector(char word[]) //To selecte the name of the character
{
    srand(time(NULL));
    int num = rand();
    num=num%127;
    num=num+1;
    if(num==1)
    {
        strcpy(word, "Ant Man");
    }
    else if(num==2)
    {
        strcpy(word, "Abomination");
    }
    else if(num==3)
    {
        strcpy(word, "Agatha Harkness");
    }
    else if(num==4)
    {
        strcpy(word, "Ancient One");
    }
    else if(num==5)
    {
        strcpy(word, "Ben Parker");
    }
    else if(num==6)
    {
        strcpy(word, "Baron Zemo");
    }
    else if(num==7)
    {
        strcpy(word, "Black Bolt");
    }
    else if(num==8)
    {
        strcpy(word, "Betty Ross");
    }
    else if(num==9)
    {
        strcpy(word, "Black Panther");
    }
    else if(num==10)
    {
        strcpy(word, "Black Widow");
    }
    else if(num==11)
    {
        strcpy(word, "Bruce Banner");
    }
    else if(num==12)
    {
        strcpy(word, "Cable");
    }
    else if(num==13)
    {
        strcpy(word, "Captain America");
    }
    else if(num==14)
    {
        strcpy(word, "Carnage");
    }
    else if(num==15)
    {
        strcpy(word, "Carol Danvers");
    }
    else if(num==16)
    {
        strcpy(word, "Chitauri");
    }
    else if(num==17)
    {
        strcpy(word, "Colossus");
    }
    else if(num==18)
    {
        strcpy(word, "Cyclops");
    }
    else if(num==19)
    {
        strcpy(word, "Clint Barton");
    }
    else if(num==20)
    {
        strcpy(word, "Daredevil");
    }
    else if(num==21)
    {
        strcpy(word, "Deadpool");
    }
    else if(num==22)
    {
        strcpy(word, "Deke Shaw");
    }
    else if(num==23)
    {
        strcpy(word, "Doctor Octopus");
    }
    else if(num==24)
    {
        strcpy(word, "Doctor Strange");
    }
    else if(num==25)
    {
        strcpy(word, "Dormamu");
    }
    else if(num==26)
    {
        strcpy(word, "Doctor Doom");
    }
    else if(num==27)
    {
        strcpy(word, "Echo");
    }
    else if(num==28)
    {
        strcpy(word, "Falcon");
    }
    else if(num==29)
    {
        strcpy(word, "Fred Flash Thompson");
    }
    else if(num==30)
    {
        strcpy(word, "Gamora");
    }
    else if(num==31)
    {
        strcpy(word, "Ghost Rider");
    }
    else if(num==32)
    {
        strcpy(word, "Yellowjacket");
    }
    else if(num==33)
    {
        strcpy(word, "Green Goblin");
    }
    else if(num==34)
    {
        strcpy(word, "Gwen Stacy");
    }
    else if(num==35)
    {
        strcpy(word, "Groot");
    }
    else if(num==36)
    {
        strcpy(word, "Gilgamesh");
    }
    else if(num==37)
    {
        strcpy(word, "Hawkeye");
    }
    else if(num==38)
    {
        strcpy(word, "Heimdall");
    }
    else if(num==39)
    {
        strcpy(word, "Hela");
    }
    else if(num==40)
    {
        strcpy(word, "He who remains");
    }
    else if(num==41)
    {
        strcpy(word, "Hobgoblin");
    }
    else if(num==42)
    {
        strcpy(word, "Harry Osborn");
    }
    else if(num==43)
    {
        strcpy(word, "Howard the Duck");
    }
    else if(num==44)
    {
        strcpy(word, "Hulk");
    }
    else if(num==45)
    {
        strcpy(word, "Human Torch");
    }
    else if(num==46)
    {
        strcpy(word, "Howard Stark");
    }
    else if(num==47)
    {
        strcpy(word, "Iceman");
    }
    else if(num==48)
    {
        strcpy(word, "Iron Fist");
    }
    else if(num==49)
    {
        strcpy(word, "Iron Man");
    }
    else if(num==50)
    {
        strcpy(word, "James Rupert Jim Rhodes");
    }
    else if(num==51)
    {
        strcpy(word, "War Machine");
    }
    else if(num==52)
    {
        strcpy(word, "James Buchanan Bucky Barnes");
    }
    else if(num==53)
    {
        strcpy(word, "Jane Foster");
    }
    else if(num==54)
    {
        strcpy(word, "Janet van Dyne");
    }
    else if(num==55)
    {
        strcpy(word, "Jarvis, Edwin");
    }
    else if(num==56)
    {
        strcpy(word, "Jennifer Walters");
    }
    else if(num==57)
    {
        strcpy(word, "Jessica Jones");
    }
    else if(num==58)
    {
        strcpy(word, "Justin Hammer");
    }
    else if(num==59)
    {
        strcpy(word, "J Jonah Jameson");
    }
    else if(num==60)
    {
        strcpy(word, "Kang the Conqueror");
    }
    else if(num==61)
    {
        strcpy(word, "Kingpin");
    }
    else if(num==62)
    {
        strcpy(word, "Kree");
    }
    else if(num==63)
    {
        strcpy(word, "Korg");
    }
    else if(num==64)
    {
        strcpy(word, "Kate Bishop");
    }
    else if(num==65)
    {
        strcpy(word, "Kate Bishop");
    }
    else if(num==66)
    {
        strcpy(word, "Lizard");
    }
    else if(num==67)
    {
        strcpy(word, "Loki");
    }
    else if(num==68)
    {
        strcpy(word, "Mary Parker");
    }
    else if(num==69)
    {
        strcpy(word, "Mary Jane Watson");
    }
    else if(num==70)
    {
        strcpy(word, "May Parker");
    }
    else if(num==71)
    {
        strcpy(word, "Miles Morales");
    }
    else if(num==72)
    {
        strcpy(word, "Ms Marvel");
    }
    else if(num==73)
    {
        strcpy(word, "MODOK");
    }
    else if(num==74)
    {
        strcpy(word, "Morbius");
    }
    else if(num==75)
    {
        strcpy(word, "Moon Knight");
    }
    else if(num==76)
    {
        strcpy(word, "Mysterio");
    }
    else if(num==77)
    {
        strcpy(word, "Makkari");
    }
    else if(num==78)
    {
        strcpy(word, "Michelle Jones-Watson");
    }
    else if(num==79)
    {
        strcpy(word, "Nebula");
    }
    else if(num==80)
    {
        strcpy(word, "Nick Fury");
    }
    else if(num==81)
    {
        strcpy(word, "Odin");
    }
    else if(num==82)
    {
        strcpy(word, "Okoye");
    }
    else if(num==83)
    {
        strcpy(word, "Paladin");
    }
    else if(num==84)
    {
        strcpy(word, "Phil Coulson");
    }
    else if(num==85)
    {
        strcpy(word, "Peter Parker");
    }
    else if(num==86)
    {
        strcpy(word, "Peter Quill");
    }
    else if(num==87)
    {
        strcpy(word, "Pietro Maximoff");
    }
    else if(num==88)
    {
        strcpy(word, "Quicksilver");
    }
    else if(num==89)
    {
        strcpy(word, "Ralph Bohner");
    }
    else if(num==90)
    {
        strcpy(word, "Red Skull");
    }
    else if(num==91)
    {
        strcpy(word, "RHINO");
    }
    else if(num==92)
    {
        strcpy(word, "Richard Parker");
    }
    else if(num==93)
    {
        strcpy(word, "Rocket Raccoon");
    }
    else if(num==94)
    {
        strcpy(word, "Ronan the Accuser");
    }
    else if(num==95)
    {
        strcpy(word, "Sandman");
    }
    else if(num==96)
    {
        strcpy(word, "Scarlet Witch");
    }
    else if(num==97)
    {
        strcpy(word, "Sersi");
    }
    else if(num==98)
    {
        strcpy(word, "Shang Chi");
    }
    else if(num==99)
    {
        strcpy(word, "Skrull");
    }
    else if(num==100)
    {
        strcpy(word, "Sebastian Shaw");
    }
    else if(num==101)
    {
        strcpy(word, "SpiderGirl");
    }
    else if(num==102)
    {
        strcpy(word, "SpiderMan");
    }
    else if(num==103)
    {
        strcpy(word, "StarLord");
    }
    else if(num==104)
    {
        strcpy(word, "Sylvie");
    }
    else if(num==105)
    {
        strcpy(word, "Steven strange");
    }
    else if(num==106)
    {
        strcpy(word, "Thanos");
    }
    else if(num==107)
    {
        strcpy(word, "Thing");
    }
    else if(num==108)
    {
        strcpy(word, "Thor");
    }
    else if(num==109)
    {
        strcpy(word, "Tony Stark");
    }
    else if(num==110)
    {
        strcpy(word, "Ultron");
    }
    else if(num==111)
    {
        strcpy(word, "The Watcher");
    }
    else if(num==112)
    {
        strcpy(word, "Uatu");
    }
    else if(num==113)
    {
        strcpy(word, "Valkyrie");
    }
    else if(num==114)
    {
        strcpy(word, "Venom");
    }
    else if(num==115)
    {
        strcpy(word, "Vision");
    }
    else if(num==116)
    {
        strcpy(word, "Vulture");
    }
    else if(num==117)
    {
        strcpy(word, "Wasp");
    }
    else if(num==118)
    {
        strcpy(word, "Winter Soldier");
    }
    else if(num==119)
    {
        strcpy(word, "Wolverine");
    }
    else if(num==120)
    {
        strcpy(word, "Jimmy Woo");
    }
    else if(num==121)
    {
        strcpy(word, "Wong");
    }
    else if(num==122)
    {
        strcpy(word, "Wanda Maximoff");
    }
    else if(num==123)
    {
        strcpy(word, "Adam Warlock");
    }
    else if(num==124)
    {
        strcpy(word, "Xman");
    }
    else if(num==125)
    {
        strcpy(word, "Yelena Belova");
    }
    else if(num==126)
    {
        strcpy(word, "Yondu");
    }
    else if(num==127)
    {
        strcpy(word, "Zeus");
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
    int hints;
    int mode;
    printf("Choose Difficulty Level- 1, 2, 3 (with 3 being the most difficult): ");
    scanf("%d",&mode);
    hints=4-mode;
    printf("%s\n", wtyk);
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
    printf("1. You have to guess letters in the randomly generated character's from MCU\n");
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
    hangman(word, wtyk);
    return 0;
}
