#include<stdio.h>
int fact(int a);
int main () {
int n;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("The factorial is %d",fact(n));




    return 0;
}

int fact(int a){
    if(a==0){
        return 1;
    } else {
        return  a * fact(a-1);
    }
}