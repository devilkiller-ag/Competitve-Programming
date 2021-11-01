/*
Author: Ashmit JaiSarita Gupta
Topic: Find Remainder Problem Code: FLOW002
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement: 
Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 10000
Example
Input
3 
1 2
100 200
40 15

Output
1
100
10x
*/
#include <stdio.h>
int main()
{
    int testCase, dividend, divisior, i;
    scanf("%d", &testCase);
    int remResult[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d %d", &dividend, &divisior);
        remResult[i] = dividend % divisior;
    }
    for (i = 0; i < testCase; i++)
    {
        printf("%d\n", remResult[i]);
    }
    return 0;
}