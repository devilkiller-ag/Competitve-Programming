/*
Author: Ashmit JaiSarita Gupta
Topic: Second Largest Problem Code: FLOW017
Site: Codechef
Date Created: 24-10-2021
*/
/*
Problem Statement:
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000
Example
Input
3 
120 11 400
10213 312 10
10 3 450

Output

120
312
10
*/
#include <stdio.h>

int secondLargest(int a, int b, int c)
{
    int secLargest;
    if (a >= b && a >= c) // if a is largest
    {
        if (b > c)
        {
            secLargest = b;
        }
        else
        {
            secLargest = c;
        }
    }
    else if (b >= a && b >= c) // if b is largest
    {
        if (a > c)
        {
            secLargest = a;
        }
        else
        {
            secLargest = c;
        }
    }
    else // if c is largest
    {
        if (a > b)
        {
            secLargest = a;
        }
        else
        {
            secLargest = b;
        }
    }
    return secLargest;
}

int main()
{
    int testCase, num1, num2, num3, i;
    scanf("%d", &testCase);
    int result[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d %d %d", &num1, &num2, &num3);
        result[i] = secondLargest(num1, num2, num3);
    }
    for (i = 0; i < testCase; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}