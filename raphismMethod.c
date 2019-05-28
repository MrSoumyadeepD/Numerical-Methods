//Raphism method
#include<stdio.h>
#include<math.h>
float f(float);
float f1(float);
void main(){
    float x0, x1, e;
    printf("Enter x0: ");
    scanf("%f",&x0);
    printf("Enter e: ");
    scanf("%f",&e);
    while(fabs(f(x0))>e){
        x1 = x0 - (f(x0)/f1(x0));
        x0 = x1;
    }
    printf("The root is: %f",x0);
}
float f(float x0){
    return (pow(x0,3)-5*x0+1);
}
float f1(float x0){
    return (3*pow(x0,2)-5);
}
