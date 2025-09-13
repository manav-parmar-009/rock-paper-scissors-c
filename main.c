#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    srand(time(0));
    int player, computer = rand() % 3, count = 1, win = 0, lose = 0;
    /* 0 --> rock
     1 --> paper
     2 -->scissors*/
    printf("--------------------------------- \n");

    printf("RULES:- \n");
    printf("choose 0 for rock \n");
    printf("choose 1 for paper \n");
    printf("choose 2 for scissors \n");
    printf("->THERE WILL BE 5 GAME SERIES \n");
    printf("->WHOEVER WILL HAVE MORE MORE POINT THEN OTHER WILL WIN THE SERIES \n");

    printf("--------------------------------- \n");
    do
    {
        printf("choose a number : ");
        scanf("%d", &player);
        printf(" \n");

        printf(" computer choose : %d \n", computer);
        printf(" \n");

        if (player == 0 && computer == 1)
        {
            printf("YOU LOSE!!!\n");
            lose++;
        }
        else if (player == 0 && computer == 2)
        {
            printf("YOU WIN!!! \n");

            win++;
        }
        else if (player == 1 && computer == 0)
        {
            printf("YOU WIN!!! \n");

            win++;
        }
        else if (player == 1 && computer == 2)
        {
            printf("YOU LOSE!!!\n");

            lose++;
        }
        else if (player == 2 && computer == 0)
        {
            printf("YOU LOSE!!!\n");
            lose++;
        }
        else if (player == 2 && computer == 1)
        {
            printf("YOU WIN!!! \n");

            win++;
        }
        else if (player == 0 && computer == 0)
        {
            printf("ITS A DRAW !!! \n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("ITS A DRAW !!! \n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("ITS A DRAW !!! \n");
        }
        else
        {
            printf("SOMETHING WENT WRONG!! \n");
        }
        printf(" \n");

        count++;
        
    } while (count != 6);


    printf("the score was %d : %d\n", win, lose);
    if (win > lose)
    {
        printf("U WON THE SERIES WITH %d WINS \n", win);
        printf("congratulations!!!! \n");
    }
    else if (lose > win)
    {
        printf("OOPS YOU LOSE THE SERIES !!\n");
    }
    else
    {
        printf("IT WAS DRAW !!!! \n");
        printf("LETS PLAY AGAIN \n");
    }

    printf("THANK YOU FOR PLAYING");

    printf(" press any key to exit \n");
    

    return 0;
}