
#include<stdio.h>

#include"memoizationfactorials.h"

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
void main(void)
{
    puts("-----------------------------");
    puts("| codedrome.com             |");
    puts("| Memoization of Factorials |");
    puts("-----------------------------\n");

    // calculate all values to max in advance
    factorials facs1;

    bool success = factorials_calculate(&facs1, 9);

    if(success)
    {
        factorials_output(&facs1);
        puts("");

        factorials_free(&facs1);
    }

    // allocate and get: calculate and store values as requested
    factorials facs2;

    success = factorials_allocate(&facs2, 9);

    if(success)
    {
        factorials_output(&facs2);
        puts("");

        factorials_get(&facs2, 3);
        factorials_get(&facs2, 5);
        factorials_get(&facs2, 7);

        factorials_output(&facs2);
        puts("");

        factorials_free(&facs2);
    }
}
