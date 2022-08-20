#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void whatchoice(int x, char c)
{
    char *who[2] = {"You", "Computer"};

    switch (c)
    {
    case 'r':
        printf("%s choose Rock\n", who[x]);
        break;
    case 'p':
        printf("%s choose Paper\n", who[x]);
        break;
    case 's':
        printf("%s choose Scissor\n", who[x]);
        break;
    }
}
int randomnum(int n)
{
    srand(time(NULL));
    return rand() % n;
}
char choice()
{
    int num = randomnum(3);
    char c;
    switch (num)
    {
    case 0:
        c = 'r';
        break;
    case 1:
        c = 'p';
        break;
    case 2:
        c = 's';
        break;
    }
    return c;
}
int whowon(char a, char b)
{
    int out;
    if (a == b)
        out = 0;
    else if (a == 'r' && b == 'p')
        out = 1;
    else if (a == 'r' && b == 's')
        out = -1;
    else if (a == 'p' && b == 'r')
        out = -1;
    else if (a == 'p' && b == 's')
        out = 1;
    else if (a == 's' && b == 'r')
        out = 1;
    else if (a == 's' && b == 'p')
        out = -1;
    return out;
}

int main()
{
    printf("\nWelcome to Rock, Paper, Scissor Game!!\n");
    printf("\n#INSTRUCTIONS:\nIt will be a best of three game.\nChoose 'r' for Rock.\nChoose 'p' for Paper.\nChoose 's' for Scissor.\n");

    char player_choice, comp_choice, yes;
    printf("\nWant to start?(Choose y for 'yes and n for 'no')\n");
    scanf("%c", &yes);
    getchar();

    while (yes == 'y')
    {
        int comp_pts = 0, plyr_pts = 0;

        for (int t = 0; t < 3; t++)

        {
        restart:

            printf("\nYour turn:\n");
            scanf("%c", &player_choice);
            getchar();
            if (player_choice == 'r' || player_choice == 'p' || player_choice == 's')
            {
                printf("\n");
                whatchoice(0, player_choice);
            }
            else
            {
                printf("Choose between r, p, s !!!\n");
                goto restart;
            }

            comp_choice = choice();
            whatchoice(1, comp_choice);
            int out = whowon(player_choice, comp_choice);
            if (out == 0)
            {
                printf("It's a draw!!!\n");
            }
            else if (out == -1)
            {
                printf("you got +1pts!!!\n");
                plyr_pts += 1;
            }
            else if (out == 1)
            {
                printf("Computer got +1pts!!!\n");
                comp_pts += 1;
            }
        }
        printf("\n");
        if (plyr_pts == comp_pts)
            printf("GAME DRAW!!!");
        else
            plyr_pts > comp_pts ? printf("You WON the GAME!!!") : printf("You LOSE the GAME!!!");
        printf("\n\nPoints TABLE:");
        printf("\nYou:%d", plyr_pts);
        printf("\nComputer:%d", comp_pts);
        printf("\n\nWant to play again?(Choose y for 'yes and n for 'no')\n");
        scanf("%c", &yes);
        getchar();
    }

    return 0;
}
