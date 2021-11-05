#define _CRT_SECURE_NO_WARNINGS
//////#include<stdio.h>
//////#include<math.h>
//////int main() {
//////    int a,  c;
//////    double b;
//////    double d=99999999;
//////    double sum=0;
//////    scanf("%lf", &b);
//////    c = 1;
//////    for (a = 1; fabs(d) > b; a = a + 3) {
//////        c++;
//////        d = 1.0 / a;
//////        if (c % 2 == 1) {
//////            d = -d;
//////        }
//////        sum += d;
//////    }
//////    printf("sum = %.6lf", sum);
//////    return 0;
//////}
#include<stdio.h>
int main() {
	int a, b=1, c=1;
	int d;
	int sum = 0;
	scanf("%d", &a);
	if (a < 10) {
		d = 1; 
		sum = a;
	}
	else {
		c = a % 10;
		b = a / 10;
		for (d=1; 1>0;d++) {
			 
			 c = b % 10;
			 b /= 10;
			 if (b / 10 == 0) {
				 c = b;
				 sum += c;
				 break;
			 }
			 sum += c;
		}

	}

	
	printf("%d %d", d, sum);
	return 0;
}