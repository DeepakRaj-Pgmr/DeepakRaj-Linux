/*
2. Write a program to Print 1 to N using recursion and also draw the diagram.
*/

#include <stdio.h>

void recursion(int x);
void main()
{
    int N;
    printf("Enter N\n");
    scanf("%d",&N);
    printf("1 to N numbers are\n");
    recursion(N);
}
void recursion(int x)//rec(3)
{
    if(x > 1)
    {
        recursion(x-1);
    }
    printf("%d\n",x);
}
