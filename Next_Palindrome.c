#include <stdio.h>
int Palindrome(int input,int output)
{
    int num,x=0;
    output=input+1;
    while(x==0)
    {
        num=output;
        int rev=0,s;
        while(num>0)
        {
            s=num%10;
            rev=(rev*10)+s;
            num=num/10;
        }
        if(output==rev)
        {
            printf("%d",output);
            x=1;
        }
        output++;
    }
}
int main()
{
    int input,output;
    scanf("%d",&input);
    Palindrome(input,output);
}
