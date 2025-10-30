//Fibonacci series (Nth term)
//Input: 6 → Output: 8 ( 1, 1, 2, 3, 5, 8 …)
#include<stdio.h>
int fibo(int x){
    if (x==1 || x==2)
    {
        return 1;
    }
    return fibo(x-1)+fibo(x-2);
}
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}