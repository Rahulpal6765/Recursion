#include<stdio.h>
float factorial(float n);
int main (){
    float n;
    printf("Enter the natural number : ");
    scanf("%f", &n);
    printf("factorial of %f is %f\n", n, factorial(n));
    return 0;
}
float factorial(float n){
    if (n == 1){
        return 1;
    }
float factNm1 = factorial(n-1); // fact of 1 to n
float factN = factNm1*n;
return factN;
}