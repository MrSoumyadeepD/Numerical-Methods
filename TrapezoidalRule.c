#include<stdio.h>
#include<math.h>
float f(float);
void main(){
    int i, n;
    float a,x0,b,h,sum=0;
    printf("Enter the lower limit: ");
    scanf("%f",&a);
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("Enter the number of intervals: ");
    scanf("%d",&n);
    h = (b-a)/2;
    x0 = a;

    for(i=1; i<=n; i++){
        sum = sum+((h/2)*(f(x0)+f(x0+h)));
        x0 = x0 +h;
    }
    printf("The sum is: %f",sum);
}

float f(float x){
    return (pow(x,3)-3*pow(x,2))/4;
}
