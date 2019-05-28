

 #include<stdio.h.>
#include<math.h.>
float f(float x)
{
	return (pow(x,3)-(5*x)+1);
}
int main()
{
    float a,b,e,x;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of e:");
    scanf("%f",&e);
    do
    {
        x=(a+b)/2;
        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
    }
    while(fabs(f(x))>e);
    printf("root=%f",x);
}

