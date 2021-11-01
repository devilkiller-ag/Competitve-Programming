/*
Author: Ashmit JaiSarita Gupta
Topic: First and Last Digit Problem Code: FLOW004
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement:
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5
*/
#include <stdio.h>

int sumFirstAndLastDigit(int number)
{
    int firstDigit, lastDigit;
    lastDigit = number % 10;
    while (number > 0)
    {
        firstDigit = number % 10;
        number = number / 10;
    }
    return firstDigit + lastDigit;
}

int main()
{
    int testcase, number, i;
    scanf("%d", &testcase);
    int sumFL[testcase];
    for (i = 0; i < testcase; i++)
    {
        scanf("%d", &number);
        sumFL[i] = sumFirstAndLastDigit(number);
    }
    for (i = 0; i < testcase; i++)
    {
        printf("%d\n", sumFL[i]);
    }
    return 0;
}