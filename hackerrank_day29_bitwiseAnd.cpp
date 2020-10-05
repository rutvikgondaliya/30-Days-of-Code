#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maximumand(int n,int k){
    int max = -1;
    for (int a=1; a<n; a++) {
        for (int b=a+1; b<=n; b++) {
            int And = a&b;

            if (And>max && And<k) {
                max=And;
            }
        }
    }
    return max;
}

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        
        int n;
        int k;
        scanf("%d %d",&n,&k);
        printf("%d\n",maximumand(n,k));
    }
    return 0;
}