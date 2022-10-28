#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**
 * @brief Generates a random valid password
 *
 * 
 */
char gen_pass(int N)
{
    int i = 0;
    int randomizer = 6;

    srand((unsigned int)(time(NULL)));

    char numeric[] = "0..9";

    char alphanumeric[] = "A..Z";

    char low_alphanumeric = "a..z";

    char special_char[] = "!@#$%&*?";

    char password[N];

    randomizer = rand() % 4;

    // iteration from 0 to N
}