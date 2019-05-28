#include<stdio.h>
#include<math.h>
void main(){
    int i, j, N, n;
    float X, sum, h, u, x[10], y[10], a[10][10], m=1;
    printf("Enter the number of data: ");
    scanf("%d",&N);

    n = N-1;

    printf("Enter the values of xi: ");
    for(i=0; i<=n; i++){
        scanf("%f",&x[i]);
    }
    printf("Enter the values of yi: ");
    for(i=0; i<=n; i++){
        scanf("%f",&y[i]);
    }

    printf("Enter the interpolating point: ");
    scanf("%f",&X);

    h = x[1]-x[0];
    u = (X-x[0])/h;
    for(i=0; i<=n; i++){
        a[i][0]=y[i];
    }
    for(j=1; j<=n; j++){
        for(i=0; i<=n-j; i++){
            a[i][j] = a[i+1][j-1]-a[i][j-1];
        }
    }

    sum = y[0];
    for(j=1; j<=n; j++){
        m = (m*(u-j+1))/j;
        sum = sum+m*a[0][j];
    }

    printf("The value of that point is: %f",sum);
}
