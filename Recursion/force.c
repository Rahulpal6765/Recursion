#include<stdio.h>
float force(float mass);
int main(){
float mass;
printf("Enter the mass of body : ");
scanf("%f", &mass);
printf("force = %.2f\n", force(mass));
return 0;

}
float force(float mass){
    float a = 9.8;
    float f = mass * a;
    return f;
}
