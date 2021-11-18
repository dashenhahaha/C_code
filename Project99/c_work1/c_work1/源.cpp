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
//////////////}
////////#include<stdio.h>
////////int main() {
////////	int a, b=1, c=1;
////////	int d;
////////	int sum = 0;
////////	scanf("%d", &a);
////////	if (a < 10) {
////////		d = 1; 
////////		sum = a;
////////	}
////////	else {
////////		c = a % 10;
////////		b = a / 10;
////////		for (d=1; 1>0;d++) {
////////			 
////////			 c = b % 10;
////////			 b /= 10;
////////			 if (b / 10 == 0) {
////////				 c = b;
////////				 sum += c;
////////				 break;
////////			 }
////////			 sum += c;
////////		}
////////
////////	}
////////
////////	
////////	printf("%d %d", d, sum);
////////	return 0;
////////}
////////////#include<stdio.h>
////////////int main() {
////////////	int a, b, c, d,e;
////////////	a = b = c = d =e=0;
////////////	int sum = 0;
////////////	scanf("%d", &a);
////////////	e = a;
////////////	for (b = 1; a >= 0; b++) {
////////////		a = a -b ;
////////////		d = d + b;
////////////	}
////////////	for (c = 1; c <= b-2; c++) {
////////////		sum = c * c + sum;
////////////	}
////////////	sum = sum + (b - 1) * ((b-1)-(d-e));
////////////	printf("%d",sum);
////////////	return 0;
////////////}


////#include<stdio.h>
////int main() {
////	int a, b, c, d;
////	int sum = 0;
////	scanf("%d %d", &a, &b);
////	if (a > b) {
////		d = a;
////		a = b;
////		b = d;
////	}
////	c = a + 1;
////
////	for (; a < b; a++) {
////		if (c % 2 == 1 && c < b) {
////			d = c;
////			sum = sum + d;
////			d = 0;
////		}
////		c++;
////	}
////
////	printf("%d", sum);
////	return 0;
////}
//////
//////#include<stdio.h>
//////#include<math.h>
//////int nb(int x ) {
//////    int y=1,sum=0;
//////    int z=1;
//////    int i = 1;
//////        for (z=x; z != 0;z=z/10) {
//////            y = z % 10;
//////            sum = sum * 10 + y;
//////        }
//////        return sum;
//////}
//////int main() {
//////    int a, b, c, d;
//////    scanf("%d %d", &a, &b);
//////    c = (int)pow(a, b);
//////    d = nb(c);
//////    
//////    while (d >= 1000) {
//////////////        d = d / 10;
////////
////////    }
////////    c = nb(d);
////////    printf("%d", c);
////////    return 0;
////////}
////////
////////#include<stdio.h>
////////int main() {
////////    int a, b, c, d;
////////    c = 0;
////////    int z = 0;
////////    int x = 1;
////////    scanf("%d %d", &a, &b);
////////    for (; x <= a; x++) {
////////        int k=x;
////////        for (; k != 0; k = k / 10) {
////////
////////            
////////            z = k % 10;
////////            
////////            if (z == b) {
////////                c++;
////////                
////////            }
////////            
////////
////////        }
////////    }
////////    printf("%d", c);
////////}
////////////
////#include<stdio.h>
////////////#include<math.h>
////////////int main() {
////////////	int x, y, a, b, c, d, sum;
////////////	scanf("%d%d", &x, &y);
////////////	d = pow(x, y);
////////////	a = d % 10;
////////////	b = (d / 10) % 10;
////////////	c = (d / 100) % 10;
////////////	sum = a + b * 10 + c * 100;
////////////	printf("%d", sum);
////////////	return 0;
////////}
////////
////////#include<stdio.h>
////////int main() {
////////	int a, b, c, d;
////////	a = b = c = d = 0;
////////	int x=0, y=0;
////////	scanf("%d", &a);
////////	if (a >= 10) {
////////		for (; a > 0;) {
////////			b++;
////////			c = a % 10;
////////			a = a / 10;
////////			d = d + c;
////////		}
////////	}
////////	else {
////////		b = d = 1;
////////	}
////////	printf("%d %d", b, d);
////////	return 0;
////////}
////#include<stdio.h>
////int main() {
////	int a, b, c, d;
////	scanf("%d %d", &a, &b);
////
////}
//////}
//#include<stdio.h>
//int main() {
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//////
//////}
////#include <stdio.h>
////
////int CountDigit(int number, int digit);
////
////int main()
////{
////    int number, digit;
////
////    scanf("%d %d", &number, &digit);
////    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
////
////    return 0;
//////////} 
//////#include <stdio.h>
//////int main() {
//////	int m, n, t, i;
//////	int max, min;
//////	scanf("%d %d", &m, &n);
//////	if (m < n) {
//////		t = m;
//////		m = n;
//////		n = t;
//////	}
//////	for (i = 1; i <= n; i++) {
//////		if (m % i == 0 && n % i == 0) {
//////			max = i;
//////		}
//////	}
//////	min = m / max * n;
//////	printf("%d %d", max, min);
//////	return 0;
//////}

////#include<stdio.h>
////#include<math.h>
////int main() {
////    int a, b, c,e;
////    int sum = 0;
////     e = 0;
////    scanf("%d %d", &a, &b);
////    for (; a <= b; a++) {
////        int d = 0;
////        for (c = 2; c <= sqrt(a); c++) {
////            
////            if (a % c == 0) {
////                d++;
////            }
////
////        }
////        if (d == 0) {
////            e++;
////            sum += a;
////        }
////////
////////
////////    }
////////    printf("%d %d", e, sum);
////////    return 0;
////////}
////#include <stdio.h>
////#include <math.h>
////void main() {
////    int m; 
////    int i; 
////    int k;  
////    int a;
////    int b;
////   
////    scanf("%d", &m);
////       k = (int)sqrt((double)m);
////    for (i = 2; i <= k; i++)
////        if (m % i == 0)
////            break;
////   
////    if (i > k) {
////        a++;
////
////    }
////        
////
////    return 0;
////}

//////#include<stdio.h>
//////#include<math.h>
//////int main() {
//////    int a, b, c, d, e;
//////    int sum = 0;
//////    c = 1;
//////    
//////    scanf("%d %d", &a, &b);
//////    d = a;
//////    for (; c <= b; c++) {
//////        if (c > 1) {
//////            d = d * 10 + a;
//////        }
//////        sum += d;
//////    }
//////    printf("s = %d", sum);
//////    return 0;
//////}

////
////#include<stdio.h>
////int main() {
////    int a, b;
////    scanf("%d %d", &a, &b);
////    int c=1;
////    int x;
////    for (; c <= (b+1); c++) {
////        int i = 10;
////        scanf("%d", &x);
////        if (x<0) {
////            printf("Game Over");
////            break;
////        }
////        else if (c - b == 1) {
////            i = 1;
////        }
////        else if (c == 1 && a == x) {
////            printf("Bingo!\n");
////            break;
////        }
////        else if (c > 1 && c <= 3 && a == x) {
////            printf("Lucky You!\n");
////            break;
////        }
////        else if(c>3&&a == x&&i!=1) {
////            printf("Good Guess!\n");
////            break;
////        }
////        else if(a<x&&c<=b){
////            printf("Too big\n");
////        }
////        else if (a >x&&c<=b) {
////            printf("Too small\n");
////            
////        }
////        if (c == b) {
////            printf("Game Over");
////        }
////          }
////    
////    return 0;
////}
//#include<stdio.h>
//int main(void) {
//    int number, times, guesstimes = 0;
//
//    scanf("%d %d", &number, &times);
//
//    int guess;
//
//    while (1) {
//        scanf("%d", &guess);
//        guesstimes++;
//        if ((guesstimes > times) || (guess < 0 && guesstimes <= times)) {
//            printf("Game Over\n");
//
//            return 0;
//        }
//        if (guess > number) {
//            printf("Too big\n");
//        }
//        if (guess < number) {
//            printf("Too small\n");
//        }
//        if (guess == number) {
//            if (guesstimes == 1) {
//                printf("Bingo!\n");
//            }
//            else if (guesstimes <= 3) {
//                printf("Lucky You!\n");
//            }
//            else {
//                printf("Good Guess!\n");
//            }
//
//            return 0;
//        }
//    }
//
//}

////#include<stdio.h>
////#include<math.h>
////int main() {
////    int a, b, c, d, e;
////    b = 2;
////    c = 0;
////    scanf("%d", &a);
////    for (; a >= b;) {
////        b = pow(b, 2);
////        c++;
////    }
////    printf("%d", c * 3);
////    return 0;
////}
////#include<stdio.h>  
////int main() {
////    int N;
////    scanf("%d", &N);
////    if (N == 1) printf("1");
////    else {
////        int i, count, x1, x2, sum, x;
////        sum = 2, x1 = 1, x2 = 1, x = 0;
////
////        for (i = 2; x2 < N; i++) {
////            x = x1 + x2;
////            x1 = x2;
////            x2 = x;
////        }
////        printf("%d", i);
////    }
////
////    return 0;
////////}
////#include<stdio.h>
////#include<math.h>
////int main() {
////    double a, a1,a2,sum;
////    int c,b, d;
////    scanf("%lf %d", &a, &b);
////    if (b == 0) {
////        printf("0 0"); 
////        return 0;
////    }
////    sum = 0;
////    for (c = 2; c <= b; c++) {
////        sum =sum+ a + a / 2;
////        a = a / 2;
////        if (c == b) {
////            sum = sum + a;
////            a2 = a ;
////        }
////
////    }
////    printf("%.1lf %.1lf", sum,a/2);
////    return 0;
////}
//////#include<stdio.h>
//////int main() {
//////    int a1, e;
//////    double a, b, c, d;
//////    double sum;
//////    a = 2;
//////    b = 1;
//////    sum = 0;
//////    a1 = 1;
//////    scanf("%d", &e);
//////    for (; a1 <= e; a1++) {
//////        d = a / b;
//////        sum += d;
//////        c = a;
//////        a = a + b;
//////        b = c;
//////    }
//////    printf("%.2lf", sum);
//////    return 0;
//////}
////#include<stdio.h>
////int main() {
////    char x = 'A';
////    int b, c;
////    scanf("%d", &b);
////    int b1 = b;
////    int y = 1;
////    int cy = 1;
////    for (c = 1; c <= b; c++) {
////         
////        for (;y<=b;y++) {
////            printf("%c ", x);
////            x++;
////        }
////        cy += 1;
////        y = cy;
////        printf("\n");
////    }
////    return 0;
////}
//////
//////#include<stdio.h>
//////#include<math.h>
//////int main() {
//////    double in;
//////    double now=1;
//////    double sum = 1;
//////    int ju = 1;
//////    scanf("%lf", &in);
//////    for (;1>0;ju++) {
//////        int c = 1;
//////        int d = 1;
//////        c = ju;
//////        now = (now*in) / c;
//////        
//////        sum = sum + now;
//////        
//////        if (0.00001-now>0) {
//////            break;
//////        }
//////    }
//////    printf("%.4lf", sum);
//////    return 0;
//////////}
////#include<stdio.h>
////#include<math.h>
////int main() {
////    int in;
////    scanf("%d",&in);
////    if (in < 10) {
////        printf("%d ", in);
////    }
////    else {
////        int n = 1;
////        int fin = in;
////        for (;;) {
////            if (in < 10) {
////                printf("%d ",in);
////                break;
////            }
////          
////            if (fin / 10 == 0) {
////                printf("%d ",fin);
////                int yu = pow(10, n-1);
////                int yu1 = fin * yu;
////                in = in - yu1;
////                fin = in;
////                n = 1;
////            }
////            else {
////                fin = fin / 10;
////                n++;
////            }
////
////        }
////
////    }
//////    return 0;
//////}
//#include<stdio.h>
//int main() {
//    int a, b, c, in;
//    scanf("%d", &in);
//    for (a = 1; a <= in; a++) {
//        for (b = 1; b <= a; b++) {
//            printf("%d*%d=%d   ", b, a, b * a);
//        }
//        printf("\n");
//    }
//}
////////#include<stdio.h>
////////int main() {
////////    int min, max;
////////    scanf("%d %d", &min, &max);
////////    int fa = min;
////////    int sum = 0;
////////    int count = 0;
////////    for (; fa < max; fa++) {
////////        int nb = 1;
////////        sum = 0;
////////        for (; nb < fa; nb++) {
////////            if (fa % nb == 0) {
////////                sum += nb;
////////            }
////////        }if (sum == fa) {
////////            count++;
////////            printf("%d = 1", sum);
////////            int tired = 2;
////////            for (; tired < sum;tired++) {
////////                if (sum % tired == 0) {
////////                    printf(" + %d", tired);
////////                }
////////
////////
////////
////////            }
////////            
////////            printf("\n");
////////            
////////
////////
////////        }
////////        
////////    }
////////    if (count == 0) {
////////        printf("None");
////////    }
////////    return 0;
////////}
//////#include<stdio.h>
//////int main() {
//////	int in;
//////	scanf("%d", &in);
//////	int a, b, c, d;
//////	int sum;
//////	
//////	for (a=50;a==0;a++) {
//////		for(b=)
//////	}
//////////}
////#include <stdio.h>
////
////int narcissistic(int number);
////void PrintN(int m, int n);
////
////int main()
////{
////    int m, n;
////
////    scanf("%d %d", &m, &n);
////    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
////    PrintN(m, n);
////    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
//// 
////
////    return 0;
////}
////int narcissistic(int number) {
////    int n = number;
////    int re = 1;
////    int re1;
////    int code;
////    
////    for (; number / 10 != 0; re++) {
////        number /= 10;
////    }
////    number = n;
////    for (; number != 0;) {
////        code = number % 10;
////        number /= 10;
////        int ja = 1;
////        int my = 1;
////        for (;my<=re;my++) {
////            ja *= code;
////        }
////        n = n - ja;
////        if (n == 0) {
////            return 1;
////        }
////    }
////    return 0;
////}
////void PrintN(int m, int n) {
////     m = m + 1;
////    for (; m < n;m++) {
////        int number = m;
////        int n1 = number;
////        int re = 1;
////        int re1;
////        int code;
////        int sum = 0;
////        
////
////        for (; number / 10 != 0; re++) {
////            number /= 10;
////            
////        }
////        number = n1;
////        int nb = 0;
////        for (nb=0; number != 0;) {
////            code = number % 10;
////            number /= 10;
////            int ja = 1;
////            int my = 1;
////            
////            for (; my <= re; my++) {
////                ja *= code;
////                
////            }
////            nb++;
////            n1 = n1 - ja;
////            sum += ja;
////            if (n1 == 0&&nb==re) {
////                printf("%d\n", sum);
////            }
////        }
////    }
////  
////}
//////
//////#include <stdio.h>
//////#include <math.h>
//////
//////int search(int n);
//////
//////int main()
//////{
//////    int number;
//////
//////    scanf("%d", &number);
//////    printf("count=%d\n", search(number));
//////
//////    return 0;
//////}
//////int search(int n) {
//////    int a, b, c1,c2,c3;
//////    int c = 1;
//////    int code1 = 11;
//////    int co = n;
//////    b = 101;
//////    if (n <144) {
//////        return 0;
//////    }
//////    
//////    for (;b<=co;) {
//////        code1++;
//////        b = code1*code1;
//////        c1 = b % 10;
//////        c2 = (b / 10) % 10;
//////        c3 = (b / 100);
//////        
//////        if (c1 == c3 || c2 == c3 || c1 == c2) {
//////            c++;
////// }
//////    }
//////    return c;
//////    
//////}
////
////#include <stdio.h>
////
////int gcd(int x, int y);
////
////int main()
////{
////    int x, y;
////
////    scanf("%d %d", &x, &y);
////    printf("%d\n", gcd(x, y));
////
////    return 0;
////}
////int gcd(int x, int y) {
////    int a = 2;
////    int co;
////    int re;
////    if (x > y) {
////        co = x;
////        x = y;
////        y = co;
////    }
////
////    for (; a <= x; a++) {
////        if (x % a == 0 && y % a == 0) {
////            re = a;
////        }
////    }
////    return re;
////}
////#include <stdio.h>
////#include <math.h>
////
////double LogA(double a, double x);
////
////int main()
////{
////    double p, q, r;
////    scanf("%lg%lg", &p, &q);
////    r = LogA(p, q);
////    printf("%g\n", r);
////    return 0;
////}
////double LogA(double a, double x) {
////    double z;
////
////    z = log(x) / log(a);
////    return z;
////}
//////#include <stdio.h>
//////#include <math.h>
//////
//////double LogA(double base, double power);
//////
//////int main()
//////{
//////    double rate;
//////    int year;
//////
//////    scanf("%lg", &rate);
//////
//////    __________
//////
//////        printf("%d\n", year);
//////    return 0;
//////}
//////
//////double LogA(double base, double power)
//////{
//////    double lilu = 1;
//////    lilu += base;
//////}
////
////
////#include <stdio.h>
////#include <math.h>
////
////double LogA(double base, double power);
////
////int main()
////{
////    double rate;
////    int year;
////
////    scanf("%lg", &rate);
////    year =  LogA( rate, 2.0);
////    
////
////        printf("%d\n", year);
////    return 0;
////}
////
////
////double LogA(double a, double x) {
////    double y = 1, b;
////    y += 0.01 * a;
////    double z;
////    z = log(x) / log(y);
////    return z;
////}
////double LogA(double a, double x) {
////    double z;
////
////    z = log(x) / log(a);
////    return z;
////////}
////#include <stdio.h>
////#include <math.h>
////
////double LogA(double base, double power);
////
////int main()
////{
////    double rate;
////    int year;
////
////    scanf("%lg", &rate);
////    double y = 1;
////    y += 0.01 * rate;
////    year = LogA(y, 2.0)+1;
////
////
////        printf("%d\n", year);
////    return 0;
////}
////
////double LogA(double a, double x) {
////    double z;
////
////    z = log(x) / log(a);
////    return z;
////////}
//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////char Decode(char secret, int key);
//////
//////int main()
//////{
//////    char x, y;
//////    int k;
//////    scanf("%c%d", &x, &k);
//////    y = Decode(x, k);
//////    printf("%c\n", y);
//////    return 0;
//////}
//////
///////* 你提交的代码将被嵌在这里 */
//////char Decode(char secret, int key) {
//////    secret = secret-(key + 26) % 26 ;
//////
//////    return secret;
//////
//////}
////#include <stdio.h>
////#include <math.h>
////
////int prime(int p);
////int PrimeSum(int m, int n);
////
////int main()
////{
////    int m, n, p;
////
////    scanf("%d %d", &m, &n);  
////    printf("Sum of ( ");
////
////    printf(") = %d\n", PrimeSum(m, n));
////
////    return 0;
////}
////
////
////int PrimeSum(int m, int n) {
////     int a,  d;
////    int sum = 0;
////    
////    
////    for (;m<=n;m++) {
////        int b = 2;
////        if (m < 2) {
////            continue;
////
////        }
////        int co = 1;
////        int ok = m;
////        if (m == 2) {
////            sum += 2;
////            co = 0;
////        }
////        for (;b<m;b++) {
////            if (m % b == 0) {
////                ok = 0;
////                co = 0;
////            }
////          
////
////        }
////        if(co==1)
////        sum += ok;
////
////    }
////    return sum;
////}
////#include<stdio.h>
////int main() {
////	double co;
////	double fenzi=1;
////	double fenmu=1;
////	scanf("%le", &co);
////	int a=1, b=2, c, d;
////	double sum = 1;
////
////	for (; 1;) {
////
////		for (; b <= a; b++) {
////			fenzi *= (b - 1);
////			fenmu *= (2 * b - 1);
////		
////			if (b == a) {
////				double nb = fenzi / fenmu;
////				sum += fenzi / fenmu;
////				if (fenzi / fenmu  < co) {
////					printf("%.5lf",2*sum);
////					return 0;
////				}
////			}
////			}
////		a++;
////	}
////}
//
//#include<stdio.h>
//int main() {
//	double co;
//	double fenzi = 1;
//	double fenmu = 1;
//	scanf("%le", &co);
//	int a = 1, b = 2, c, d;
//	double sum = 1;
//	if(co==0){
//			   printf("PI = 2");
//					   return 0;
//	}
//	for (; 1;) {
//
//
//		for (; b <= a; b++) {
//			fenzi *= (b - 1);
//			fenmu *= (2 * b - 1);
//
//			if (b == a) {
//				double nb = fenzi / fenmu;
//				sum += fenzi / fenmu;
//				if (fenzi / fenmu < co) {
//					printf("PI = %.5lf", 2 * sum);
//					return 0;
//				}
//			}
//		}
//		a++;
//	}
////}
//#include<stdio.h>
//int main() {
//    int a = 0;
//    char b;
//    scanf("%c", &b);
//    if (b == ' ') {
//        a--;
//    }
//    do {
//        scanf("%c", &b);
//        if (b == ' ') {
//            a++;
//            for (; 1;) {
//                scanf("%c", &b);
//                if (b != ' ')
//                    break;
//            }
//        }
//        if (b == '\n') {
//            break;
//        }
//    } while (1);
//    printf("%d", a);
//    return 0;
//}
//////#include<stdio.h>
//////int main() {
//////	int a, b, c;
//////	char x, y, z;
//////	a = 0;
//////	for (; 1;) {
//////		scanf("%c", &x);
//////		if (x != ' '&&x!='\n') {
//////			a++;
//////			for (; 1;) {
//////				scanf("%c", &x);
//////				if (x == ' ') {
//////					break;
//////				}
//////				if (x == '\n') {
//////					printf("%d", a);
//////					return 0;
//////				}
//////			}
//////		}
//////		if (x == '\n') {
//////			printf("%d", a);
//////			return 0;
//////		}
//////	}
//////}
////#include<stdio.h>
////int main() {
////	int a, sum, d;
////	char c;
////	scanf("%d", &a);
////	sum = 0;
////	sum += a;
////	for (; 1;) {
////		scanf("%c", &c);
////		switch (c) {
////		case '+':
////			scanf("%d", &a);
////			sum += a;
////			break;
////		case '-':
////			scanf("%d", &a);
////			sum -= a;
////			break;
////		case '*':
////			scanf("%d", &a);
////			sum = (sum * 1.0) * a;
////			break;
////		case '/':
////			scanf("%d", &a);
////			if (a == 0) {
////				printf("ERROR");
////				return 0;
////			}
////			sum = sum * 1.0 / a;
////			break;
////		case '=':
////			printf("%d", sum);
////			return 0;
////		default:
////			printf("ERROR");
////			return 0;
////		}
////	}
////
////}
////#include<stdio.h>
////int main() {
////	int a, b, c, d;
////	scanf("%d %d", &a, &b);
////
////	
////	for (c=1;c<=a;c++)
////	{
////		int now;
////		scanf("%d", &now);
////		if (now == b) {
////			printf("%d", c -1);
////			return 0;
////		}
////		
////	} printf("Not Found");
////	return 0;
////
////}
//////#include<stdio.h>
//////int main() {
//////	int a, b, c;
//////	scanf("%d", &a);
//////	int re[19];
//////	for (b = 0; b < a; b++) {
//////		scanf("%d", &c);
//////		re[b] = { c };
//////		
//////	}
//////	int re0[19];
//////	int num = 0;
//////	for (b =a-1; b >=0; b--) {
//////		re0[num] = re[b];
//////			num++;
//////	}
//////	printf("%d", re0[0]);
//////	for (b = 1; b < a; b++) {
//////		
//////		printf(" %d", re0[b]);
//////	}
//////	return 0;
//////}
//////
//////#include<stdio.h>
//////int main()
//////{
//////	int i, index, k, n, temp;
//////	int a[10];
//////	scanf("%d", &n);
//////	for (i = 0; i < n; i++)
//////		scanf("%d", &a[i]);
//////	for (k = 0; k < n - 1; k++) {
//////		index = k;
//////		for (i = k + 1; i < n; i++)
//////			if (a[i] > a[index])
//////				index = i;
//////		temp = a[index];
//////		a[index] = a[k];
//////		a[k] = temp;
//////	}
//////	printf("%d", a[0]);
//////	for (i = 1; i < n; i++)
//////		printf(" %d", a[i]);
//////
//////	return 0;
//////////// }
//////#include<stdio.h>
//////int main() {
//////    int a[9];
//////    int b;
//////    scanf("%d", &b);
//////    int c = 0;
//////   for (; c < b; c++) {
//////        scanf("%d",&a[c]);
//////    }
//////    int d = b-1;
//////    int now = b;
//////    for (c = 0; c < b; c++) {
//////        d = b - 1;
//////        for (;; d--) {
//////            if (a[c] < a[d]) {
//////                int cun = 0;
//////                cun = a[c];
//////                a[c] = a[d];
//////                a[d] = cun;
//////              
//////            }
//////            if (c==d) {
//////                break;
//////            }
//////        }
//////
//////
//////    }
//////    int co = 1;
//////    printf("%d", a[0]);
//////    for (; co < now; co++)
//////    {
//////        printf(" %d",a[co]);
//////    }
//////    return 0;
//////}


#include<stdio.h>
int main() {
    int a[9];
    int b;
    scanf("%d", &b);
    int c = 0;
    int jiluax=0;
    int jiluin=0;
    for (; c < b; c++) {
        scanf("%d", &a[c]);
    }
    int c1;
    int min=99;
    int max=0;
    
    for (c1=0; c1<c;c1++) {
        if (max < a[c1]) {
            max = a[c1];
            jiluax = c1;
        }
        if (min > a[c1]) {
            min = a[c1];
            jiluin = c1;
        }

}
    int now = b;
    int m1, m2;
    m1 = a[0];
        m2 = a[b - 1];
        a[0] = min;
        a[b - 1] = max;

    a[jiluax] = m2;
    a[jiluin] = m1;

    int co = 1;
    printf("%d", a[0]);
    for (; co < now; co++)
    {
        printf(" %d", a[co]);
    }
    return 0;
}
