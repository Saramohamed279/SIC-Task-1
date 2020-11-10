#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, re=0;
   printf("Enter The Number You want to check : ");
   scanf("%d",&num);
   for(int i =1 ; i<num ; i++)
   {
       if (num % i ==0)
       {
           re+=i;
       }
   }
   if (re == num)
   {
       printf("This number is perfect");
   }
   else
    printf("This number isn't perfect\n");

    return 0;
}
