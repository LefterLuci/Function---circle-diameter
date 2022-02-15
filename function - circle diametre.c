#include <stdio.h>
#include <stdlib.h>

int diam(int x)
{
    int result;

    result=x*2;

    return result;
}

int main()
{
   int r;

   printf("Please enetr the radius of the circle:\n");
   scanf("%d",&r);

   printf("The diameter of the circle is %d",diam(r));
   
    return 0;
}
