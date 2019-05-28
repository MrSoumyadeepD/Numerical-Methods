//Lagrange Interpolation
#include<stdio.h>
#include<math.h>
void main(){
    int N, n, i, j;
    float x[20], y[20], m[20], X, L= 0;
    printf("Enter number of data points: ");
    scanf("%d",&N);
    n = N -1;
    printf("Enter the interpolating points: ");
    scanf("%f",&X);
    printf("Enter the xi values: ");
    for(i=0;i<=n;i++){
        scanf("%f",&x[i]);
    }
    printf("Enter the values of yi: ");
    for(i=0;i<=n;i++){
        scanf("%f",&y[i]);
    }
    for(i=0;i<=n;i++){
        m[i]=1;
        for(j=0;j<=n;j++){
            if(i!=j){
                m[i]=m[i]*(X-x[i])/(x[i]-x[j]);
            }
        }
        L = L + m[i]*y[i];
    }
    printf("Y value is %f",L);
}
