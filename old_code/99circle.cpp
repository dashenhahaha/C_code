#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    a++;
    for(a=1;a<=9;++a){
        for(b=1;b<=a;++b){
            printf("%d",a);
            printf("*");
            printf("%d",b);
            printf("=");
            printf("%d",a*b);
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}
