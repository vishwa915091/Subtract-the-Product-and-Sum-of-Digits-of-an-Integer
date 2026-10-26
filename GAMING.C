#include<stdio.h>
int main()
{
  int num,digit;
  int sum=0;
  int product=1;
  scanf("%d",&num);
  while (num>0)
  {
   digit=num%10;
   sum=sum+digit;
   product=product*digit;

   num=num/10;
  }
  printf("%d",product-sum);
  return 0;
}
					    

