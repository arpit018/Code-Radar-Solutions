#include <stdio.h>


int main(){
    int a;
    int b;
    int c;
    scanf("%d" ,&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int d = a + b + c;
    float e = d / 3.0;
    printf("Average: %.2f", e);
}