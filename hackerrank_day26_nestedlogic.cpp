#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int da,ma,ya;// The actual return date
    int de,me,ye;// The expected return date

    scanf("%d %d %d",&da,&ma,&ya);// The actual return date
    scanf("%d %d %d",&de,&me,&ye);// The expected return date


    if (ya>ye) {
        printf("10000\n");
    }
    else if (ya<ye) {
        printf("0");
    }
    else if (ma<me) {
        printf("0");
    }
    else if (ma>me) {
        int fine=500*(ma-me);
        printf("%d",fine);
    }else if (da<de) {
        printf("0");
    }
    else {
        int fine=15*(da-de);
        printf("%d",fine);
    }
    return 0;
}

