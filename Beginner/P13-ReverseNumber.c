/*
Author: Ashmit JaiSarita Gupta
Topic: Reverse The Number Problem Code: FLOW007
Site: Codechef
Date Created: 21-10-2021
*/
/*
Problem Statement:
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32
*/
#include <stdio.h>

int reverse(int number)
{
    int reverse = 0, remainder;
    while (number > 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    return reverse;
}

int main()
{
    int testCase, number, i;
    scanf("%d", &testCase);
    int revResult[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d", &number);
        revResult[i] = reverse(number);
    }
    for (i = 0; i < testCase; i++)
    {
        printf("%d\n", revResult[i]);
    }
    return 0;
}