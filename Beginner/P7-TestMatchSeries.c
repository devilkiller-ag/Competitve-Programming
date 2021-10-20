/*
Author: Ashmit JaiSarita Gupta
Topic: Test Match Series Problem Code: TESTSERIES
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement: 
A 5 match test series between India and England has just concluded.

Every match could have ended either as a win for India, a win for England, or a draw. You know the result of all the matches. Determine who won the series or if it ended in a draw.

A team is said to have won the series if it wins strictly more test matches than the other team.

Input Format
First-line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, five space-separated integers R1,R2,R3,R4,R5 denoting the results of all the five matches. Ri=0 denotes that the test match ends in a draw. Ri=1 denotes that the test match is won by India. Ri=2 denotes that the test match is won by England.
Output Format
For each test output "DRAW" if the series ends in a draw, "INDIA" if the series is won by India, and "ENGLAND" if the series is won by England.

You may print each character of the string in uppercase or lowercase (for example, the strings "dRaw", "draw", "Draw" and "DRAW" will all be treated as identical).

Constraints
1≤T≤1000
0≤Ri≤2
Sample Input 1 
3
0 1 2 1 0
0 1 2 1 2
2 2 2 2 1
Sample Output 1 
INDIA
DRAW
ENGLAND
Explanation
Test Case 1: India wins 2 matches while England won 1 match so India wins the series.

Test Case 2: Both teams win 2 matches so the series ends in a draw.

Test Case 3: England won 4 matches while India won 1 match so England wins the series.
*/
#include <stdio.h>

void seriesResult(int matchResult[])
{
    int countIndia = 0, CountEngland = 0, i;
    for (i = 0; i < 5; i++)
    {
        if (matchResult[i] == 1)
        {
            countIndia++;
        }
        if(matchResult[i] == 2)
        {
            CountEngland++;
        }
    }
    if (countIndia > CountEngland)
    {
        printf("INDIA\n");
    }
    else if (CountEngland > countIndia)
    {
        printf("ENGLAND\n");
    }
    else
    {
        printf("DRAW\n");
    }
}

int main()
{
    int testCase, i;
    scanf("%d", &testCase);
    int matchResult[testCase][5];
    // Input
    for (i = 0; i < testCase; i++)
    {
        scanf("%d %d %d %d %d", &matchResult[i][0], &matchResult[i][1], &matchResult[i][2], &matchResult[i][3], &matchResult[i][4]);
    }
    // Display
    for (i = 0; i < testCase; i++)
    {
        seriesResult(matchResult[i]);
    }
    return 0;
}