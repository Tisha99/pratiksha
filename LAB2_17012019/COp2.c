#include<stdio.h>
void binary1(int);
void binary2(int);
int k=0,p=0;
int bin[100];
char H[10];
void hexa(char []);
void oct(char[]);
int main()
{
 int n,num;
 char s[10],o[10];
 printf("Choose the conversion : ");
 printf("\nEnter \n1)For hexadecimal to binary");
 printf("\n2)octal to binary\n3)bnary to octal");
 printf("\n4)binary to hexadecimal\n");
 printf("You choose : ");
 scanf("%d",&n);
 switch(n)
 {
  case 1:printf("\nEnter the hexadecimal number");
         scanf("%s",&s);
         hexa(s);
         break;
  case 2:printf("Enter the octal number");
         scanf("%s",&o);
         oct(o);
         break;
  case 3:
  printf("Enter the binary number");
         scanf("%d",&num);
         binary2(num);
         break;
  case 4:printf("Enter the binary number");
         scanf("%d",&num);
         binary1(num);
         break;
  default : printf("Enter a correct option");
 }
}

void hexa(char s[])
{
 int i;
 k=0;
 char t;
 for(i=0;i<10;i++)
   {
    t=s[i];
    switch(t)
    {
    case '0' : bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '1' : bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '2' : bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=2;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '3' : bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '4' : bin[k]=0;
               ++k;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '5' : bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '6' : bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '7' : bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '8' : bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '9' : bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case 'A' : bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case 'B' : bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case 'C' : bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case 'D' : bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case 'E' :  bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case 'F': bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    default  : ;

    }
   }
   printf("The binary equivalent of %s is : ",s);
   for(i=0;i<k;i++)
   {
    printf("%d",bin[i]);
    if(i%4==0)
    {
     printf("\t");
    }
   }

}

void binary1(int num)
{
int test,i;
test=num;
for(i=0;i<10;i++)
{
 test=test%10000;
 switch(test)
 {
  case 0000:H[p]='0';
        break;
  case 0001:H[p++]='1';
        break;
  case 10:H[p++]='2';
        break;
  case 11:H[p++]='3';
        break;
  case 100:H[p++]='4';
        break;
  case 101:H[p++]='5';
        break;
  case 110:H[p++]='6';
        break;
  case 111:H[p++]='7';
        break;
  case 1000:H[p++]='8';
        break;
  case 1001:H[p++]='9';
        break;
  case 1010:H[p++]='A';
        break;
  case 1011:H[p++]='B';
        break;
  case 1100:H[p++]='C';
        break;
  case 1101:H[p++]='D';
        break;
  case 1110:H[p++]='E';
        break;
  case 1111:H[p++]='F';
        break;
  default: ;
 }
 test=test/10000;

}
printf("\nBinary equivalent of %d is %s",num,H);
}

void oct(char num[])
{
int i,flag=0;
k=0;
char t;
printf("\n%s\n",num);
for(i=0;i<100;i++)
 {
  t=num[i];
  switch(t)
  {
  case '0' :   bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '1' : bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '2' : bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '3' : bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '4' : bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '5' : bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '6' : bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=0;
               k=k+1;
               break;
    case '7' : bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               bin[k]=1;
               k=k+1;
               break;
    case '\o' : flag=1;
    defalut : ;
  }
  if(flag==1)
  {
  break;
  }

 }
 printf(" k is %d %d",k);
printf("\nThe binary equivalent of octal number %s is ",num);
for(i=0;i<(k);i++)
{
if(i%3==0)
  {
  printf("\t");
  }
 printf("%d",bin[i]);
}
}


void binary2(int num)
{
int test,i;
test=num;
for(i=0;i<10;i++)
{
 test=test%1000;
 switch(test)
 {
  case 0:H[p]='0';
        break;
  case 1:H[p++]='1';
        break;
  case 10:H[p++]='2';
        break;
  case 11:H[p++]='3';
        break;
  case 100:H[p++]='4';
        break;
  case 101:H[p++]='5';
        break;
  case 110:H[p++]='6';
        break;
  case 111:H[p++]='7';
        break;
  case 1000:H[p++]='8';
        break;
  default: ;
 }
 test=test/1000;
 if(test==0)
 {
 break;
 }
}
printf("\nBinary equivalent of %d is %s",num,H);
}
