/*
Author: Ashmit JaiSarita Gupta
Topic: Lucky Four Problem Code: LUCKFOUR
Site: Codechef
Date Created: 20-10-2021
*/
/*
Problem Statement:
Kostya likes the number 4 much. Of course! This number has such a lot of properties, like:

1 - Four is the smallest composite number;
2 - It is also the smallest Smith number;
3 - The smallest non-cyclic group has four elements;
4 - Four is the maximal degree of the equation that can be solved in radicals;
5 - There is four-color theorem that states that any map can be colored in no more than four colors in such a way that no two adjacent regions are colored in the same color;
6 - Lagrange's four-square theorem states that every positive integer can be written as the sum of at most four square numbers;
7 - Four is the maximum number of dimensions of a real division algebra;
8 - In bases 6 and 12, 4 is a 1-automorphic number;
9 - And there are a lot more cool stuff about this number!

Impressed by the power of this number, Kostya has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

Input
The first line of input consists of a single integer T, denoting the number of integers in Kostya's list.

Then, there are T lines, each of them contain a single integer from the list.

Output
Output T lines. Each of these lines should contain the number of occurences of the digit 4 in the respective integer from Kostya's list.

Constraints
1 ≤ T ≤ 105
(Subtask 1): 0 ≤ Numbers from the list ≤ 9 - 33 points.
(Subtask 2): 0 ≤ Numbers from the list ≤ 109 - 67 points.
Sample Input 1 
5
447474
228
6664
40
81
Sample Output 1 
4
0
1
1
0
*/
#include <stdio.h>

int countDigitFour(int number)
{
    int count = 0;
    while (number > 0)
    {
        if (number % 10 == 4)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main()
{
    int testCase, i, number;
    scanf("%d", &testCase);
    int countFour[testCase];
    for (i = 0; i < testCase; i++)
    {
        scanf("%d", &number);
        countFour[i] = countDigitFour(number);
    }
    // Display
    for (i = 0; i < testCase; i++)
    {
        printf("%d\n", countFour[i]);
    }
    return 0;
}