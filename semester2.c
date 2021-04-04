#include<stdio.h>
int sum(int x, int y);
main(){
    int a, b,s;
    printf("enter value for a and b:  ");
    scanf("%d %d", &a, &b);
    s=sum(a,b);
    printf("the sum of the given numbers is %d", s);

}
int sum(int x, int y){
    int s;
    s=x+y;
    return s;
}
