//RK Method

#include<stdio.h>
#include<math.h>
float f(float x, float y);
void main(){
    float x0, y0, n, x, h, i, k1, k2, k3, k4;
    printf("Enter the value of x0: ");
    scanf("%f",&x0);
    printf("Enter the value of y0: ");
    scanf("%f",&y0);
    printf("Enter X: ");
    scanf("%f",&x);
    printf("Enter h: ");
    scanf("%f",&h);

    n = (x-x0)/h;

    for(i=1; i<=n; i++){
        k1 = h*f(x0,y0);
        k2 = h*f(x0+h/2, y0+k1/2);
        k3 = h*f(x0+h/2, y0+k2/2);
        k4 = h*f(x0+h, y0+k3);

        y0 = y0+(k1+2*k2+2*k3+k4)/6.0;
        x0 = x0+h;

        printf("The result is: %f\n",y0);
    }
}
float f(float x0, float y0){
    return (y0-x0)/(y0+x0);
}
