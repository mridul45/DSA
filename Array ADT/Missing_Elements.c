#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[] = {6,7,8,9,10,11,13,14,15,16,17};

    int l = 6;
    int h = 17;
    int n = 11;
    int diff = l-0;

    for(int i = 0 ; i<n ; i++){
        if(A[i]-i != diff){
            printf("The missing element is %d\n", i+diff);
            break;
        }
    }
    return 0;
}