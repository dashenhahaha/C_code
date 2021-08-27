#include <stdio.h>
int main()
{int a=0;
int b=1;
scanf("%d",&a);
printf("a!=");
do{printf("%d",a);
printf("*");
b=b*a;
a--;
}while(a>1);
printf("1=%d",b);
return 0;
}
