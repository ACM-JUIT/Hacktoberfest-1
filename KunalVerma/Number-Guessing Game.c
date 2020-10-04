#include <stdio.h>
#include <stdlib.h>  // for random no. generation.
#include <time.h>
//Including these extra header files for using extra functions from these files.




//                                                             !!!   NUMBER GUESSING GAME   !!!

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));

    number = rand() % 100 + 1;
    // for generation of number between 1 to 100.

    // printf("The number is %d\n", number);  
    // commenting this line so that no one can see the no. displayed...


    printf("Guess the number between 1-100\n");
    
    do
    //using Do-while loop as we have to give the user atleast one chance.
    {
        
        scanf("%d", &guess);

        // 3 conditions are given to 'if-else' statements accordingly.

        if (guess > number)
        {
            printf("Gone too far!! Enter Lower number please!!\n");
        }
        else if (guess < number)
        {
            printf("Close enough!! Enter Higher number please!!\n");
        }
        else
        {
            printf("Congratulations! You guessed it in %d attempts\n", nguess);
        }
        nguess++;

    } while (guess != number);  
    // loop will continue till this condition becomes false.

    return 0;
}
