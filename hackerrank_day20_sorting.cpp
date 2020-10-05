#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int bubblesort(int *a,int n){
    int swaptotal=0;
    int temp;
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    for (int j=0; j<n-1; j++) {
        if (a[j]>a[j+1]) {
         temp=a[j+1];
         a[j+1]=a[j];
         a[j]=temp;
         numberOfSwaps++;

            }
        }
        if (numberOfSwaps==0) {
            break;
        }
        swaptotal=swaptotal+numberOfSwaps;

    }
    return swaptotal;
}


int main() {
    int n; 
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }
    // Write Your Code Here
    printf("Array is sorted in %d swaps.\n",bubblesort(a,n));
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);
    return 0;
}
