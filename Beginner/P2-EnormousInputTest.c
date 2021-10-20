/*
Author: Ashmit JaiSarita Gupta
Topic: Enormous Input Test Problem Code: INTEST
Site: Codechef
Date Created: 20-10-2021
*/
/*
Question: 
Enormous Input Test Problem Code: INTEST
Add problem to Todo list
Submit
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.

Example
Input:
7 3
1
51
966369
7
9
999996
11

Output:
4
*/
#include <stdio.h>
int main()
{
    int numberOfInput, divisor, temp, count = 0, i; // i --> loop variable
    scanf("%d", &numberOfInput);
    scanf("%d", &divisor);
    for (i = 0; i < numberOfInput; i++)
    {
        scanf("%d", &temp);
        if (temp % divisor == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}