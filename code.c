#include<stdio.h>
#include<math.h>
#include<conio.h>
void ten(int);
void nw(int);
void hundred(int);
void operate(int);
void two_digit(int);
int cnt(long);
void twenty(int);
main()
{
    unsigned long num,t;
    int count;
    printf("enter the number");
    scanf("%d",&num);
    count=cnt(num);
    while(num)
    {
        count-=2;
        if(count%2==0)
            count++;
       if(count>=3)
        {
            t=(pow(10,count));
            two_digit(num/t);
            num%=t;
        }
        else
        {
            nw(num);
            break;
        }
            operate(count);
    }
getch();
}
int cnt(long x)
{
    int t=0;
    while(x)
    {
        t++;
        x/=10;
    }
    return t;
}
void ten(int t)
    {
       if(t==1)
            printf("one ");
        else if(t==2)
            printf("two ");
        else if(t==3)
            printf("three ");
        else if(t==4)
            printf("four ");
        else if(t==5)
            printf("five ");
        else if(t==6)
            printf("six ");
        else if(t==7)
            printf("seven ");
        else if(t==8)
            printf("eight ");
        else if(t==9)
            printf("nine ");
    }
     void hundred(int x)
    {
        if(x==1)
            printf("ten ");
        else if(x==2)
            printf("twenty ");
        else if(x==3)
            printf("thirty ");
        else if(x==4)
            printf("forty ");
        else if(x==5)
            printf("fifty ");
        else if(x==6)
            printf("sixty ");
        else if(x==7)
            printf("seventy ");
        else if(x==8)
            printf("eighty ");
        else if(x==9)
            printf("ninety ");
    }
void operate(int x)
{
    if(x==1)
        printf("hundred ");
    else if(x==3)
        printf("thousand ");
    else if(x==5)
        printf("lakhs ");
    else if(x==7)
        printf("crore ");
}
void two_digit(int x)
{
    if(x<10)
        ten(x);
    else if(x>10&&x<20)
        twenty(x);
    else if(x%10==0)
        hundred(x);
    else
    {
        hundred(x/10);
        ten(x%10);
    }
}
void twenty(int x)
    {
         if(x==11)
            printf("eleven ");
        else if(x==12)
            printf("twelve ");
        else if(x==13)
            printf("thirteen ");
        else if(x==14)
            printf("fourteen ");
        else if(x==15)
            printf("fifteen ");
        else if(x==16)
            printf("sixteen ");
        else if(x==17)
            printf("seventeen ");
        else if(x==18)
            printf("eighteen ");
        else if(x==19)
            printf("nineteen ");
    }
void nw(int x)
{
    if(x/100)
    {
    ten(x/100);
    operate(1);
    }
    two_digit(x%100);
}
