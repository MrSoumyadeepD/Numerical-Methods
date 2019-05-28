//Eulars Method
#include<stdio.h>
#include<math.h>
float f(float x, float y);
float main(){
    float x0, y0, x, h, n,i;
    printf("Enter the value of x0: ");
    scanf("%f",&x0);
    printf("Enter the value of y0: ");
    scanf("%f",&y0);
    printf("Enter x: ");
    scanf("%f",&x);
    printf("Enter h: ");
    scanf("%f",&h);
    n = (x-x0)/h;
    for(i=0; i<=n; i++){
        y0 = y0+h*f(x0,y0);
        x0 = x0 +h;
        printf("Value of y: %f at x: %f \n",y0,x0);
    }
}
float f(float x0, float y0){
    return (y0-x0)/(y0+x0);
}
