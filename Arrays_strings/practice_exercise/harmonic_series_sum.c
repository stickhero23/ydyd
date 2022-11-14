/**
 * @file harmonic_series_sum.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
 
int main() {
   double sum = 0;    // Declare an int variable sum to accumulate the numbers
                   // Set the initial sum to 0
   int maxDenominator; // Sum from 1 to this upperbound
 
   // Prompt user for an upperbound
   printf("Enter the MaxDenominator: ");
   scanf("%d", &maxDenominator);  // Use %d to read an int
 
   // Use a loop to repeatedly add 1, 2, 3,.5.., up to upperbound
   int numerator = 1;
   while (numerator <= maxDenominator) {
      sum = sum + (numerator / maxDenominator);   // accumulate number into sum
      return (sum);
      ++numerator;             // increment number by 1
   }
   // Print the result
   printf("The sum from 1 to %d is %.2lf\n", maxDenominator, sum);
 
   return (sum);
}