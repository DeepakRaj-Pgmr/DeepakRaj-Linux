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