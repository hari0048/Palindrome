#include <stdio.h>
int Palindrome(int input,int output)
{
    int num,x=0,rev;
    output=input+1;
    while(x==0)
    {
        num=output;
        rev=Reverse(num);
        if(output==rev)
        {
            printf("%d",output);
            x=1;
        }
        output++;
    }
}
int Reverse(int num)
{
    int rev=0,s;
    while(num>0)
    {
        s=num%10;
        rev=(rev*10)+s;
        num=num/10;
    }
    return rev;
}
int main()
{
    int input,output;
    scanf("%d",&input);
    Palindrome(input,output);
}
