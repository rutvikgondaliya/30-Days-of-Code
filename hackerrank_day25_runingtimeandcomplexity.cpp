#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isprime(int n){
    if (n==1) {
    return false;
    }
    if (n<=3) {
    return true;
    }
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) {
        return false;
        }
    }
    return true;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,i;
    scanf("%d",&t);
    for (i=0; i<t; i++) {
    scanf("%d",&n);
    if(isprime(n)){
        printf("Prime\n");
    }
    else {
        printf("Not prime\n");
    }
    } 
    return 0;
}
