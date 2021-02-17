/*
    scoring.c: Using a two dimensional array to store basketball point totals for players.
*/

#include <stdio.h>

#define PLAYERS 2
#define GAMES 4

int scores[3][4];
float score_avg[6], best_avg, player_avg;
int point_total, best_player, player;
int counter1, counter2;

void nba_jam();

int main(void)
{
    nba_jam();

    return 0;
}
void nba_jam()
{
    /*
        The outer loop is for each game.
    */

    for (counter2 = 1; counter2 <= GAMES; counter2++)
    {
        printf("\nGetting scoring totals for GAME %d.\n", counter2);
        /*
            The inner loop is for each player in the specific game.
        */
        for (counter1 = 1; counter1 <= PLAYERS; counter1++)
        {
            printf("\n**************************************\n");
            printf("What did player #%d score in the game\?\n", counter1);
            printf("**************************************\n\n");
            scanf("%d", &scores[counter1][counter2]);
        }
    }

    /*
        Loop through the array to calculate scoring average per player.
    */

    for (counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
        point_total = 0;
        for (counter2 = 1; counter2 <= GAMES; counter2++)
        {
            point_total += scores[counter1][counter2];
        }
        score_avg[counter1] = (float)point_total / GAMES;
    }

    /*
        Now loop through and store who has the best scoring average.
    */

    best_avg = 0;
    for (counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
        if (score_avg[counter1] > best_avg)
        {
            best_avg = score_avg[counter1];
            best_player = counter1;
        }

        player_avg = score_avg[counter1];
        player = counter1;

        printf("\nPlayer #%d's average was \n", player);
        printf("\n%.2f points per game.\n\n", player_avg);
    }
    printf("\nPlayer #%d had the best average at\n", best_player);
    printf("\n%.2f points per game.\n\n", best_avg);
}
