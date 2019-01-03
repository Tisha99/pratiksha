#include<stdio.h>
int convert(int,int);
int main()
{
   int a,c[10];
   int b=2;
   printf("\nEnter a number: ");
   scanf("%d",&a);
   convert(a,b);
   printf("\nEnter a binary number: ");

}
int convert(int a,int b)
{

   int i=0,num[20];
   while(a>0)
     {
       num[i]=a%b;

       a=a/2;
       i++;
     }
    printf(num[1]);



}
int conv(int c[10],int b)
{
   if(b==0)
      return(0);
   else
   {
      int i=0;
      return(c[i],b);
   }
}
