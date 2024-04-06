#include<stdio.h>
#include<math.h>
void pattern(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    pattern(n);

}
void pattern(int n){
    for(int i =1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}