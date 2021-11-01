/*
Author: Ashmit JaiSarita Gupta
Topic: 
Date Created: 
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int generateRandom(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int testCase, i, q1, q2,num;
    long int numberX;
    scanf("%d", &testCase);
    for (i = 0; i < testCase; i++)
    {
        numberX = generateRandom((2 * pow(10, 18)) - 1) + 1;
        printf("%ld\n", numberX);
        scanf("%d", &q1);
        scanf("%d", &q2);
        num

    }
    return 0;
}