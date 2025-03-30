#include <stdio.h>
int fibonacci(int n){
    if (n<=1){
        return n;

    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    scanf("d",&n);
    if (n<=0){
        printf("Invalid Input");
        return 0;
    }
    printf(fibonacci(%d)="%d\n",n,fibonacci(n));
    return 0;
}