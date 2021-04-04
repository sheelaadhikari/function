//write a program to fnd sum and max.

#include<stdio.h>
void dowork(int a, int b, int c, int*p, int *q){
    *p=a+b+c;
    if(a>b&& a>c)
    *q=a;
    else if(b>c)
    *q=b;
    else 
    *q=c;
}
void main(){
    int x=10,y=20, z=15, sum, max;
    dowork(x, y, z, &sum, &max);
    printf("sum is %d and max is %d", sum, max);
}