/*
Author: Ashmit JaiSarita Gupta
Topic: Lucky Number Problem Code: LUCKYNUM
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement: 
Chef buys a lottery ticket that has a 3 digit code associated with it. He thinks that digit 7 is his lucky digit and brings him good luck. Chef will win some amount in the lottery if at least one of the digits of the lottery ticket is 7.

Given three digits A, B, and C of the lottery ticket, tell whether Chef wins something or not?

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three space separated integers A,B,C.
Output Format
For each testcase, output in a single line answer "YES" if Chef wins a positive amount with the lottery and "NO" if not.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤1000
0≤A,B,C≤9
Sample Input 1 
3
0 0 0
7 8 9
2 7 7
Sample Output 1 
NO
YES
YES
Explanation
Test Case 1: Since no digit is equal to 7, Chef fails to win any amount in the lottery.

Test Case 2: Since the first digit is equal to 7, Chef will win some amount in the lottery.

Test Case 3: Since the second and third digit is equal to 7, Chef will win some amount in the lottery.
*/
#include <stdio.h>

void checkLuckyDigit(int draw[])
{
    int check = 0, i;
    for (i = 0; i < 3; i++)
    {
        if (draw[i] == 7)
        {
            check = 1;
        }
    }
    if(check==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int testCase, i;
    scanf("%d", &testCase);
    int drawNumber[testCase][3];

    for (i = 0; i < testCase; i++)
    {
        scanf("%d %d %d", &drawNumber[i][0], &drawNumber[i][1], &drawNumber[i][2]);
    }
    //display
    for (i = 0; i < testCase; i++)
    {
        checkLuckyDigit(drawNumber[i]);
    }

    return 0;
}