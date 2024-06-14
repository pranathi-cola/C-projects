#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int die()
{
    time_t t;
    srand((unsigned) time(&t));
    int n = (rand()) % 5;
    printf(", your dice has been cast. Would you like to move further? (y/n): ");
    char c;
    scanf("%c",&c);
    getchar();
    if(c=='n' || c=='N')
    {
        printf("You rolled %d\n", ++n);
        return 0;
    }
    return ++n;
}

void draw_gargoyle()
{
    printf(" ,                                                               ,\n");
    printf(" \'.                                                           .'/\n");
    printf("  ),\\                                                         /,(\n");
    printf(" /__\'.                                                     .'/__\\\n");
    printf(" \\  `'.'-.__                                           __.-'.'`  /\n");
    printf("  `)   `'-. \\                                         / .-'`   ('\n");
    printf("  /   _.--'\\ '.          ,               ,          .' /'--._   \\\n");
    printf("  |-'`      '. '-.__    / \\             / \\    __.-' .'      `'-|\n");
    printf("  \\         _.`'-.,_'-.|/\\ \\    _,_    / /\\|.-'_,.-'`._         /\n");
    printf("   `\\    .-'       /'-.|| \\ |.-\"   \"-.| / ||.-'\\       '-.    /`\n");
    printf("     )-'`        .'   :||  / -.\\\\ //.- \\  ||:   '.        `'-(\n");
    printf("    /          .'    / \\\\_ |  /o`^'o\\  | _// \\    '.          \\\n");
    printf("    \\       .-'    .'   `--|  `\"/ \\\"`  |--`   '.    '-.       /\n");
    printf("     `)  _.'     .'    .--.; |\\\\__\"__/| ;.--.    '.     '._  ('\n");
    printf("     /_.'     .-'  _.-'     \\\\ \\/^\\/ //     `-._  '-.     '._\\\n");
    printf("     \\     .'`_.--'          \\\\     //          `--._`'.     /\n");
    printf("      '-._' /`            _   \\\\-.-//   _            `\\ '_.-'\n");
    printf("          `<     _,..--''`|    \\`\"`/    |`''--..,_     >`\n");
    printf("           _\\  ``--..__   \\     `'`     /   __..--``  /_\n");
    printf("          /  '-.__     ``'-;    / \\    ;-'``     __.-'  \\\n");
    printf("         |    _   ``''--..  \'-' | '-'/  ..--''``   _    |\n");
    printf("         \\     '-.       /   |/--|--\\|   \\       .-'     /\n");
    printf("          '-._    '-._  /    |---|---|    \\  _.-'    _.-'\n");
    printf("              `'-._   '/ / / /---|---\\ \\ \\ \\'   _.-'`\n");
    printf("                   '-./ / / / \\`---`/ \\ \\ \\ \\.-'\n");
    printf("                       `)` `  /'---'\\  ` `(`\n");
    printf("                      /`     |       |     `\\\n");
    printf("                     /  /  | |       | |  \\  \\\n");
    printf("                 .--'  /   | '.     .' |   \\  '--.\n");
    printf("                /_____/|  / \\._\\   /_./ \\  |\\_____\\\n");
    printf("               (/      (/'     \\) (/     `\\)      \\)\n");
}

void draw_beehive()
{
    printf("     ^^      .-=-=-=-.  ^^\n");
    printf(" ^^        (`-=-=-=-=-`)         ^^\n");
    printf("         (`-=-=-=-=-=-=-`)  ^^         ^^\n");
    printf("   ^^   (`-=-=-=-=-=-=-=-`)   ^^                            ^^\n");
    printf("       ( `-=-=-=-(@)-=-=-` )      ^^\n");
    printf("       (`-=-=-=-=-=-=-=-=-`)  ^^\n");
    printf("       (`-=-=-=-=-=-=-=-=-`)              ^^\n");
    printf("       (`-=-=-=-=-=-=-=-=-`)                      ^^\n");
    printf("       (`-=-=-=-=-=-=-=-=-`)  ^^\n");
    printf("        (`-=-=-=-=-=-=-=-`)          ^^\n");
    printf("         (`-=-=-=-=-=-=-`)  ^^                 ^^\n");
    printf("           (`-=-=-=-=-`)\n");
    printf("            `-=-=-=-=-`\n");
}

void draw_poop()
{
    printf("                                  _____\n");
    printf("                           ______/     \\______\n");
    printf("                    ______/                   \\______\n");
    printf("                ___/                                 \\___\n");
    printf("            ___/                _________                \\___\n");
    printf("         __/             ______/         \\___                \\__\n");
    printf("        /           ____/                   /       _           \\\n");
    printf("      _/        ___/_                      /       / \\___        \\_\n");
    printf("     /        _/'-,  `---._               /       /      \\_        \\\n");
    printf("    /  ______/(0} `, , ` , )             /       /         \\_       \\\n");
    printf("   /   V          ; ` , ` (             /       /      ,'~~~~~~`,    \\\n");
    printf("  |    `.____,- '  (,  `  , )          /       /       :`,-'\"\"`. \";   |\n");
    printf("  |      `-------._);  ,  ` `,        /       /        \\;:      )``:  |\n");
    printf(" /       /      )  ) ; ` ,,  :       /       /          ``      : ';   \\ \n");
    printf("/       /      (  (`;:  ; ` ;:\\     /       /                   ;;;,    \\\n");
    printf("|      /       (:  )``;:;;)`'`'`--./       /     ____       _,-';;`     |\n");
    printf("|      |       :`  )`;)`)`'   :   /       / ~~~~~    ~~~`--',.;;;|      |\n");
    printf("|      |       `--;~~~~~      `  /       /,  \"  \"   \"` \",, \\ ;`` |      |\n");
    printf("|      |         ( ;         ,  /       /         ;      `; ;    |      |\n");
    printf("|      |         (; ; ;      ` /       /         ,`       ` :    |        ><\n");
    printf("|      |          (; /        /       /          ` ;     ; :     |\n");
    printf("|      \\          ;(_; ;  :  /       /` ; ; ,,,\"\"\";}     `;      /    ><\n");
    printf("\\       \\         : `; `; ` /       /,;,''''   );;`);     ;     / ><        ><\n");
    printf(" \\       |        ;' :;   ;/       /          (;` :( ; ,  ;    |         ><\n");
    printf("  |      |        |, `;; ,/       /           `)`; `(; `  `;   |     (`\\\n");
    printf("  |       \\       ;  ;;  ``:     /             `).:` \\;,   `. /      _> )_\n");
    printf("   \\       \\_  ,-'   ;`;;:;`    /              ;;'`;;  `)   )/    ,-' ,-. `;\n");
    printf("    \\        \\_ ~~~,-`;`;,\"    /               ~~~~~  ,-'   ;     `\"\"/  /\"\"\n");
    printf("     \\_        \\___\"\"\"/\"\"     /                       `\"\"/\"\"         `-\"\n");
    printf("       \\           \\_/       /                   ____/^^^        /\n");
    printf("        \\__                 /__           ______/             __/\n");
    printf("           \\___                \\_________/                ___/\n");
    printf("               \\___                                   ___/\n");
    printf("                   \\______                     ______/\n");
    printf("                           \\______       ______/\n");
    printf("                                 \\_____/\n");
}

void draw_bull()
{
    printf("    ,           ,\n");
    printf("   /             \\\n");
    printf("  ((__-^^-,-^^-__))\n");
    printf("   `-_---' `---_-'\n");
    printf("    <__|o` 'o|__>\n");
    printf("       \\  `  /\n");
    printf("        ): :(\n");
    printf("        :o_o:\n");
    printf("         \"-\"  \n");
}

void draw_sleepy()
{
    printf("                 _____|~~\\_____      _____________\n");
    printf("             _-~               \\    |    \\\n");
    printf("             _-    | )     \\    |__/   \\   \\\n");
    printf("             _-         )   |   |  |     \\  \\\n");
    printf("             _-    | )     /    |--|      |  |\n");
    printf("            __-_______________ /__/_______|  |_________\n");
    printf("           (                |----         |  |\n");
    printf("            `---------------'--\\\\      .`--'          \n");
    printf("                                         `||||\n");
}

void draw_skeleton()
{
    printf("           _..--\"\"---.\n");
    printf("          /           \".\n");
    printf("          `            |\n");
    printf("          |'._  ,._ |/\"\\\n");
    printf("          |  _J<__/.v._/\n");
    printf("           \\( ,~._,,,,-)\n");
    printf("            `-\' \\`,,j|\n");
    printf("               \\_,____J\n");
    printf("          .--.__)--(__.--.\n");
    printf("         /  `-----..--'. j\n");
    printf("         '.- '`--` `--' \\\\\n");
    printf("        //  '`---'`  `-' \\\\\n");
    printf("       //   '`----'`.-.-' \\\\\n");
    printf("     _//     `--- -'   \' | \\________\n");
    printf("    |  |         ) (      `.__.---- -'\\\n");
    printf("     \7          \\`-(               74\\\\\\\n");
    printf("     ||       _  /`-(               l|//7__\n");
    printf("     |l    ('  `-)-/_.--.          f''` -.-\"|\n");
    printf("     |\\     l\\_  `-'    .'         |     |  |\n");
    printf("     llJ   _ _)J--._.-('           |     |  l\n");
    printf("     |||( ( '_)_  .l   \". _    ..__I     |  L\n");
    printf("     ^\\\\||`'   \"   '\"-. \" )''`'---'     L.-'`-.._\n");
    printf("          \\ |           ) /.              ``'`-.._``-.\n");
    printf("          l l          / / |                      |''|\n");
    printf("           \" \\        / /   \"-..__                |  |\n");
    printf("           | |       / /          1       ,- t-...J_.'\n");
    printf("           | |      / /           |       |  |\n");
    printf("           J  \\  /\"  (            l       |  |\n");
    printf("           | ().'`-()/            |       |  | \n");
    printf("          _.-\"_.____/             l       l.-l\n");
    printf("      _.-\"_.+\"|                  /        \\.  \\\n");
    printf("/\"\\.-\"_.-\"  | |                 /          \\   \\\n");
    printf("\\_   \"      | |                1            | `'|\n");
    printf("  |ll       | |                |            i   |\n");
    printf("  \\\\\\       |-\\               \\j ..          L,,'. `/\n");
    printf(" __\\\\\\     ( .-\\           .--'    ``--../..'      '-..\n");
    printf("   `'''`----`\\\\\\\\ .....--'''\n");
    printf("              \\\\\\\\                                   ''\n");
}

void draw_lions()
{
    printf("              _      _\n");
    printf("             (c\\-.--/a)\n");
    printf("              |q: p   /\\_            _____\n");
    printf("            __\\(_/  ).'  '---._.---'`     '---.__\n");
    printf("           /  (Y_)_/             /        : \\-._ \\\n");
    printf("   !!!!,,, \\_))'-';             (       _/   \\  '\\\\_\n");
    printf("  !!II!!!!!IIII,, \\_             \\     /      \\_  '.\\\n");
    printf("   !IIsndIIIII!!!!,,\\     /_      \\   |----.___ '-. \\'.__\n");
    printf("   !!!IIIIIIIIIIIIIIII\\   | '--._.-'  _)       \\  |  `'--'\n");
    printf("       '''!!!!IIIIIII/   .',, ((___.-'         / /\n");
    printf("             '''!!!!/  _/!!!!IIIIIII!!!!!,,,,,;,;,,,.....\n");
    printf("                   | /IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
    printf("                   | \\   ''IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
    printf("                   \\_,)     '''''!!!!IIIIIIIIIIIIIIII!!!!!!!!\n");
    printf("                                     ''''''''''!!!!!!!!!!!!!!!\n");    
}

void draw_snake()
{
    printf("                        _____\n");
    printf("                    .-'`     '.\n");
    printf("                 __/  __       \\\n");
    printf("                /  \\ /  \\       |    ___\n");
    printf("               | /`\\| /`\\|      | .-'  /^\\/^\\\n");
    printf("               | \\(/| \\(/|      |/     |) |)|\n");
    printf("              .-\\__/ \\__/       |      \\_/\\_/__..._\n");
    printf("      _...---'-.                /   _              '.\n");
    printf("     /,      ,             \\   '|  `\\                \\\n");
    printf("    | ))     ))           /`|   \\    `.       /)  /) |\n");
    printf("    | `      `          .'       |     `-._         /\n");
    printf("    \\                 .'         |     ,_  `--....-'\n");
    printf("     `.           __.' ,         |     / /`'''`\n");
    printf("       `'-.____.-' /  /,         |    / /\n");
    printf("           `. `-.-` .'  \\        /   / |\n");
    printf("             `-.__.'|    \\      |   |  |-.\n");
    printf("                _.._|     |     /   |  |  `'.\n");
    printf("          .-''``    |     |     |   /  |     `-.\n");
    printf("       .'`         /      /     /  |   |        '.\n");
    printf("     /`           /      /     |   /   |\\         \\\n");
    printf("    /            |      |      |   |   /\\          |\n");
    printf("   ||            |      /      |   /     '.        |\n");
    printf("   |\\            \\      |      /   |       '.      /\n");
    printf("   \\ `.           '.    /      |    \\        '---'/\n");
    printf("    \\  '.           `-./        \\    '.          /\n");
    printf("     '.  `'.            `-._     '.__  '-._____.'--'''''--.\n");
    printf("       '-.  `'--._          `.__     `';----`              \\\n");
    printf("          `-.     `-.          `.\"'```                     ;\n");
    printf("             `'-..,_ `-.         `'-.                     /\n");
    printf("                    '.  '.           '.                 .'\n");
    
}

int obstacles(int pos)
{
    if(pos==97)
    {
        printf("You've encountered an invincible Gargoyle. You died. \n");
        draw_gargoyle();
        return 0;
    }
    else if(pos==91)
    {
        printf("You encountered a bee hive. \n");
        draw_beehive();
        return 71;
    }
    else if(pos==86)
    {
        printf("You've stepped on dog poop. You went to wash it off. \n");
        draw_poop();
        return 19;
    }
    else if(pos==78)
    {
        printf("You met an angry bull. Your health declined. \n");
        draw_bull();
        return 61;
    }
    else if(pos==53)
    {
        printf("You are at a boring lecture. You slept and were thrown out of the class. \n");
        draw_sleepy();
        return 50;
    }
    else if(pos==46)
    {
        printf("You met a family of lions. You were almost dead but escaped. \n");
        draw_lions();
        return 26;
    }
    else if(pos==40)
    {
        printf("You've met a cute skeleton. You ran away in fear. \n");
        draw_skeleton();
        return 23;
    }
    else if(pos==17)
    {
        printf("You've met a cute snake. It ate you. \n");
        draw_snake();
        return 2;
    }
}

int helpers(int pos)
{
    if(pos==52)
    {
        printf("You've met a helpful demon. Would you like to make a deal with him? (y/n): ");
        char c=getchar();
        getchar();
        if(c=='y' || c=='Y')
        {
            return 74;
        }
        else
        {
            return pos;
        }
    }
    else if(pos==8)
    {
        printf("You've met an old woman. Would you like to help her? (y/n): ");
        char c=getchar();
        getchar();
        if(c=='y' || c=='Y')
        {
            return 31;
        }
        else
        {
            return pos;
        }
    }
    else if(pos==16)
    {
        printf("You found a unicorn. Would you like to ride it (y/n): ");
        char c=getchar();
        getchar();
        if(c=='y' || c=='Y')
        {
            return 37;
        }
        else
        {
            return pos;
        }
    }
    else if(pos==27)
    {
        printf("You've found a ladder. Would you like to climb it (y/n)?: ");
        char c=getchar();
        getchar();
        if(c=='y' || c=='Y')
        {
            return 48;
        }
        else
        {
            return pos;
        }
    }
    else if(pos==42)
    {
        printf("An old man is carrying heavy luggage. Would you help drop him off (y/n)? : ");
        char c=getchar();
        getchar();
        if(c=='y' || c=='Y')
        {
            return 77;
        }
        else
        {
            return pos;
        }
    }
    else if(pos==80)
    {
        printf("A small bird is stuck in a tree? Would you like to help it?: ");
        char c=getchar();
        getchar();
        if(c=='y' || c=='Y')
        {
            return 99;
        }
        else
        {
            return pos;
        }
    }
}

void game()
{
    printf("Enter the number of players: ");
    int n;
    scanf("%d",&n);
    getchar();
    while(n>8 || n<1)
    {
        printf("The number of players allowed to play at a time is 8. Please enter the number of players again: ");
        scanf("%d",&n);
    }
    int score[n];
    char name[n][100];
    for(int i=0; i<n; ++i)
    {
        score[i]=0;
        printf("Enter the name of player %d: ", i+1);
        fgets(name[i], 100, stdin);
        if(name[i][0]=='\n')
        {
            printf("Default name 'Player %d' is set to the player\n", i+1);
            if(i==0)
            {
                strcat(name[i], "Player 1");
            }
            else if(i==1)
            {
                strcat(name[i], "Player 2");
            }
            else if(i==2)
            {
                strcat(name[i], "Player 3");
            }
            else if(i==3)
            {
                strcat(name[i], "Player 4");
            }
            else if(i==4)
            {
                strcat(name[i], "Player 5");
            }
            else if(i==5)
            {
                strcat(name[i], "Player 6");
            }
            else if(i==6)
            {
                strcat(name[i], "Player 7");
            }
            else if(i==7)
            {
                strcat(name[i], "Player 8");
            }
        }
        else
        {
            name[i][strlen(name[i])-1]='\0';
        }
    }
    bool thereisawinner = false;
    while(!thereisawinner)
    {
        char winner[100];
        for(int i=0; i<n; ++i)
        {
            printf("%s",name[i]);
            int roll = die();
            score[i]+=roll;
            if(score[i]>100)
            {
                printf("You can't move further.\n");
                score[i]-=roll;
            }
            score[i]=obstacles(score[i]);
            score[i]=helpers(score[i]);
            printf("%s is at %d\n", name[i], score[i]);
            if(score[i]==100)
            {
                thereisawinner=true;
                strcpy(winner, name[i]);
                break;
            }
            if(thereisawinner)
            {
                break;
            }
        }
        if(thereisawinner)
        {
            printf(" ");
            for(int i=0; i<13+strlen(winner); ++i)
            {
                printf("_");
            }
            printf("\n|");
            for(int i=0; i<13+strlen(winner); ++i)
            {
                printf(" ");
            }
            printf("|\n");
            printf("| ");
            printf("%s has won!!! |\n", winner);
            printf("|");
            for(int i=0; i<13+strlen(winner); ++i)
            {
                printf("_");
            }
            printf("|\n");
            winner[0]='\0';
            break;
        }
    }
}

int main()
{
    printf("Walking in the Unknown\n\n");
    bool keepplaying = true;
    while(keepplaying)
    {
        game();
        printf("Would you like to play again? (y/n): ");
        char c = getchar();
        getchar();
        if(c=='n' || c=='N')
        {
            keepplaying=false;
        }
    }
    return 0;
}