#include <stdio.h>

int main(void) {
   int i=2;
   int sum=0;
   printf("Using while loop:\n");
   while(i<100)
   {
     sum=sum+i;
     i=i+3;
   }
  printf("%d\n",sum);
  sum=0;
  i=2;
  printf("Using do-while loop:\n");
  do
  {
    sum=sum+i ;
    i=i+3;
  }while(i<100);
  printf("%d",sum);
  sum=0;
  i=0;
  
  
    return 0;
    
}

