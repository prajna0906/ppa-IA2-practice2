/*Write a program find whether a number is a composite number. A Composite number has a factor other than 1 and itself
int input_number();
int is_composite(int n);
void output(int n, int composite);*/
#include <stdio.h>
 
int input_number()
{
    int n;
    printf("enter the number \t");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        return 1;
    }
    return 0;
}
void output(int n,int iscomposite)
{
    if(iscomposite )
    printf("%d is a composite number\n",n);
    else
    printf("%d is not a composite number\n",n);
}

int main()
{
    int n= input_number();
    int composite= is_composite(n);
    output(n,composite);
    return 0;
}
