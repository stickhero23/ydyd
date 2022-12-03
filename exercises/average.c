#include <stdio.h>
#include <stdarg.h>
 
//we are definin the below function to calculate the average of the 
//of the numbers.
double calavg(int count, ...)
{
    double sum = 0;// intoalized to calculate the average
    
    va_list list;// the access the variable arguments 
    //that we just passed in the calling function.
    int arg;
    va_start(list, count);
     //The va_list is intialized using the va_start. 
   
    for (arg = 0; arg < count; ++arg)
         // The va_arg is used to get the parameters in the variable arguments
         //that we passed during function call
         // The first argument in the  va_arg is the va_list that
         // we are using
         // And The second argument is the type of the argument
         sum += va_arg(list, int);
         // note va_arg automatically points to next the argument of the function
 // this is used to end when our iteration is done
    va_end(list);
    return sum / count;// this is to calculate the average
}
 
int main()
{
    "The required averages are :- ";
    calavg(7, 11, 52, 83, 47, 23, 66,78);
    calavg(8, 11, 42, 63, 47, 590,23,90,46);
   
}
