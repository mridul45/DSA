#include<stdio.h>

int main(){
    char A[] = "WELCOME";
    int i;
    for(i = 0 ; A[i]!='\0' ; i++){
        A[i] += 32;
    }
    printf("%s", A);

    char B[] = "WelCoMe";
    int j;
    for(j = 0 ; B[j]!='\0'; j++){
        if(B[j]>=65 && B[j]<=90){
            B[j]+=32;
        }
        else if(B[j]>=97 && B[j]<=122){
                B[j]-=32;
            } 
    }
    printf("\n");
    printf("%s", B);
    return 0;
}