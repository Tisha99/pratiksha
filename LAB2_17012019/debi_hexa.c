#include<stdio.h>
#include<math.h>
int hexa_bin(int);
int bin_hexa( int);
int hexa_oct(int);
int oct_hexa(int);
int main()
{
    int ch,a,b,c,num;
    while(1)
    {
        printf("\n\n1 to convert hexadecimal to binary\n2 to convert binary to hexadecimal");
        printf("\n3 to convert hexadecimal to octal\n4 to convert octal to hexadecimal\n5 to quit");
        printf("\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter a hexadecimal number: ");
                    scanf("%x",&num);
                    a=hexa_bin(num);
                    printf("\nThe Hexadecimal no. %X in binary is: %d",num,a);
                    break;
            case 2: printf("\nEnter a Binary number: ");
                    scanf("%x",&num);
                    b=bin_hexa(num);
                    printf("\nThe Binary no. %x in Hexadecimal is: %x",num,b);
                    break;
            case 3: printf("\nEnter a hexadecimal number: ");
                    scanf("%o",&num);
                    a=hexa_oct(num);
                    printf("\nThe Hexadecimal no. %o in Octal form is: %o",num,a);
                    break;
            case 4: printf("\nEnter a Octal number: ");
                    scanf("%o",&num);
                    c=oct_hexa(num);
                    printf("\nThe Octal no. %o in Hexadecimal is: %o",num,c);
                    break;
            case 5: exit(1);
                    break;
            default:printf("\nInvalid") ;
         }
    }
}
int hexa_bin(int num)
{

}
int bin_hexa( int num)
{
   int s=0x0,n,i=0x0;
   while(num!=0x0)
   {
      n=num%0x10;
      s=s+n*pow(0x2,i);
      i++;
      num=num/0x10;
   }
   return(s);
}
int hexa_oct(int num)
{

}
int oct_hexa(int num)
{
     int s=00,n,i=00;
   while(num!=00)
   {
      n=num%010;
      s=s+n*pow(02,i);
      i++;
      num=num/010;
   }
   return(s);
}
