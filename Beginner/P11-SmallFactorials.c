/*
Author: Ashmit JaiSarita Gupta
Topic: Small factorials Problem Code: FCTRL2
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement:
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6
*/
#include <stdio.h>

int factorial(int number)
{
    int i, fact = 1;
    for (i = number; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int testCase, number, i;
    scanf("%d", &testCase);
    int factResult[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d", &number);
        factResult[i] = factorial(number);
    }
    // Display
    for (i = 0; i < testCase; i++)
    {
        printf("%d\n", factResult[i]);
    }
    return 0;
}