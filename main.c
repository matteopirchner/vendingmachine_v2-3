#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fInsert;
    int iDrink;

    printf("---------------------------------\n");
    printf("|  vending machine for drinks   |\n");
    printf("| Made by Matteo Pirchner-Gratz |\n");
    printf("---------------------------------\n\n");

    printf("!!IMPORTANT!!\n");
    printf("This machine doesn't give you rest money!\n\n");

    printf("Available Products:\n");
    printf("1. Water (0.50 Euros)\n");
    printf("2. Limonade (1 Euro)\n");
    printf("3. Beer (2 Euros)\n\n");

    printf("Wich drink do you want?\n");
    scanf("%i", &iDrink);

    switch(iDrink){
    case 1:
        price1:
        printf("\nPlease insert your coin: \n");
        scanf("%fInsert", &fInsert);
            if(fInsert == 0.50){
            printf("\nThanks for your purchase! \nPlease take your drink out of the opening down below!\n\n");
            getch();
            return 0;
            }
            else{
                printf("\nWrong coin!\n\n");
                goto price1;
            }

    case 2:
        price2:
        printf("\nPlease insert your coin: \n");
        scanf("%fInsert", &fInsert);
            if(fInsert == 1){
            printf("\nThanks for your purchase! \nPlease take your drink out of the opening down below!\n\n");
            getch();
            return 0;
            }
            else{
                printf("\nWrong coin!\n\n");
                goto price2;
            }

    case 3:
        price3:
        printf("\nPlease insert your coin: \n");
        scanf("%fInsert", &fInsert);
            if(fInsert == 2){
            printf("\nThanks for your purchase! \nPlease take your drink out of the opening down below!\n\n");
            getch();
            return 0;
            }
            else{
                printf("\nWrong coin!\n\n");
                goto price3;
            }
    }
    getch();
}
