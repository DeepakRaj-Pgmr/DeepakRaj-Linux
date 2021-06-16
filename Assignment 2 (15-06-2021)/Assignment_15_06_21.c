1. Write a program to take input as a password but should display only x's instead of characters.
Ans-
#include <conio.h>
#include <stdio.h>
void main()
{
    char pin[255]={0};
    int i=0;

    printf("Enter a pin : ");
    for (i=0;pin[i-1] != '\r';i++) {
        pin[i]=getch();
        printf("x");
    }
    pin[i] = '\0';
    printf("\n");
    printf("Entered pin : ");
    for (i = 0; pin[i] != '\0'; i++)
        printf("%c", pin[i]);
    getch();
}

2. Execute the line and find the output a = 2, b =1, x=(a++ && (!b) && b|| ++a);

Ans- 1

3. Program to find the sum of digits of a number until the sum is reduce to 1 digit
Ans- 

#include <stdio.h>
void main()
{
    int num,rem,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    rem=num;
    while(rem > 0){
        sum=sum + rem%10;
        rem = rem/10;
        if(rem == 0)
        {
            if(sum < 9)
            {
                break;
            }
            rem = sum;
            sum = 0;
        }

    }
    printf("Single digit : %d",sum);
}


4. Execute the code in screenshot. Give the output
Ans- Error
    




