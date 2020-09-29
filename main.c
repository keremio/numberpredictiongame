#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to the Number Prediction Game!\n");
    system("pause");
    int point = 0, pointT = 0; // point and total point to calculate the performance of the player //
    int a = 0; // the number which shows how many mispredictions that the player have made //
    char choice = 'Y'; //the choice which determines if the game will continue or not
    int answers[3] = {-1,-1,-1};
    printf("You can try %d times!\n", 3);
    do{
    srand ( time(NULL) );
    int num = rand() % 10; //numbers from 0 to 10, one-digit natural numbers.
    point = 3; //if there's no error, there will be no minus-points from the player
    for (int i = 0; i < 3; i++)
    {
        int x = 0;
        printf("Type a number.\n");
        scanf("%d" , &x);
        if (x == num)
        {
            printf("Congrulations!\n The number was %d.\n" , x);
            break; //breaks the function to end the set
        }
        else
        {
            printf("Please try again.\n");
            point--; //erases 1 from the point
            for (int j = 0; j < 3; j++) //checks if the number is retyped
            {
                if (answers[j] == x)
                {
                    printf("You've typed this before!\n");
                }
            }
            answers[a] = x;
            a++;
        }
    }
    if (a == 3)
    {
        printf("Game over.\nThe number was %d.\n" , num); //if the player couldn't know the number, it shows what that was.
    }
    a = 0;
    pointT = pointT + point;
    printf("Press Y to continue the loop, press N to exit : ");
    scanf(" %c",&choice);
    }while (choice == 'Y');
    printf("The point you gathered is %d" , pointT); //the total point, the equation is = 3*numberofgames - 1*numberoferrors

}
