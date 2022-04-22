#include<stdio.h>
#include<conio.h>
int add(int,int);
int multiply(int,int);
int substract(int,int);
int devide(int,int);
int main()
{
    int a,b,c,d;
    printf("please enter the no: ");
    scanf("%i",&a);
    printf("please enter the no: ");
    scanf("%i",&b);
    printf("Now what would you like to perform:-\n");
    printf("For adding press 1\n");
    printf("For substraction press 2\n");
    printf("For multiply press 3\n");
    printf("For devide press 4\n");
    printf("now please enter the choice: ");
    scanf("%i",&c);
    switch (c)
    {
    case 1:
    {
    d=add(a,b);
    printf("%i",d);
        break;
    }
    case 2:
    {
    d=substract(a,b);
    printf("%i",d);
        break;
    }
    case 3:
    {
    d=multiply(a,b);
    printf("%i",d);
        break;
    }
    case 4:
    {
    d=devide(a,b);
    printf("%i",d);
        break;
    }
    default:
    printf("The entered choise is wrong.\n");
        break;
    }
    return 0;
}
int add(int x,int y)
{
    int t;
    t=x+y;
    return(t);
}
int substract(int x,int y)
{
    int t;
    t=x-y;
    return(t);
}
int multiply(int x,int y)
{
    int t;
    t=x*y;
    return(t);
}
int devide(int x,int y)
{
    int t;
    t=x/y;
    return(t);
}
