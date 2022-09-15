# Binary-Decimal
conversion of binary to decimal or vice versa based on user's choice, later try to add conversion of negative numbers too
#include<stdio.h>
void main()
{
    int b=0,d=0,k=1,rem,choice,method;
    printf("Enter Choice form given options:\n1. To convert Binary to Decimal.\n2. To convert Decimal to Binary");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter Binary Number: ");
        scanf("%d",&b);
        while(b!=0)
        {
           rem=b%10;
           b/=10;
           d=d+(k*rem);
           k*=2;
        }
        printf("Decimal Number = %d",d);
        break;

        case 2:
       //create one if condition to check if number enterd is less than 0 and create a loop to find negative number 
        printf("ENTER:\n1. for answer WITHOUT using RIGHT SHIFT OPERATOR.\n2. for answer using RIGHT SHIFT OPERATOR\n3. for using both(1st and 2nd method)");
        scanf("%d",&method);
        printf("Enter Decimal Number: ");
        scanf("%d",&d);
        switch(method)
        {
            case 1:
            while(d!=0)
            {
                rem=d%2;
                d/=2;
                b=(rem*k)+b;
                k*=10;
            }
            printf("%d\n",b);
            break;
        
            case 2:
            while(d!=0)
            {
                rem=d&1;
                 d=d>>1;
                b=(rem*k)+rem;
                k*=10;
            }
            printf("%d\n",b);
            break;
        
            case 3:
            while(d!=0)
            {
                rem=d%2;
                d/=2;
                b=(rem*k)+b;
                k*=10;
            }
            printf("%d\n",b);

            while(d!=0)
            {
                rem=d&1;
                d=d>>1;
                b=(rem*k)+rem;
                k*=10;
            }
            printf("%d\n",b);
            break;

            default: 
            printf("INVALID INPUT!");

        }
        break;

        default: 
        printf("INVALID INPUT!");
    }
    
}
