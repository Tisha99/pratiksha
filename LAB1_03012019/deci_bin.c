#include<stdio.h>
#include<math.h>
void deci_bin(int);
void bin_deci(int);
int main()
{
  int n,n1;
  printf("\nEnter a binary number: ");
  scanf("%d",&n);
  bin_deci(n);
  printf("\nEnter a decimal number: ");
  scanf("%d",&n1);
  deci_bin(n1);
}
void deci_bin(int n)
{
   int num,s=0,i=0,j=0;
   while(n>0)
   {
      num=n%2;
      s=s*10+num;
      n=n/2;
      i++;
   }
   n=s;
   s=0;
   while(j!=i)
   {
      num=n%10;
      s=s*10+num;
      n=n/10;
      j++;
   }
   printf("\nBinary is: %d",s);
}
void bin_deci(int n1)
{
   int s=0,i=0;
   int num;
   while(n1>0)
   {
     num=n1%10;
     s=s+num*pow(2,i);
     n1=n1/10;
     i++;
   }
   printf("\nDecimal number is: %d",s);
}
