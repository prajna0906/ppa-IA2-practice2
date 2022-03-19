/*Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void out_put(int sum);*/





#include<stdio.h>
int input_array_size()
{
  int n;
  printf("How many numbers do you want to enter: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("Enter %d numbers:\n ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite(int n, int a[n])
{
  int count=0,i;
  for(i=0;i<n;i++)
  {
       if(a[i]==2)
       {
          continue;
       }       
        else if(a[i]%2==0)
        {
         count=count+a[i];
        }
        
    }
    return count;
}
void output(int sum)
{
  printf("Sum of all composite numbers is %d",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_composite(n,a);
  output(result);
  return 0;
}

