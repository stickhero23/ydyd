#include <stdio.h>
/**
 * @brief The program uses break to grade students.
 * Students who score above 60 points to create batches,
 * when a grade less than 50 points is encountered, the 
 * program terminates.
 */
int main(int n)
{
    int i, counted;
    double score, sum =0.0, average = 0.0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter number n%d: ", i);
        scanf("%lf", &score);
        /* if the grade entered is less than 50, break the loop
        the batch ends there and display sum of batch*/

        if (score < 50)
        {
            break;
        }
        counted = i + i;
        sum = sum + score;
        average = sum / i;
    }
    printf("The number of students in the batch is %.2lf\n", counted);
    printf("The Sum Score for the batch is %.2lf\n", sum);
    printf("The Average Score for the batch is %.2lf", average);
    
    return 0;
}