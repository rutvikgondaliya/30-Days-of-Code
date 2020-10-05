#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char regex[]="@gmail.com";
    bool flag=true;
    int N;
    scanf("%d",&N);
    char arr[N][50];

    for (int i=0; i<N; i++) {
    
        char* firstname = (char*)malloc(10240* sizeof (char));
        char* emailid = (char*)malloc(10240* sizeof (char));
        scanf("%s %s",firstname,emailid);

        for (int j=0; j<strlen(emailid); j++) {
            if (emailid[j]=='@') {
                for (int k=0; k<strlen(regex); k++) {
                    if (emailid[j+k]!=regex[k]) {
                        flag=false;
                        break;
                    }
                }
                if (flag) {
                    strcpy(arr[i],firstname);
                }else {
                flag=true;
                strcpy(arr[i],"NULL");
                }
                break;
            }
            
        }
    }
    for (int i=0; i<N-1; i++) {
                for(int j=i+1; j<N; j++){
                    if (strcmp(arr[i],arr[j])>0) {
                        char* temp =(char*)malloc(10240 * sizeof(char));
                        strcpy(temp, arr[j]);
                        strcpy(arr[j], arr[i]);
                        strcpy(arr[i], temp);
                    }
                }
            }
    for (int i=0; i<N; i++) {
        if (strcmp(arr[i],"NULL")!=0) {
                    printf("%s\n",arr[i]);
                }
    }
    return 0;
}
