#include<stdio.h>
int main()
{
    int i,count=0,num;
    printf("Enter a positive number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if (count==0)
    {
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }
    return 0;
}
