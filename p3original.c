/*Write a program find whether a number is a composite number. A Composite number has a factor other than 1 and itself
int input_number();
int is_composite(int n);
void output(int n, int composite);*/



#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number: \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
   int i,flag=0;
  
  if(n==0||n==1)//The number 0 & 1 is neither prime nor composite number
    return 2;
  else
  {
  for (i = 2; i <= n / 2; ++i)
  {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }
    return flag;  
  }
}
  
void output(int n,int composite)
{
 
  if(composite==0)
  printf("The number %d is prime number",n);
  else if(composite==1)
  printf("The number %d is composite number",n);
  else
  printf("The number 0 & 1 is neither prime nor composite number");
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}



