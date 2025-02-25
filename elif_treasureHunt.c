#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n==1)
    {
        printf("Player chooses the Left path.\n");
        int m;
        scanf("%d", &m);
        if(m==1)
        {
            printf("Poor choice, Game Over!\n");
        }
        else if(m==2)
        {
            printf("Player found a bridge.\n");
            int p;
            scanf("%d", &p);
            if(p==1)
            {
                printf("Player crosses the bridge safely.\n");
                int chest;
                scanf("%d", &chest);
                if(chest==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(chest==2)
                {
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else if(chest==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
            }
            else if(p==2)
            {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    else if(n==2)
    {
        printf("Player chooses the Middle path.\n");
        int answer;
        scanf("%d", &answer);
        if(answer == 582)
        {
            printf("Player solved the puzzle.\n");
            int chest;
            scanf("%d", &chest);
            if(chest==1)
            {
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(chest==2)
            {
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if(chest==3)
            {
                printf("Congratulations!! You won the treasure.\n");
            }
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
    }
    else if(n == 3)
    {
        printf("Player chooses the Right path.\n");
        int answer;
        scanf("%d", &answer);
        if(answer == 30)
        {
            printf("Player solved the puzzle.\n");
            int chest;
            scanf("%d", &chest);
            if(chest==1)
            {
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(chest==2)
            {
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if(chest==3)
            {
                printf("Congratulations!! You won the treasure.\n");
            }
        }
        else
        {
            printf("Foolish player, Game Over!\n");
        }
    }

    return 0;
}
