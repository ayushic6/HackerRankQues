#include <stdio.h>

int main() {

    int month, year;
    scanf("%d", &month);
    scanf("%d", &year);

    if (month < 1 || month > 12) 
    {
        
    
        if (year < 1) 
        {
        
        printf("Invalid Month\n");
        printf("Invalid Year\n");
        return 0;
        }
        else
        {
            printf("Invalid Month\n");
            return 0;
        }
    }
    else
    {
        if (year < 1 || year>=1000000) 
        {
        
        printf("Invalid Year\n");
        return 0; 
        }
    }

    
    int isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

        switch (month) 
        {
        case 1: printf("31\n"); break;
        case 2: 
            if (isLeap) 
            {
                printf("29\n");
            } 
            else 
            {
                printf("28\n");
            }
            break;
        case 3: printf("31\n"); 
                break;
        case 4: printf("30\n"); 
                break;
        case 5: printf("31\n"); 
                break;
        case 6: printf("30\n"); 
                break;
        case 7: printf("31\n"); 
                break;
        case 8: printf("31\n"); 
                break;
        case 9: printf("30\n"); 
                break;
        case 10: printf("31\n"); 
                break;
        case 11: printf("30\n"); 
                break;
        case 12: printf("31\n"); 
                break;
        default: printf("Invalid Month\n"); 
    }

    return 0;
}
