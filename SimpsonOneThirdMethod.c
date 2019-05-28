#include<stdio.h>
#include<math.h>
float f(float);
void main(){
    int i,n;
    float a,b,x0,h, sum = 0;
    printf("Enter the lower limit: ");
    scanf("%f",&a);
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    x0 = a;

    for(i=1; i<=n/2; i++){
        sum = sum + (h*(f(x0)+4*f(x0+h)+f(x0+2*h))/3);
        x0 = x0 + 2*h;
    }
    printf("The sum is: %f",sum);
}
float f(float x){
    return ((pow(x,3)-3*pow(x,2))/4);
}
