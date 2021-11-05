#include <stdio.h>
int main()
{int a=0;
int b=0;
int c=0;
int d=0;
scanf("%d",&a);
b=a/100;
if(a%100>0){if((a%100)%10>0){

	c=(a%100)/10;
	d=(a%100)%10;
	printf("%d",d);
	printf("%d",c);
	printf("%d",b);}
	else{c=(a%100)/10;
	printf("%d",c);
	printf("%d",b);
	}
}else{printf("%d",b);
}

 } 
