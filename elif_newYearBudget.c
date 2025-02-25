#include <stdio.h>

int main() {
int budget;
int numGuests;
int foodCostPerGuest;
int decorationCost;
int musicCost;
int extraExpenses;
scanf("%d\n",&budget);
scanf("%d\n",&numGuests);
scanf("%d\n",&foodCostPerGuest);
scanf("%d\n",&decorationCost);
scanf("%d\n",&musicCost);
scanf("%d",& extraExpenses);
 int totalFoodCost = foodCostPerGuest * numGuests;
 int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;

if((budget>=1 && budget<=10000)&& (numGuests>=1 && numGuests<=100)&& (foodCostPerGuest>=1 && foodCostPerGuest<=10000) && (decorationCost>=1 && decorationCost<=10000)&& (musicCost>=0 &&musicCost<=10000) && ( extraExpenses>=1 && extraExpenses <=10000))
{
    if((totalCost<=budget)&&(numGuests>5 && numGuests<=50)&& (0.30*budget>decorationCost || 0.50*budget> totalFoodCost))
    {
        if(numGuests>25)
        {
            if(musicCost>0)
            {
             printf("Celebration Approved\n");
            }
            else
            {
             printf("Celebration Denied");  
            }
        }
        else 
        {
          printf("Celebration Approved\n");  
        }
      }
     else
    {
     printf("Celebration Denied\n");   
     }
 }
 else
 {
  printf("Celebration Denied"); 
 }
    return 0;
}
