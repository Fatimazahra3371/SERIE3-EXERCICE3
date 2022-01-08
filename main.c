#include <stdio.h>
#include <stdlib.h>

int main()
{
   int V0,V1,V2,V,n,i,Sum;
   V0=1;
   V1=10;
   V2=20;
   printf("donner la valeur n \n");
   scanf("%d" ,&n);
   if(n==0)
   {
       printf("la valeur est V: %d" ,V0);
    }
    else if(n==1)
   {
       printf("la valeur est V: %d" ,V1);
   }
   else if(n==2)
   {
       printf("la valeur est V: %d" ,V2);
   }

   else{
       for(i=3;i<=n;i++)
       V=(1/(V2+2*V1))*V0;
       printf("la valeur est V: %d",V);
       Sum=Sum+V;
       V0=V1;
       V1=V2;
       V2=V;
       }
        printf("la somme est Vn: d",Sum);
    return 0;
}

