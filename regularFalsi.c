//Regular Falsi
#include<stdio.h>
#include<math.h>
float f(float);
void main(){
    float a,b,x,e;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter e: ");
    scanf("%f",&e);
    do{
        x = (a*f(b)-b*f(a))/f(b)-f(a);
        if(f(a)*f(x)<0){
            b = x;
        }
        else{
            a = x;
        }
    }
    while(fabs(f(x))>e);
    printf("The root: %f",x);
}
float f(float u){
    return (pow(u,3)-5*u+1);
}
