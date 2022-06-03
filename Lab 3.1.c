#include<stdio.h>
int main()
{
    int i,hour,extra;
    for(i=1;i<=10;i++)
    {
        printf("Enter working hours:");
        scanf("%d",&hour);
        if(hour>40)
        {
            extra=(hour-40)*12;
            printf("%d Rs is the overtime pay of the employee\n",extra);
        }
        else
        printf("This employee has not done \n");
    }
    return 0;
}
