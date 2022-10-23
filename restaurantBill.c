#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void){

    srand(time(0));
    
    //create values for menu items
    const double SALAD = 9.95, SOUP = 4.55, SANDWICH = 13.25, PIZZA = 22.35;
    double menuArr[4] = {SALAD, SOUP, SANDWICH, PIZZA};

    double tip, tax, total;

    //create a random array that correlates with each menu item (range 0 - 5)
    //this effectively randomly generate a meal by matching menu items to respective random num in array
    int randomArr[4];
    for(int i = 0; i < 4; i++){
        randomArr[i] = rand() % (6);
    }

    printf("\n\n*******   Bill Calculator   *******\n\n");

    //get inputs
    printf("Please enter the tip: ");
    scanf("%lf", &tip);

    printf("Please enter the tax: ");
    scanf("%lf", &tax);

    //calculate total based on random array
    for(int i = 0; i < 3; i++){
        total = total + menuArr[i]*randomArr[i];
    }

    //calculate and display totals
    printf("\n\n--- Bill ---\n\n");
    printf("Salads($%.2f):      %d\n", SALAD, randomArr[0]);
    printf("Soups($%.2f):       %d\n", SOUP, randomArr[1]);
    printf("Sandwiches($%.2f): %d\n", SANDWICH, randomArr[2]);
    printf("Pizzas($%.2f):     %d\n", PIZZA, randomArr[3]);

    printf("\nMeal Total: $%.2f\n", total);
    printf("Tax:        $%.2f\n", tax*total);
    printf("Tip:        $%.2f\n", tip*total);

    printf("\nTOTAL BILL: $%.2f\n", total+tax*total+tip*total);

}