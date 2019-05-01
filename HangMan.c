#include <stdio.h>
#include <conio.h>
#include <ctype.h>


int main()
{
    // ---------------------------------------Frist scene-----------------------------------------
    printf(" ____________________________________________________________________________________\n");
    printf(" |             | |                                                                  |\n");
    printf(" |             | |__   __ _ _ __   __ _ _ __ ___   __ _ _ __                        |\n");
    printf(" |             |  _ \\ / _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\                       |\n");
    printf(" |             | | | | (_| | | | | (_| | | | | | | (_| | | | |                      |\n");
    printf(" |             |_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_|                      |\n");
    printf(" |                                 __/ |                                            |\n");
    printf(" |                                |___/                                             |\n");
    printf(" |                                                                                  |\n");
    printf(" |                            WORD OF THE DEATH                                     |\n");
    printf(" |__________________________________________________________________________________|\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                             ENTER Y TO START\n");
    printf("\n");
    printf("Do you want to start?\n");
    printf("\(Y/N)");

    char startinput;  //--------------------------------------input Y/N to start
    char loop1 = 0;
    while(loop1 == 0){
    scanf("%s",&startinput);
    if (startinput == 'Y' || startinput == 'y' )
    {
        loop1+=1;
    }
    else if(startinput == 'N' || startinput == 'n')
    {
        exit(0);
    }
    else{
        printf("No commands \n");
    }
}

// ---------------------------------------Second scene-----------------------------------------
printf("----------------------------------------------------------------------------------\n");
printf("    _____ _____ _      _____ _____ _____   _      _____ _   _ _____ _     \n");
printf("  /  ___|  ___| |    |  ___/  __ \\\_   _| | |    |  ___| | | |  ___| |    \n");
printf("  \\\ `--.| |__ | |    | |__ | /  \\\/ | |   | |    | |__ | | | | |__ | |    \n");
printf("   `--. \\\  __|| |    |  __|| |     | |   | |    |  __|| | | |  __|| |    \n");
printf("  /\\\__/ / |___| |____| |___| \\\__/\\\ | |   | |____| |___\\\ \\\_/ / |___| |____\n");
printf("  \\\____/\\\____/\\\_____/\\\____/ \\\____/ \\\_/   \\\_____/\\\____/ \\\___/\\\____/\\\_____/\n");
printf("\n");
printf(" ____________________________________________________\n");
printf("| LEVEL EASY        Hint: Verhicle                   |\n");
printf("|____________________________________________________|\n");
printf("\n");
printf(" ____________________________________________________\n");
printf("| LEVEL NORMAL      Hint: Important                  |\n");
printf("|____________________________________________________|\n");
printf("\n");
printf(" ____________________________________________________\n");
printf("| LEVEL HARD       Hint: Become part of a community  |\n");
printf("|____________________________________________________|\n");
printf("\n");
printf(" ____________________________________________________\n");
printf("| LEVEL VERY HARD   Hint: Huge destruction           |\n");
printf("|____________________________________________________|\n");
printf("\n");
printf(" ____________________________________________________\n");
printf("| LEVEL Impossible  Hint: Like painkiller            |\n");
printf("|____________________________________________________|\n");
printf("\n");
printf("Enter no.1-5 to select level.\n");

//-------------------------------------------------------------------- select stage proces
char stagenum;
int loopstage1 = 0;

scanf("%s", &stagenum);
switch(stagenum)
{
    case '1':
        printf("----------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("  _____  ___   _______   __   \n");
        printf(" |  ___|/ _ \\\ /  ___\\\ \\\ / /   \n");
        printf(" | |__ / /_\\\ \\ `--.  \\\ V /    \n");
        printf(" |  __||  _  | `--. \\\ \\\ /     \n");
        printf(" | |___| | | |/\\\__/ / | |     \n");
        printf(" \\\____/\\\_| |_/\\\____/  \\\_/     \n");
        printf("    ___________.._   \n");
        printf("  {|]           |    \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("[_____]            \n");
        printf("                   \n");
        printf("                   \n");
        printf("HINT: Verhicle\n");
        printf("\n");

        int i;//--------------------------------------------------------process word stage 1
        char text [25] = {'b', 'u', 's','\0'}; //-------Answer
        char out[60];
        strcpy(out, "");
        for (i = 0; i < strlen(text); i++){
            strcat(out, "_ ");
        }
        printf("%s\n", out);
        char word[2];
        int point = 0;
        int fpoint = 0;
        int state;
        while(point < strlen(text)){
            printf("Enter A-Z to collect the word: ");
            scanf("%s", word);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            state = 0;
            word[0] = tolower(word[0]);
            for (i = 0; i < strlen(text); i++){
                if (text[i] == word[0] && out[i*2] != word[0] )
                {
                    out[(i*2)] = word[0];
                    point += 1;
                }
                if (text[i] == word[0])//-------------------------------Dead process
                {
                    state += 1;
                }
            }
            if (state == 0)
            {
                fpoint += 1;
            }
            printf("%s\n", out);
            printf("  _____  ___   _______   __   \n");
            printf(" |  ___|/ _ \\\ /  ___\\\ \\\ / /   \n");
            printf(" | |__ / /_\\\ \\ `--.  \\\ V /    \n");
            printf(" |  __||  _  | `--. \\\ \\\ /     \n");
            printf(" | |___| | | |/\\\__/ / | |     \n");
            printf(" \\\____/\\\_| |_/\\\____/  \\\_/     \n");
            printf("\n");
            printf("\n");
            printf("\n");
            switch(fpoint)
            {
                case 0:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 1:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 2:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 3:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 4:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 5:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |             \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 6:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |           / \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf(" _____   ___  ___  ___ _____   _____  _   _ ___________ \n");
                    printf("|  __ \\\ / _ \\\ |  \\\/  ||  ___| |  _  || | | |  ___| ___ \\\n");
                    printf("| |  \\\// /_\\\ \\\| .  . || |__   | | | || | | | |__ | |_/ /\n");
                    printf("| | __ |  _  || |\\\/| ||  __|  | | | || | | |  __||    / \n");
                    printf("| |_\\\ \\\| | | || |  | || |___  \\\ \\\_/ /\\\ \\\_/ / |___| |\\\ \\\ \n");
                    printf(" \\\____/\\\_| |_/\\\_|  |_/\\\____/   \\\___/  \\\___/\\\____/\\\_| \\\_|\n");
                    printf("                       You are dead                                       \n");
                    printf("                                                                   \n");
                    printf("                                                                    \n");
                    printf("                                                                   \n");
                    printf("                  You have only one life.                          \n");
                    printf("                                                                   \n");
                    printf("\n");
                    printf("\n");
                    point += 8;  //-----------------------------------------------------------stop loop from stage1
                    char inputgameover;  //--------------------------------------input Y/N to start
                    char loop2 = 0;
                    printf("Enter Y to exit.\n");
                    while(loop2 == 0){
                    scanf("%s",&inputgameover);
                    if (inputgameover == 'Y' || inputgameover == 'y' )
                    {
                        exit(0);

                    }
                    else{
                        printf("No commands \n");
                    }
                }
                    break;
            }

        }
       printf("__   _______ _   _    ___  ______ _____   _____ _   _______ _   _ _____ _   _ ___________ \n");
       printf("\\\ \\\ / /  _  | | | |  / _ \\\ | ___ \\\  ___| /  ___| | | | ___ \\\ | | |_   _| | | |  ___|  _  \\\ \n");
       printf(" \\\ V /| | | | | | | / /_\\\ \\\| |_/ / |__   \\\ `--.| | | | |_/ / | | | | | | | | | |__ | | | | \n");
       printf("  \\\ / | | | | | | | |  _  ||    /|  __|   `--. \\\ | | |    /| | | | | | | | | |  __|| | | | \n");
       printf("  | | \\\ \\\_/ / |_| | | | | || |\\\ \\\| |___  /\\\__/ / |_| | |\\\ \\\\\\ \\\_/ /_| |_\\\ \\\_/ / |___| |/ /  \n");
       printf("  \\\_/  \\\___/ \\\___/  \\\_| |_/\\\_| \\\_\\\____/  \\\____/ \\\___/\\\_| \\\_|\\\___/ \\\___/ \\\___/\\\____/|___/\n");
       char inputgameexitc;
       int loopc = 0;
       while(loopc == 0){
        printf("Enter Y to exit.\n");
        scanf("%s",&inputgameexitc);
        if (inputgameexitc == 'Y' || inputgameexitc == 'y' )
        {
            exit(0);

        }
        else{
            printf("No commands \n");
        }
        }
        break;

    case '2':
        printf("----------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("  _   _ ______________  ___  ___   _     \n");
        printf(" | \\\ | |  _  | ___ \\\  \\\/  | / _ \\\ | |    \n");
        printf(" |  \\\| | | | | |_/ / .  . |/ /_\\\ \\\| |    \n");
        printf(" | . ` | | | |    /| |\\\/| ||  _  || |    \n");
        printf(" | |\\\  \\\ \\\_/ / |\\\ \\\| |  | || | | || |____\n");
        printf(" \\\_| \\\_/\\\___/\\\_| \\\_\\\_|  |_/\\\_| |_/\\\_____/\n");
        printf("    ___________.._   \n");
        printf("  {|]           |    \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("[_____]            \n");
        printf("                   \n");
        printf("                   \n");
        printf("HINT: Important | First character is M\n");
        printf("\n");

        int i1;//--------------------------------------------------------process word stage 1
        char text1 [25] = {'m', 'a', 'j','o','r','\0'}; //-------Answer
        char out1[60];
        strcpy(out1, "");
        for (i1 = 0; i1 < strlen(text1); i1++){
            strcat(out1, "_ ");
        }
        printf("%s\n", out1);
        char word1[2];
        int point1 = 0;
        int fpoint1 = 0;
        int state1;
        while(point1 < strlen(text1)){
            printf("Enter A-Z to collect the word: ");
            scanf("%s", word1);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            state1 = 0;
            word1[0] = tolower(word1[0]);
            for (i1 = 0; i1 < strlen(text1); i1++){
                if (text1[i1] == word1[0] && out1[i1*2] != word1[0] )
                {
                    out1[(i1*2)] = word1[0];
                    point1 += 1;
                }
                if (text1[i1] == word1[0])//-------------------------------Dead process
                {
                    state1 += 1;
                }
            }
            if (state1 == 0)
            {
                fpoint1 += 1;
            }
            printf("%s\n", out1);
            printf("  _   _ ______________  ___  ___   _     \n");
            printf(" | \\\ | |  _  | ___ \\\  \\\/  | / _ \\\ | |    \n");
            printf(" |  \\\| | | | | |_/ / .  . |/ /_\\\ \\\| |    \n");
            printf(" | . ` | | | |    /| |\\\/| ||  _  || |    \n");
            printf(" | |\\\  \\\ \\\_/ / |\\\ \\\| |  | || | | || |____\n");
            printf(" \\\_| \\\_/\\\___/\\\_| \\\_\\\_|  |_/\\\_| |_/\\\_____/\n");
            printf("\n");
            printf("\n");
            printf("\n");
            switch(fpoint1)
            {
                case 0:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 1:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 2:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 3:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 4:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 5:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |             \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 6:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |           / \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf(" _____   ___  ___  ___ _____   _____  _   _ ___________ \n");
                    printf("|  __ \\\ / _ \\\ |  \\\/  ||  ___| |  _  || | | |  ___| ___ \\\n");
                    printf("| |  \\\// /_\\\ \\\| .  . || |__   | | | || | | | |__ | |_/ /\n");
                    printf("| | __ |  _  || |\\\/| ||  __|  | | | || | | |  __||    / \n");
                    printf("| |_\\\ \\\| | | || |  | || |___  \\\ \\\_/ /\\\ \\\_/ / |___| |\\\ \\\ \n");
                    printf(" \\\____/\\\_| |_/\\\_|  |_/\\\____/   \\\___/  \\\___/\\\____/\\\_| \\\_|\n");
                    printf("                       You are dead                                       \n");
                    printf("                                                                   \n");
                    printf("                                                                    \n");
                    printf("                                                                   \n");
                    printf("                  You have only one life.                          \n");
                    printf("                                                                   \n");
                    printf("\n");
                    printf("\n");
                    point += 8;  //-----------------------------------------------------------stop loop from stage1
                    char inputgameover;  //--------------------------------------input Y/N to start
                    char loop2 = 0;
                    printf("Enter Y to exit.\n");
                    while(loop2 == 0){
                    scanf("%s",&inputgameover);
                    if (inputgameover == 'Y' || inputgameover == 'y' )
                    {
                        exit(0);

                    }
                    else{
                        printf("No commands \n");
                    }
                }
                    break;
            }

        }
       printf("__   _______ _   _    ___  ______ _____   _____ _   _______ _   _ _____ _   _ ___________ \n");
       printf("\\\ \\\ / /  _  | | | |  / _ \\\ | ___ \\\  ___| /  ___| | | | ___ \\\ | | |_   _| | | |  ___|  _  \\\ \n");
       printf(" \\\ V /| | | | | | | / /_\\\ \\\| |_/ / |__   \\\ `--.| | | | |_/ / | | | | | | | | | |__ | | | | \n");
       printf("  \\\ / | | | | | | | |  _  ||    /|  __|   `--. \\\ | | |    /| | | | | | | | | |  __|| | | | \n");
       printf("  | | \\\ \\\_/ / |_| | | | | || |\\\ \\\| |___  /\\\__/ / |_| | |\\\ \\\\\\ \\\_/ /_| |_\\\ \\\_/ / |___| |/ /  \n");
       printf("  \\\_/  \\\___/ \\\___/  \\\_| |_/\\\_| \\\_\\\____/  \\\____/ \\\___/\\\_| \\\_|\\\___/ \\\___/ \\\___/\\\____/|___/\n");
       char inputgameexitb;
       int loopb = 0;
       while(loopb == 0){
        printf("Enter Y to exit.\n");
        scanf("%s",&inputgameexitb);
        if (inputgameexitb == 'Y' || inputgameexitb == 'y' )
        {
            exit(0);

        }
        else{
            printf("No commands \n");
        }
        }
        break;

    case '3':
        printf("----------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("   _   _   ___  ____________ \n");
        printf(" | | | | / _ \\\ | ___ \\\  _  \\\ \n");
        printf(" | |_| |/ /_\\\ \\\| |_/ / | | |\n");
        printf(" |  _  ||  _  ||    /| | | |\n");
        printf(" | | | || | | || |\\\ \\\| |/ /\n");
        printf(" \\\_| |_/\\\_| |_/\\\_| \\\_|___/  \n");
        printf("    ___________.._   \n");
        printf("  {|]           |    \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("[_____]            \n");
        printf("                   \n");
        printf("                   \n");
        printf("HINT: become part of a community | First character is I\n");
        printf("\n");

        int i2;//--------------------------------------------------------process word stage 1
        char text2 [25] = {'i', 'n', 't','e','g','r','a','t','e','\0'}; //-------Answer
        char out2[60];
        strcpy(out2, "");
        for (i2 = 0; i2 < strlen(text2); i2++){
            strcat(out2, "_ ");
        }
        printf("%s\n", out2);
        char word2[2];
        int point2 = 0;
        int fpoint2 = 0;
        int state2;
        while(point2 < strlen(text2)){
            printf("Enter A-Z to collect the word: ");
            scanf("%s", word2);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            state2 = 0;
            word2[0] = tolower(word2[0]);
            for (i2 = 0; i2 < strlen(text2); i2++){
                if (text2[i2] == word2[0] && out2[i2*2] != word2[0] )
                {
                    out2[(i2*2)] = word2[0];
                    point2 += 1;
                }
                if (text2[i2] == word2[0])//-------------------------------Dead process
                {
                    state2 += 1;
                }
            }
            if (state2 == 0)
            {
                fpoint2 += 1;
            }
            printf("%s\n", out2);
            printf("   _   _   ___  ____________ \n");
            printf(" | | | | / _ \\\ | ___ \\\  _  \\\ \n");
            printf(" | |_| |/ /_\\\ \\\| |_/ / | | |\n");
            printf(" |  _  ||  _  ||    /| | | |\n");
            printf(" | | | || | | || |\\\ \\\| |/ /\n");
            printf(" \\\_| |_/\\\_| |_/\\\_| \\\_|___/  \n");
            printf("\n");
            printf("\n");
            printf("\n");
            switch(fpoint2)
            {
                case 0:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 1:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 2:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 3:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 4:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 5:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |             \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 6:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |           / \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf(" _____   ___  ___  ___ _____   _____  _   _ ___________ \n");
                    printf("|  __ \\\ / _ \\\ |  \\\/  ||  ___| |  _  || | | |  ___| ___ \\\n");
                    printf("| |  \\\// /_\\\ \\\| .  . || |__   | | | || | | | |__ | |_/ /\n");
                    printf("| | __ |  _  || |\\\/| ||  __|  | | | || | | |  __||    / \n");
                    printf("| |_\\\ \\\| | | || |  | || |___  \\\ \\\_/ /\\\ \\\_/ / |___| |\\\ \\\ \n");
                    printf(" \\\____/\\\_| |_/\\\_|  |_/\\\____/   \\\___/  \\\___/\\\____/\\\_| \\\_|\n");
                    printf("                       You are dead                                       \n");
                    printf("                                                                   \n");
                    printf("                                                                    \n");
                    printf("                                                                   \n");
                    printf("                  You have only one life.                          \n");
                    printf("                                                                   \n");
                    printf("\n");
                    printf("\n");
                    point += 8;  //-----------------------------------------------------------stop loop from stage1
                    char inputgameover;  //--------------------------------------input Y/N to start
                    char loop2 = 0;
                    printf("Enter Y to exit.\n");
                    while(loop2 == 0){
                    scanf("%s",&inputgameover);
                    if (inputgameover == 'Y' || inputgameover == 'y' )
                    {
                        exit(0);

                    }
                    else{
                        printf("No commands \n");
                    }
                }
                    break;
            }

        }
       printf("__   _______ _   _    ___  ______ _____   _____ _   _______ _   _ _____ _   _ ___________ \n");
       printf("\\\ \\\ / /  _  | | | |  / _ \\\ | ___ \\\  ___| /  ___| | | | ___ \\\ | | |_   _| | | |  ___|  _  \\\ \n");
       printf(" \\\ V /| | | | | | | / /_\\\ \\\| |_/ / |__   \\\ `--.| | | | |_/ / | | | | | | | | | |__ | | | | \n");
       printf("  \\\ / | | | | | | | |  _  ||    /|  __|   `--. \\\ | | |    /| | | | | | | | | |  __|| | | | \n");
       printf("  | | \\\ \\\_/ / |_| | | | | || |\\\ \\\| |___  /\\\__/ / |_| | |\\\ \\\\\\ \\\_/ /_| |_\\\ \\\_/ / |___| |/ /  \n");
       printf("  \\\_/  \\\___/ \\\___/  \\\_| |_/\\\_| \\\_\\\____/  \\\____/ \\\___/\\\_| \\\_|\\\___/ \\\___/ \\\___/\\\____/|___/\n");
       char inputgameexita;
       int loopa = 0;
       while(loopa == 0){
        printf("Enter Y to exit.\n");
        scanf("%s",&inputgameexita);
        if (inputgameexita == 'Y' || inputgameexita == 'y' )
        {
            exit(0);

        }
        else{
            printf("No commands \n");
        }
        }
        break;

    case '4':
        printf("----------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf(" _   _ _____________   __  _   _   ___  ____________\n");
        printf("| | | |  ___| ___ \\\ \\\ / / | | | | / _ \\\ | ___ \\\  _  \\\n");
        printf("| | | | |__ | |_/ /\\\ V /  | |_| |/ /_\\\ \| |_/ /| | | |\n");
        printf("| | | |  __||    /  \\\ /   |  _  ||  _  ||    /| | | |\n");
        printf("\\\ \\\_/ / |___| |\\\ \\\  | |   | | | || | | || |\\\ \\\| |/ / \n");
        printf(" \\\___/\\\____/\\\_| \\\_| \\\_/   \\\_| |_/\\\_| |_/\\\_| \\\_|___/  \n");
        printf("    ___________.._   \n");
        printf("  {|]           |    \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("[_____]            \n");
        printf("                   \n");
        printf("                   \n");
        printf("HINT: great destruction or damage. | First character is D\n");
        printf("\n");

        int i3;//--------------------------------------------------------process word stage 1
        char text3 [25] = {'d','e','v','a','s','t','a','t','i','o','n','\0'}; //-------Answer
        char out3[60];
        strcpy(out3, "");
        for (i3 = 0; i3 < strlen(text3); i3++){
            strcat(out3, "_ ");
        }
        printf("%s\n", out3);
        char word3[2];
        int point3 = 0;
        int fpoint3 = 0;
        int state3;
        while(point3 < strlen(text3)){
            printf("Enter A-Z to collect the word: ");
            scanf("%s", word3);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            state3 = 0;
            word3[0] = tolower(word3[0]);
            for (i3 = 0; i3 < strlen(text3); i3++){
                if (text3[i3] == word3[0] && out3[i3*2] != word3[0] )
                {
                    out3[(i3*2)] = word3[0];
                    point3 += 1;
                }
                if (text3[i3] == word3[0])//-------------------------------Dead process
                {
                    state3 += 1;
                }
            }
            if (state3 == 0)
            {
                fpoint3 += 1;
            }
            printf("%s\n", out3);
            printf(" _   _ _____________   __  _   _   ___  ____________\n");
            printf("| | | |  ___| ___ \\\ \\\ / / | | | | / _ \\\ | ___ \\\  _  \\\n");
            printf("| | | | |__ | |_/ /\\\ V /  | |_| |/ /_\\\ \| |_/ /| | | |\n");
            printf("| | | |  __||    /  \\\ /   |  _  ||  _  ||    /| | | |\n");
            printf("\\\ \\\_/ / |___| |\\\ \\\  | |   | | | || | | || |\\\ \\\| |/ / \n");
            printf(" \\\___/\\\____/\\\_| \\\_| \\\_/   \\\_| |_/\\\_| |_/\\\_| \\\_|___/  \n");
            printf("\n");
            printf("\n");
            printf("\n");
            switch(fpoint3)
            {
                case 0:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 1:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 2:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 3:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 4:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 5:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |             \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 6:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |           / \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf(" _____   ___  ___  ___ _____   _____  _   _ ___________ \n");
                    printf("|  __ \\\ / _ \\\ |  \\\/  ||  ___| |  _  || | | |  ___| ___ \\\n");
                    printf("| |  \\\// /_\\\ \\\| .  . || |__   | | | || | | | |__ | |_/ /\n");
                    printf("| | __ |  _  || |\\\/| ||  __|  | | | || | | |  __||    / \n");
                    printf("| |_\\\ \\\| | | || |  | || |___  \\\ \\\_/ /\\\ \\\_/ / |___| |\\\ \\\ \n");
                    printf(" \\\____/\\\_| |_/\\\_|  |_/\\\____/   \\\___/  \\\___/\\\____/\\\_| \\\_|\n");
                    printf("                       You are dead                                       \n");
                    printf("                                                                   \n");
                    printf("                                                                    \n");
                    printf("                                                                   \n");
                    printf("                  You have only one life.                          \n");
                    printf("                                                                   \n");
                    printf("\n");
                    printf("\n");
                    point += 8;  //-----------------------------------------------------------stop loop from stage1
                    char inputgameover;  //--------------------------------------input Y/N to start
                    char loop2 = 0;
                    printf("Enter Y to exit.\n");
                    while(loop2 == 0){
                    scanf("%s",&inputgameover);
                    if (inputgameover == 'Y' || inputgameover == 'y' )
                    {
                        exit(0);

                    }
                    else{
                        printf("No commands \n");
                    }
                }
                    break;
            }

        }
       printf("__   _______ _   _    ___  ______ _____   _____ _   _______ _   _ _____ _   _ ___________ \n");
       printf("\\\ \\\ / /  _  | | | |  / _ \\\ | ___ \\\  ___| /  ___| | | | ___ \\\ | | |_   _| | | |  ___|  _  \\\ \n");
       printf(" \\\ V /| | | | | | | / /_\\\ \\\| |_/ / |__   \\\ `--.| | | | |_/ / | | | | | | | | | |__ | | | | \n");
       printf("  \\\ / | | | | | | | |  _  ||    /|  __|   `--. \\\ | | |    /| | | | | | | | | |  __|| | | | \n");
       printf("  | | \\\ \\\_/ / |_| | | | | || |\\\ \\\| |___  /\\\__/ / |_| | |\\\ \\\\\\ \\\_/ /_| |_\\\ \\\_/ / |___| |/ /  \n");
       printf("  \\\_/  \\\___/ \\\___/  \\\_| |_/\\\_| \\\_\\\____/  \\\____/ \\\___/\\\_| \\\_|\\\___/ \\\___/ \\\___/\\\____/|___/\n");
       char inputgameexit1;
       int loop3 = 0;
       while(loop3 == 0){
        printf("Enter Y to exit.\n");
        scanf("%s",&inputgameexit1);
        if (inputgameexit1 == 'Y' || inputgameexit1 == 'y' )
        {
            exit(0);

        }
        else{
            printf("No commands \n");
        }
        }
        break;

    case '5':
        printf("----------------------------------------------------------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf(" ________  _________ _____ _____ _____ ___________ _      _____ \n");
        printf("|_   _|  \\\/  || ___ \\\  _  /  ___/  ___|_   _| ___ \\\ |    |  ___|\n");
        printf("  | | | .  . || |_/ / | | \\\ `--.\\\ `--.  | | | |_/ / |    | |__  \n");
        printf("  | | | |\\\/| ||  __/| | | |`--. \\\`--. \\\ | | | ___ \\\ |    |  __| \n");
        printf(" _| |_| |  | || |   \\\ \\\_/ /\\\__/ /\\\__/ /_| |_| |_/ / |____| |___ \n");
        printf(" \\\___/\\\_|  |_/\\\_|    \\\___/\\\____/\\\____/ \\\___/\\\____/\\\_____/\\\____/ \n");
        printf("    ___________.._   \n");
        printf("  {|]           |    \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("   |               \n");
        printf("[_____]            \n");
        printf("                   \n");
        printf("                   \n");
        printf("HINT: a substance that induces insensitivity to pain. | First character is A\n");
        printf("\n");

        int i4;//--------------------------------------------------------process word stage 1
        char text4[25] = {'a','n','e','s','t','h','e','t','i','c','\0'}; //-------Answer
        char out4[60];
        strcpy(out4, "");
        for (i4 = 0; i4 < strlen(text4); i4++){
            strcat(out4, "_ ");
        }
        printf("%s\n", out4);
        char word4[2];
        int point4 = 0;
        int fpoint4 = 0;
        int state4;
        while(point4 < strlen(text4)){
            printf("Enter A-Z to collect the word: ");
            scanf("%s", word4);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            state4 = 0;
            word4[0] = tolower(word4[0]);
            for (i4 = 0; i4 < strlen(text4); i4++){
                if (text4[i4] == word4[0] && out4[i4*2] != word4[0] )
                {
                    out4[(i4*2)] = word4[0];
                    point4 += 1;
                }
                if (text4[i4] == word4[0])//-------------------------------Dead process
                {
                    state4 += 1;
                }
            }
            if (state4 == 0)
            {
                fpoint4 += 1;
            }
            printf("%s\n", out4);
            printf(" ________  _________ _____ _____ _____ ___________ _      _____ \n");
            printf("|_   _|  \\\/  || ___ \\\  _  /  ___/  ___|_   _| ___ \\\ |    |  ___|\n");
            printf("  | | | .  . || |_/ / | | \\\ `--.\\\ `--.  | | | |_/ / |    | |__  \n");
            printf("  | | | |\\\/| ||  __/| | | |`--. \\\`--. \\\ | | | ___ \\\ |    |  __| \n");
            printf(" _| |_| |  | || |   \\\ \\\_/ /\\\__/ /\\\__/ /_| |_| |_/ / |____| |___ \n");
            printf(" \\\___/\\\_|  |_/\\\_|    \\\___/\\\____/\\\____/ \\\___/\\\____/\\\_____/\\\____/ \n");
            printf("\n");
            printf("\n");
            printf("\n");
            switch(fpoint4)
            {
                case 0:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 1:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 2:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 3:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |            |\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 4:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 5:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |             \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    break;

                case 6:
                    printf("    ___________.._   \n");
                    printf("  {|]           |    \n");
                    printf("   |            @    \n");
                    printf("   |           /|\\\    \n");
                    printf("   |            |   \n");
                    printf("   |           / \\\   \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("   |                \n");
                    printf("[_____]             \n");
                    printf("\n");
                    printf(" _____   ___  ___  ___ _____   _____  _   _ ___________ \n");
                    printf("|  __ \\\ / _ \\\ |  \\\/  ||  ___| |  _  || | | |  ___| ___ \\\n");
                    printf("| |  \\\// /_\\\ \\\| .  . || |__   | | | || | | | |__ | |_/ /\n");
                    printf("| | __ |  _  || |\\\/| ||  __|  | | | || | | |  __||    / \n");
                    printf("| |_\\\ \\\| | | || |  | || |___  \\\ \\\_/ /\\\ \\\_/ / |___| |\\\ \\\ \n");
                    printf(" \\\____/\\\_| |_/\\\_|  |_/\\\____/   \\\___/  \\\___/\\\____/\\\_| \\\_|\n");
                    printf("                       You are dead                                       \n");
                    printf("                                                                   \n");
                    printf("                                                                    \n");
                    printf("                                                                   \n");
                    printf("                  You have only one life.                          \n");
                    printf("                                                                   \n");
                    printf("\n");
                    printf("\n");
                    point += 8;  //-----------------------------------------------------------stop loop from stage1
                    char inputgameover;  //--------------------------------------input Y/N to start
                    char loop2 = 0;
                    printf("Enter Y to exit.\n");
                    while(loop2 == 0){
                    scanf("%s",&inputgameover);
                    if (inputgameover == 'Y' || inputgameover == 'y' )
                    {
                        exit(0);

                    }
                    else{
                        printf("No commands \n");
                    }
                }
                    break;
            }

        }
       printf("__   _______ _   _    ___  ______ _____   _____ _   _______ _   _ _____ _   _ ___________ \n");
       printf("\\\ \\\ / /  _  | | | |  / _ \\\ | ___ \\\  ___| /  ___| | | | ___ \\\ | | |_   _| | | |  ___|  _  \\\ \n");
       printf(" \\\ V /| | | | | | | / /_\\\ \\\| |_/ / |__   \\\ `--.| | | | |_/ / | | | | | | | | | |__ | | | | \n");
       printf("  \\\ / | | | | | | | |  _  ||    /|  __|   `--. \\\ | | |    /| | | | | | | | | |  __|| | | | \n");
       printf("  | | \\\ \\\_/ / |_| | | | | || |\\\ \\\| |___  /\\\__/ / |_| | |\\\ \\\\\\ \\\_/ /_| |_\\\ \\\_/ / |___| |/ /  \n");
       printf("  \\\_/  \\\___/ \\\___/  \\\_| |_/\\\_| \\\_\\\____/  \\\____/ \\\___/\\\_| \\\_|\\\___/ \\\___/ \\\___/\\\____/|___/\n");
       char inputgameexit;
       int loop2 = 0;
       while(loop2 == 0){
        printf("Enter Y to exit.\n");
        scanf("%s",&inputgameexit);
        if (inputgameexit == 'Y' || inputgameexit == 'y' )
        {
            exit(0);

        }
        else{
            printf("No commands \n");
        }
        }
        break;


    default:
            printf("Error! operator is not correct");
            break;
}


  return 0;
}
