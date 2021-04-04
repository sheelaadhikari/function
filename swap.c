//write a program to find the sum of two variable using function.
#include<stdio.h>
int sum(int *p, int *q);
void main(){
    int a, b;
    printf("enter the value : ");
    scanf("%d %d", &a, &b);
    printf("the sum is %d", sum(&a, &b));
}
int sum(int *p, int *q){
    int sum;
    sum= *p+*q;
    return sum;

}