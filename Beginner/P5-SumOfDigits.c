/*
Author: Ashmit JaiSarita Gupta
Topic: Sum of Digits Problem Code: FLOW006
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement: 
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
12345
31203
2123
Output
15
9
8
*/
#include <stdio.h>

int sumOfDigits(int number)
{
    int sum = 0, i; // sum --> to store sum of digits, i --> loop variable
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    int testCase, temp, i; // i --> loopVariable
    scanf("%d", &testCase);
    int sumDigitsResult[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d", &temp);
        sumDigitsResult[i] = sumOfDigits(temp);
    }
    //Display of result
    for (i = 0; i < testCase; i++)
    {
        printf("%d\n", sumDigitsResult[i]);
    }
    return 0;
}