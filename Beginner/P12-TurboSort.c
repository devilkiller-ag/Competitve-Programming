/*
Author: Ashmit JaiSarita Gupta
Topic: Turbo Sort Problem Code: TSORT
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement:
Given the list of numbers, you are to sort them in non decreasing order.
Input
t – the number of numbers in list, then t lines follow [t <= 10^6].
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.
Example
Input:

5
5
3
6
7
1
Output:

1
3
5
6
7
*/
#include <stdio.h>

void tsort(int Array[], int length)
{
    int i, j, temp;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (Array[i] < Array[j])
            {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
    // Display
    for (i = 0; i < length; i++)
    {
        printf("%d\n", Array[i]);
    }
}

int main()
{
    int testCase, i;
    scanf("%d", &testCase);
    int numbersArray[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d", &numbersArray[i]);
    }
    tsort(numbersArray, testCase);
    return 0;
}