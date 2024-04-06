#include<stdio.h>
#include<math.h>
void printHello(int count);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printHello(n);

}
void printHello(int count){
    if (count == 0){
        return;
    } else{
    printf("Hello World\n");
    printHello(count-1);
}
}