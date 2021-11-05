
//#include <stdio.h>
//
//int main()
//{
//	printf("HElloWorld!!!");
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
////	printf("%d\n", sizeof(char));
////	printf("%d\n", sizeof(short));
////	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", 10);
//	printf("%s\n", "\100");
//	printf("%s\n", "\101");
//	printf("%c\n", '\101');
//	printf("%c\n", '\x41
#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//char ToRank(double score);
//
//int main()
//{
//    double s;
//    char r;
//    scanf("%lg", &s);
//    r =
//        ToRank(s)
//        ;
//    printf("%c\n", r);
//    return 0;
//}
//
//char ToRank(double score)
//{
//    char rank;
//    if (
//        90 <( int)score < 100
//        )
//    {
//        rank = 'A';
//    }
//    else if (
//        80 < (int)score < 90
//        )
//    {
//        rank = 'B';
//    }
//    else if (
//        70 < (int)score < 80
//        )
//    {
//        rank = 'C';
//    }
//    else if (
//        60 < (int)score < 70
//        )
////    {
////        rank = 'D';
////    }
////    else
////    {
////        rank = 'E';
////    }
////    return rank;
////}
//#include<stdio.h>
//int main() {
//	int a = 2, b = 3, c = 4, d = 0;
//		if (a == 3, 2, 4) {
//			printf("hello world");
//			
//		}
//	return 0;
//}
//

//////////////////////////////////////////////十分的伤心/////////
//////#include <stdio.h>
//////
//////int IsLeapYear(int year);
//////int MaxDayMonth(int year, int month);
//////
//////int main()
//////{
//////	int y, m;
//////	scanf("%d%d", &y, &m);
//////	printf("%d\n", MaxDayMonth(y, m));
//////	return 0;
//////}
//////
//////int MaxDayMonth(int year, int month) {
//////    int haha;
//////    if (year % 4 == 0) {
//////        if (month == 2) {
//////            haha=29;
//////        }
//////        else if (month == 1, 3, 5, 7, 8, 10, 12) {
//////            haha = 31;
//////        }
//////
//////        else { haha = 30; }
//////        }
//////    
//////    if (year % 4 != 0) {
//////        if (month == 2) {
//////            haha = 28;
//////        }
//////        else if (month == 1, 3, 5, 7, 8, 10, 12) {
//////            haha = 31;
//////        }
//////        else {
//////            haha = 30;
//////        }
//////    }
//////    return haha;
//////}
//////
///////* 你提交的代码将被嵌在这里 */

//////////#include <stdio.h>
//////////
//////////int IsLeapYear(int year);
//////////int MaxDayMonth(int year, int month);
//////////int IsValidDate(int year, int month, int day);
//////////
//////////int main()
//////////{
//////////    int y, m, d;
//////////    scanf("%d/%d/%d", &y, &m, &d);
//////////    if (IsValidDate(y, m, d))
//////////    {
//////////        printf("Yes");
//////////    }
//////////    else
//////////    {
//////////        printf("No");
//////////    }
//////////    return 0;
//////////}
//////////
//////////int IsValidDate(int year, int month, int day) {
//////////    int a, b;
//////////    if (year > 0) {
//////////        if
//////////            (0 < month < 13) {
//////////            if (year % 4 == 0&& year %100!=0) {
//////////                if (month == 2) {
//////////                    a = 29;
//////////                }
//////////                else if (month == 1, 3, 5, 7, 8, 10, 12) {
//////////                    a = 31;
//////////                }
//////////
//////////                else { a = 30; }
//////////            }
//////////            if (year % 400 == 0 ) {
//////////                if (month == 2) {
//////////                    a = 29;
//////////                }
//////////                else if (month == 1, 3, 5, 7, 8, 10, 12) {
//////////                    a = 31;
//////////                }
//////////
//////////                else { a = 30; }
//////////            }
//////////
//////////
//////////            if (year % 4 != 0 || (year % 100 == 0&&year%400!=0)) {
//////////                if (month == 2) {
//////////                    a = 28;
//////////                }
//////////                else if (month == 1, 3, 5, 7, 8, 10, 12) {
//////////                    a = 31;
//////////                }
//////////                else {
//////////                    a = 30;
//////////                }
//////////            }
//////////            if (day == a) {
//////////                return year, month, day;
//////////            }
//////////            else return 0;
//////////
//////////    }
//////////        
//////////    }
//////////    
////////// 
//////////}


////#include<stdio.h>
////int main() {
////    int a, b, c, d;
////    double Sum, Average;
////    scanf("%d %d %d %d", &a, &b, &c, &d);
////    Sum = a + b + c + d; Average = Sum / 4;
////    printf("Sum = %.1lf; Average = %.1lf", Sum, Average);
////    return 0;
////}

//#include <stdio.h>
//
//int IsLeapYear(int year);
//int MaxDayMonth(int year, int month);
//
//int main()
//{
//    int y, m,a,b,c=0,d=0,e=0;
//    scanf("%d%d%d", &y, &m,&a);
//    for (b = 1; b < m; b++) {
//
//        d += MaxDayMonth(y, b);
//    }
//
//    e = d + a;
//
//
//
//    printf("%d\n", e);
//    return 0;
//}
//
//int MaxDayMonth(int year, int month) {
//    int haha;
//    if (year % 4 == 0 ) {
//        if (year % 100 != 0) {
//            switch (month)
//            {
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12:
//                haha = 31;
//                break;
//            case 2:
//                haha = 29;
//                break;
//            default:
//                haha = 30;
//                break;
//            }
//        }
//            if (year % 100 == 0) {
//                switch (month)
//                {
//                case 1:
//                case 3:
//                case 5:
//                case 7:
//                case 8:
//                case 10:
//                case 12:
//                    haha = 31;
//                    break;
//                case 2:
//                    haha = 28;
//                    break;
//                default:
//                    haha = 30;
//                    break;
//                }
//
//    } 
//        
//    }
//
//    if (year % 4 != 0 ) {
//        switch (month)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            haha = 31;
//            break;
//        case 2:
//            haha = 28;
//            break;
//        default:
//            haha = 30;
//            break;
//        }
//    }
//    if (year % 100 == 0 ) {
//        switch (month)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            haha = 31;
//            break;
//        case 2:
//            haha = 29;
//            break;
//        default:
//            haha = 30;
//            break;
//        }
//
//            if (year % 400 != 0) {
//                switch (month)
//                {
//                case 1:
//                case 3:
//                case 5:
//                case 7:
//                case 8:
//                case 10:
//                case 12:
//                    haha = 31;
//                    break;
//                case 2:
//                    haha = 28;
//                    break;
//                default:
//                    haha = 30;
//                    break;
//                }
//            }
//        
//            if (year % 400 == 0) {
//                switch (month)
//                {
//                case 1:
//                case 3:
//                case 5:
//                case 7:
//                case 8:
//                case 10:
//                case 12:
//                    haha = 31;
//                    break;
//                case 2:
//                    haha = 29;
//                    break;
//                default:
//                    haha = 30;
//                    break;
//                }
//                    }
//        
//        
//        } return haha;
//    }
//  

//#include<stdio.h>
//int main() {
//    int a, b,c,mid;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a > b) {
//        if (c > a) {
//            mid = a;
//        }
//    }
//    else if (b > a) {
//        if (c > b) {
//            mid = b;
//        }
//    }
//    else if (c > a) {
//        if (b > c) {
//            mid = c;
//        }
//    }
//    printf("%d", mid);
//    return 0;
//}//551380

////#include<stdio.h>
////int main() {
////    double a, b = 0, c, d;
////    scanf("%lf", &c);
////    for (a = 1; a <= c; a +=2) {
////        d = 1.0 / a;
////        b += d;
////    }
////    printf("sum = %.6lf", b);
////    return 0;
////}

////#include <stdio.h>
////int main() {
////    double a, b = 1, d, e, sum = 0;
////    int c = 1;
////    scanf("%lf", &a);
////    for (; c <= a; c++) {
////        e = 1 / b;
////        sum += e;
////        if (c % 2 == 0) {
////            if (b < 0)
////                b = -b;
////            b = b+3;
////            
////        }
////        else {
////            if (b > 0)
////                b = -b;
////            b = b - 3;
////           
////        }
////        
////    }
////    printf("sum = %.3lf", sum);
////    return 0;
////////}
////
////#include<stdio.h>
////#include<math.h>
////int main() {
////    double a, b, c, d, e, f, m, n, sum = 0;
////    scanf("%lf %lf", &m, &n);
////    for (; m <= n; m++) {
////        a = m * m;
////        b = 1 / m;
////        sum = sum + a + b;
////    }
////    printf("sum = %.6lf", sum);
////    return 0;
////////}
////#include<stdio.h>
////int main() {
////    int a, b, c, d, e, f, g;
////    scanf("%d %d %d", &a, &b, &c);
////    d = a + c;
////    e = b + c;
////    scanf("%d %d", &f, &g);
////    if (a < f < d & b < g < e) {
////        printf("yes\n");
////    }
////    else {
////        printf("no\n");
////    }
////    return 0;
////}
//////
//////#include<stdio.h>
//////#include<math.h>
//////
//////int main() {
//////    int a, b, c;
//////    double d, e, f;
//////    scanf("%d %d %d", &a, &b, &c);
//////    d = a + b + c;
//////    e = d / 2.0;
//////    f = sqrt(e * (e - a) * (e - b) * (e - c));
//////    if (a + b < c || a + c < b || b + c < a) {
//////        printf("These sides do not correspond to a valid triangle");
//////    }
//////    else {
//////        printf("area = %.2lf; perimeter = %.2lf", f, d);
//////    }
//////    return 0;
//////}

//////#include<stdio.h>
//////int main() {
//////	int a, b, c, d, e;
//////	a = 1;
//////	b = 1;
//////
//////	for (a = 1; a <= 9; a++) {
//////		for (b = 1; b <= a; b++) {
//////			printf("%d*%d=%d ", a, b, a * b);
//////
//////		}
//////		printf("\n");
//////
//////	}
////////////}
//////#include <stdio.h>
//////
//////int IsLeapYear(int year);
//////int MaxDayMonth(int year, int month);
//////
//////int main()
//////{
//////    int y, m, a, b, c = 0, d = 0, e = 0;
//////    scanf("%d%d", &y, &m);
//////    e = MaxDayMonth(y, m);
//////    printf("%d\n", e);
//////    return 0;
//////}
//////
//////int MaxDayMonth(int year, int month) {
//////    int haha;
//////    if (year % 4 == 0) {
//////        if (year % 100 != 0) {
//////            switch (month)
//////            {
//////            case 1:
//////            case 3:
//////            case 5:
//////            case 7:
//////            case 8:
//////            case 10:
//////            case 12:
//////                haha = 31;
//////                break;
//////            case 2:
//////                haha = 29;
//////                break;
//////            default:
//////                haha = 30;
//////                break;
//////            }
//////        }
//////        if (year % 100 == 0) {
//////            switch (month)
//////            {
//////            case 1:
//////            case 3:
//////            case 5:
//////            case 7:
//////            case 8:
//////            case 10:
//////            case 12:
//////                haha = 31;
//////                break;
//////            case 2:
//////                haha = 28;
//////                break;
//////            default:
//////                haha = 30;
//////                break;
//////            }
//////
//////        }
//////
//////    }
//////
//////    if (year % 4 != 0) {
//////        switch (month)
//////        {
//////        case 1:
//////        case 3:
//////        case 5:
//////        case 7:
//////        case 8:
//////        case 10:
//////        case 12:
//////            haha = 31;
//////            break;
//////        case 2:
//////            haha = 28;
//////            break;
//////        default:
//////            haha = 30;
//////            break;
//////        }
//////    }
//////    if (year % 100 == 0) {
//////        switch (month)
//////        {
//////        case 1:
//////        case 3:
//////        case 5:
//////        case 7:
//////        case 8:
//////        case 10:
//////        case 12:
//////            haha = 31;
//////            break;
//////        case 2:
//////            haha = 29;
//////            break;
//////        default:
//////            haha = 30;
//////            break;
//////        }
//////
//////        if (year % 400 != 0) {
//////            switch (month)
//////            {
//////            case 1:
//////            case 3:
//////            case 5:
//////            case 7:
//////            case 8:
//////            case 10:
//////            case 12:
//////                haha = 31;
//////                break;
//////            case 2:
//////                haha = 28;
//////                break;
//////            default:
//////                haha = 30;
//////                break;
//////            }
//////        }
//////
//////        if (year % 400 == 0) {
//////            switch (month)
//////            {
//////            case 1:
//////            case 3:
//////            case 5:
//////            case 7:
//////            case 8:
//////            case 10:
//////            case 12:
//////                haha = 31;
//////                break;
//////            case 2:
//////                haha = 29;
//////                break;
//////            default:
//////                haha = 30;
//////                break;
//////            }
//////        }
//////        
//////
//////    }if (year < 0 || month>12 || month < 0) {
//////        haha = 0;
//////    }
//////    return haha;
//////}
//////
//////#include <stdio.h>
//////
//////char ToRank(double score);
//////
//////int main()
//////{
//////    double s;
//////    char r;
//////    scanf("%lg", &s);
//////    r =
//////        ToRank(s)
//////        ;
//////    printf("%c\n", r);
//////    return 0;
//////}
//////
//////char ToRank(double score)
//////{
//////    char rank;
//////    if (
//////        90 <= score && score <= 100
//////        )
//////    {
//////        rank = 'A';
//////    }
//////    else if (
//////        80 <= score && score < 90
//////        )
//////    {
//////        rank = 'B';
//////    }
//////    else if (
//////        70 <= score && score < 80
//////        )
//////    {
//////        rank = 'C';
//////    }
//////    else if (
//////        60 <= score && score < 70
//////        )
//////    {
//////        rank = 'D';
//////    }
//////    else
//////    {
//////        rank = 'E';
//////    }
//////    return rank;
//////}
////////#include <stdio.h>
////////int main(void)
////////{
////////    int i; for (i = 1; i <= 4; i++) { //该循环用于自动阅卷，请考生忽略
////////        int a, b, c;
////////        scanf("%d%d%d", &a, &b, &c);
////////        if (
////////            a + b > c && a + c > b && b + c > a
////////            )
////////        {
////////            if (
////////                a == b == c
////////                )
////////                printf("1\n");
////////            else
////////                if (
////////                    a == b || b == c || a == c
////////                    )
////////                    printf("2\n");
//////////////                else
//////////////
//////////////                    printf("3\n");
//////////////
//////////////        }
//////////////        else
//////////////            printf("-1\n");
//////////////
//////////////    } //该循环用于自动阅卷，请考生忽略
//////////////    return 0;
//////////////}
//////#include <stdio.h>
//////int main(void)
//////{
//////    int k;
//////        int y, m, d;  //变量y表示年份，m表示月份，d表示天数
//////        scanf("%d%d", &y, &m);  //输入年份和月份
//////        if (y < 0 || m>12 || m < 0) {
//////            d = 0;
//////        }
//////        else if (
//////            m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12
//////            ) //大月
//////            d = 31;
//////        else if (m == 4 || m == 6 || m == 9 || m == 11) //小月
//////
//////            d = 30;
//////
//////        else if (m == 2)//特别处理2月
//////        {
//////            if (
//////                (m % 4 == 0 && m % 100 != 0) || m % 400 == 0
//////                )  //y是闰年
//////                d = 29;
//////            else  //y不是闰年
//////
//////                d = 28;
//////
//////        }
//////   
//////        printf("%d", d);
//////
//////    return 0;
//////}
//////#include<stdio.h>
//////#include<math.h>
//////double jiji(double x1, double y1,double x2,double y2);
//////int main() {
//////    double x1, x2, x3, y1,y2,y3;
//////    double a1, a2, a3;
//////    double o,o2;
//////    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//////    a1 = jiji(x1, y1, x2, y2);
//////    a2 = jiji(x2, y2, x3, y3);
//////    a3 = jiji(x1, y1, x3, y3);
//////    o = (a1 + a2 + a3) / 2.0;
//////    o2= sqrt(o * (o - a1) * (o - a2) * (o - a3));
//////        if (a1 + a2 > a3 && a1 + a3 > a2 && a2 + a3 > a1) {
//////        printf("L = %.2lf, A = %.2lf", a1 + a2 + a3,o2);
//////    }
//////        else {
//////            printf("Impossible");
//////        }
//////    return 0;
//////}
//////double jiji(double x1, double y1, double x2, double y2) {
//////    double at1,at2,yes;
//////    at1 = pow(x1 -x2 ,2);
//////    at2 = pow(y1 - y2, 2);
//////    yes = pow(at1 + at2, 0.5);
//////    return yes;
//////}


//////
//////#include<stdio.h>
//////#include<math.h>
//////
//////int main() {
//////    int a, b, c;
//////    double d, e, f;
//////    scanf("%d %d %d", &a, &b, &c);
//////    d = a + b + c;
//////    e = d / 2.0;
//////    f = sqrt(e * (e - a) * (e - b) * (e - c));
//////    if (a + b < c && a + c < b && b + c < a) {
//////        
//////////////        printf("area = %.2lf; perimeter = %.2lf\n", f, d);
//////////////    }
//////////////    else {
//////////////        printf("These sides do not correspond to a valid triangle\n");
//////////////    }
//////////////    return 0;
//////////////}
////////#include <stdio.h>
////////
////////int IsLeapYear(int year);
////////int MaxDayMonth(int year, int month);
////////int IsValidDate(int year, int month, int day);
////////
////////int main()
////////{
////////    int y, m, d;
////////    scanf("%d/%d/%d", &y, &m, &d);
////////    if (IsValidDate(y, m, d))
////////    {
////////        printf("Yes");
////////    }
////////    else
////////    {
////////        printf("No");
////////    }
////////    return 0;
////////}
////////
////////
////////int IsValidDate(int year, int month, int day) {
////////    int y, m, d;
////////    y = year;
////////    m = month;
////////    if (y < 0 || m>12 || m < 1) {
////////        return 0;
////////    }
////////    else if (
////////        m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12
////////        ) //大月
////////        d = 31;
////////    else if (m == 4 || m == 6 || m == 9 || m == 11) //小月
////////
////////        d = 30;
////////
////////    else if (m == 2)//特别处理2月
////////    {
////////        if (
////////            (m % 4 == 0 && m % 100 != 0) || m % 400 == 0
////////            )  //y是闰年
////////            d = 29;
////////        else  //y不是闰年
////////
////////            d = 28;
////////
////////    }
////////    if (0 < day <= d) {
////////        return 1;
////////    }
////////    else {
////////        return 0;
////////    }
////////
//////////////
//////////////    
//////////////}
//////#include<stdio.h>
//////#include<math.h>
//////
//////double L(int a, int b, int m, int n) {
//////	double M;
//////	M = 1.0 * sqrt(pow(a - m, 2) + pow(b - n, 2));
//////	return M;
//////}
//////
//////int main()
//////{
//////	int x1, y1, r1, x2, y2, r2;
//////	scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
//////	if (L(x1, y1, x2, y2) > r1 + r2) {
//////		printf("Separated\n");
//////	}
//////	else if (L(x1, y1, x2, y2) == r1 + r2) {
//////		printf("Circumscribed\n");
//////	}
//////	else if (L(x1, y1, x2, y2) < r1 + r2) {
//////		if (L(x1, y1, x2, y2) == abs(r1 - r2)) {
//////			if (L(x1, y1, x2, y2) == 0 && r1 == r2) {
//////				printf("Completely Overlapping\n");
//////			}
//////			else {
//////				printf("Inscribed\n");
//////			}
//////		}
//////		else if (L(x1, y1, x2, y2) < abs(r1 - r2)) {
//////			printf("Contained\n");
//////		}
//////		else {
//////			printf("Intersecte\n");
//////		}
//////	}
//////	return 0;
//////}
////#include <stdio.h>
////int main(void)
////{
////    int i, j, x = 0;
////    for (i = 0; i < 2; i++) {
////        x++;        for (j = 0; j <= 3; j++) {
////            if (j % 2)
////                continue;
////            x++;
////        }
////        x++;
////    }
////    printf("x=%d\n", x);
////    return 0;
////////////}
////////#include <stdio.h>
////////#include <math.h>
////////
////////double TriangleArea(double a, double b, double c);
////////
////////int main()
////////{
////////    double a, b, c, d, e, f, g, s;
////////    scanf("%lg %lg %lg %lg %lg %lg %lg", &a, &b, &c, &d, &e, &f, &g);
////////    double s1, s2, s3;
//////// 
////////    s1 = double TriangleArea(a, f, e);
////////    s2 = double TriangleArea(b, f, g);
////////    s3 = double TriangleArea(c, g, d);
////////    s = s1 + s2 + s3;
////////    printf("%g\n", s);
////////    return 0;
////////}
////////
////////double TriangleArea(double a, double b, double c) {
////////    double d, A, f, s;
////////    d = a + b + c;
////////    s = d / 2;
////////    A = sqrt(s * (s - a) * (s - b) * (s - c));
////////    return A;
////////}
////////
////////#include <stdio.h>
////////
////////double mypow(double x, int n);
////////
////////int main()
////////{
////////    double x;
////////    int n;
////////
////////    scanf("%lf %d", &x, &n);
////////    printf("%f\n", mypow(x, n));
////////
////////    return 0;
////////}
////////
/////////* 你的代码将被嵌在这里 */
////////
////////double mypow(double x, int n) {
////////    int a = 1;
////////    double ok=x;
////////    if (n > 0) {
////////        for (; a < n; a++) {
////////            ok = ok*ok;
////////        }
////////    }
////////    else {
////////        ok = 1;
////////    }
////////    return ok;
////////}

////////#include<stdio.h>
////////int main() {
////////	double x=0.24;
////////	int a = 1;
////////	for (; a < 4;a++)
////////		x = x * 0.24;
////////	return 0
//////#include <stdio.h>
//////
//////double mypow(double x, int n);
//////
//////int main()
//////{
//////    double x;
//////    int n;
//////
//////    scanf("%lf %d", &x, &n);    printf("%f\n", mypow(x, n));
//////
//////    return 0;
//////}
//////
///////* 你的代码将被嵌在这里 */
//////double mypow(double x, int n) 
//////{ double sum;
//////if (n == 1)sum = x; 
//////else if (n == 0)sum = 1;
//////else sum = mypow(x, n - 1) * x; 
//////return sum; }
//////////////#include <stdio.h>
//////////////
//////////////int TotalLeapYear(int year);
//////////////
//////////////int main()
//////////////{
//////////////    int y;
//////////////    scanf("%d", &y);
//////////////    printf("%d\n", TotalLeapYear(y));
//////////////    return 0;
//////////////}
//////////////int TotalLeapYear(int year) {
//////////////    int a, b = 0, c, d;
//////////////    for (a = 1; a <= year; a++) {
//////////////        if (a % 4 == 0 && a% 100 != 0 ) {
//////////////            b++;
//////////////        }
//////////////        else if (a % 400 == 0) {
//////////////            b++;
//////////////        }
//////////////    }
//////////////    return b;
//////////////}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//char Decode(char secret, int key);
//
//int main()
//{
//    char x, y;
//    int k;
//    scanf("%c%d", &x, &k);
//    y = Decode(x, k);
//    printf("%c\n", y);
//    return 0;
//}
//char Decode(char secret, int key) {
//    char a, b, c;
//    b = (secret - 'a' + key+26) % 26 + 'a';
//    return b;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//char Decode(char secret, int key);
//
//int main()
//{
//    char x, y;
//    int k;
//    scanf("%c%d", &x, &k);
//    y = Decode(x, k);
//    printf("%c\n", y);
//    return 0;
//}
//char Decode(char secret, int key) {
//    char a, b, c;
//    b = (secret - 'a' + key+26) % 26 + 'a';
//    return b;
//}
////////
////////#include<stdio.h>
////////int main() {
////////    int a1, a2, b = 1;
////////    scanf("%d", &a2);
////////    double a = 0, c = 1, d = 0;
////////    for (a1 = 1; a1 <= a2; a1++) {
////////        a = (b / c);
////////        
////////        if (b % 2 == 0) {
////////            a = -a;
////////        }
////////        d = d + a;
////////        b = b + 1;
////////        c = c + 2;
////////    }
////////    printf("%d", d);
////////    return 0;
////////}

//////#include<stdio.h>
//////#include<math.h>
//////int main() {
//////    long long int a, b, c, d;
//////    scanf("%lld", &d);
//////    for (a = 0; a <= d; a++) {
//////        c = pow(d, a);
//////        printf("pow(%lld,%lld) = %lld\n", d, a, c);
//////    }
//////    return 0;
//////}
////#include<math.h>
////#include<stdio.h>
////int main() {
////    double a = 0, b, c, d, e;
////    int i = 1, ii;
////    scanf("%d", &i);
////    for (ii = 1; ii <= i; ii++) {
////        a = a + sqrt(ii);
////    }
////    printf("sum = %lf", a);
////    return 0;
////}
//////
//////#include<stdio.h>
//////int main() {
//////    int a, b, c = 0, sum = 0;
//////    scanf("%d", &a);
//////    for (b = 1; b <= a; b++) {
//////        int d = 1;
//////        for (c = 1; c <= b; c++) {
//////            d = d * c;
//////        }
//////        sum = sum + d;
//////    }
////////////    printf("%d", sum);
////////////}
//////
//////
//////#include<stdio.h>
//////double fact(int n);
//////int main() {
//////    int n, m;
//////    double a, b, c, d;
//////    scanf("%d %d", &m, &n);
//////    a = fact(n);
//////    b = fact(m);
//////    c = fact((n - m));
//////    d = a / (b * c);
//////    printf("result = %.lf", d);
//////    return 0;
//////
//////
//////}
//////
//////
//////
//////double fact(int n) {
//////    int a, b = 1, c;
//////    for (a = 1; a <=n; a++) {
//////        b = a * b;
//////    }
//////    return b;
//////}
//////#include<stdio.h>
//////int main() {
//////    int a, b, c;
//////    int d, e, f;
//////    scanf("%d %d %d", &a, &b, &c);
//////    if (a < b && b < c) {
//////        printf("%d->%d->%d", a, b, c);
//////    }
//////    else if (a < c && c < b) {
//////        printf("%d->%d->%d", a, c, b);
//////    }
//////    else if (b < a && a < c) {
//////        printf("%d->%d->%d", b, a, c);
//////    }
//////    else if (b < c && c < a) {
//////        printf("%d->%d->%d", b, c, a);
//////    }
//////    else if (c < a && a < b) {
//////        printf("%d->%d->%d", c, a, b);
//////    }
//////    else if (c < b && b < a) {
//////        printf("%d->%d->%d", c, b, a);
//////    }
//////    return 0;
//////}
//////#include<stdio.h>
//////#include<math.h>
//////int main() {
//////    double a, b, c, s;
//////    scanf("%lf %lf %lf", &a, &b, &c);
//////    s = (a + b + c) / 2;
//////    if (a + b > c && a + c > b && b + c > a) {
//////        prtinf("area = %lf; perimeter = %lf", pow(s * (s - a) * (s - b) * (s - c), 0.5), 2 * s);
//////    }
//////    else {
//////        printf("These sides do not correspond to a valid triangle");
//////    }
//////    return 0;
//////}
////////#include<stdio.h>
////////int main() {
////////    int a, b, c, d;
////////    scanf("%d", &b);
////////    a = b - 2000;
////////    c = a / 4;
////////    if (c > 0 && c < 25) {
////////        int i;
////////            for (i = 2001; i <= b; i++) {
////////
////////                if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
////////
////////                    printf("%d\n", i);
////////                }
////////            }
////////    }
////////    else if (2001 <= b && b <= 2003) {
////////        printf("None");
////////
////////    }
////////    else {
////////        printf("Invalid year!");
////////////    }
////////////}
////
////#include<stdio.h>
////int main() {
////    double a, b;
////    int c;
////    scanf("%lf %lf", &a, &b);
////    c = (a / b - 1) * 100;
////    if (c < 10) {
////        printf("OK");
////    }
////    else if (c >= 10 && c < 50) {
////        printf("Exceed %d%%. Ticket 200", c);
////    }
////    else if (c >= 50)
////        printf("Exceed %d%%. License Revoked", c);
////    return 0;
////}
//////#include<stdio.h>
//////int main() {
//////    int A = 0, B = 0, C = 0, D = 0, E = 0;
//////    int i, p;
//////    int ok;
//////    scanf("%d", &ok);
//////    for (i = 1; i <= ok; i++) {
//////        scanf("%d", &p);
//////        if (p >= 90) {
//////            A++;
//////        }
//////        else if (p >= 80 && p < 90) {
//////            B++;
//////
//////        }
//////        else if (p >= 70 && p < 80) {
//////            C++;
//////        }
//////        else if (p >= 60 && p < 70) {
//////            D++;
//////        }
//////        else {
//////            E++;
//////
//////        }
//////    }
//////    printf("%d %d %d %d %d", A, B, C, D, E);
//////    return 0;
//////}
//////#include<stdio.h>
//////int main() {
//////    int a, b, c, d;
//////    scanf("%d %d", &a, &b);
//////    for (d = 1; d <= b; d++) {
//////        for (c = 1; c <= a; c++) {
//////            printf("*");
//////        }
//////        printf("\n");
//////    }
//////    return 0;
//////}
//////#include<stdio.h>
//////#include<math.h>
//////
//////
//////int main()
//////{
//////    int i, j, k;
//////    scanf("%d", &k);
//////    for (i = 0; i < k; i++)
//////    {
//////        for (j = 0; j < i + 1; j++)
//////            printf(" ");
//////        for (j = 0; j < k - i; j++)
//////            printf("*");
//////        printf("\n");
//////    }
//////    return 0;
//////}
//////#include<stdio.h> 
//////int main() {
//////    int a, b, c, d;
//////    scanf("%d", &a);
//////    for (b = 1; b <= a; b++) {
//////        for (c = 1; c <= a - b; c++) {
//////            printf(" ");
//////        }for (d = 1; d <= 2 * b - 1; d++) {
//////            printf("*");
//////        }
//////
//////    }
//////    return 0;
//////}
////#include<stdio.h>
////int main() {
////    int a, b, c, d;
////    int N, T;
////    double RO;
////    scanf("%d,%d,%lf", &N, &T, &RO);
////    for (a = 1; a <= T; a++) {
////        N = N * RO;
////    }if (N >= 330000000) {
////        printf("MAGA? Bazinga!!");
////    }
////    else {
////        printf("%d", N);
////    }
////    return 0;
//////////}
//////#include<stdio.h>
//////int main() {
//////    int a, b, c, d;
//////    int a1, a2, a3;
//////    scanf("%d %d %d", &a, &b, &c);
//////    a1 = (a - b);
//////    a2 = (c = 1);
//////    if (a1 < a2) {
//////        d = a1;
//////    }
//////    else if (a2 < a1) {
//////        d = a2;
//////    }
//////    else {
//////        d = a1;
//////    }
//////    printf("%d", d);
//////    return 0;
//////////////}
////////#include<stdio.h>
////////int main() {
////////    int a, b, c;
////////    scanf("%d%d%d", &a, &b, &c);
////////    int a1, a2, a3;
////////    a1 = a + b + c;
////////    a2 = (a + b) * c;
////////    a3 = a + b * c;
////////    if (a1 < a2 && a2 < a3) {
////////        printf("%d", a3);
////////    }
////////    else if (a1 < a3 && a3 < a2) {
////////        printf("%d", a2);
////////    }
////////    else if (a2 < a1 && a1 < a3) {
////////        printf("%d", a3);
////////    }
////////    else if (a2 < a3 && a3 < a1) {
////////        printf("%d", a1);
////////
////////    }
////////    else if (a3 < a2 && a2 < a1) {
////////        printf("%d", a1);
////////    }
////////    else {
////////        printf("%d", a2);
////////    }
////////    return 0;
////////}
////#include<stdio.h>
////int main() {
////    int a, b, c, d;
////    int a1, a2, a3, a4;
////    int atm;
////    scanf("%d:%d:%d", &a, &b, &c);
////    scanf("%d:%d:%d", &a1, &a2, &a3);
////    d = a * 60 * 60 + b * 60 + c;
////    a4 = a1 * 60 * 60 + a2 * 60 + a3;
////    atm = 3 * 60 * 60;
////    if ((d + a4) > atm) {
////        printf("NO!");
////    }
////    else {
////        printf("YES! %d", atm - a4 - d);
////    }
////    return 0;
////}
////#include<stdio.h>
////int main() {
////    int a, b, c, d, e;
////    char a1, a2, a3;
////    scanf("%d%c%d=%d", &a, &a1, &b, &c);
////    switch (a1) {
////    case '+':
////        d = a + b;
////        break;
////    case '-':
////        d = a - b
////            break;
////    case '*':
////        d = a * b;
////        break;
////    case '/':
////        d = a / b;
////        break;
////    }if (d == c) {
////        printf("Right!");
////    }
////    else {
////        printf("Wrong!");
////    }
////    return 0;
////////////}
////////#include<stdio.h>
////////int main() {
////////    int a, b, c, d, e;
////////    int ok;
////////    scanf("%d %d", &a, &b);
////////    c = a + b - 1;
////////    d = c / 7;
////////    e = c % 7;
////////    if (d == 0 && e == 6) {
////////        ok = b - 1;
////////    }
////////    else {
////////        ok = b - 2 * d;
////////    }
////////    printf("%d", ok);
////////    return 0;
//////////////}
//////#include<stdio.h>
//////int Gcd(int a, int b) {
//////    int c, d, e;
//////
//////    if (a == 0 && b == 0) {
//////        return 0;  b = c;
//////        } while (c != 1);
//////        return b;
//////    }
//////    else {
//////        do {
//////            c = b % a;
//////            b = a;
//////            a = c;
//////        } while (c != 1);
//////        return a;
//////    };
//////    
//////    int main()
//////    {
//////        int a, b, c;
//////        scanf("%d%d", &a, &b);
//////        c = Gcd(a, b);
//////        printf("%d\n", c);
//////        return 0;
//////    }
//////    }
//////    else if (a > b) {
//////        do {
//////            c = a % b;
//////            a = b;
//////          
//////
//////    int Gcd(int x, int y) {
//////        int d;
//////        if (x < 0) x = -x;
//////        if (y < 0) y = -y;
//////        if (x == 0 && y == 0) d = 1;
//////        else if (y == 0)     d = x;
//////        else if (x % y == 0)  d = y;
//////        else {
//////            int r
//////                while (r = x % y) {
//////                    x = y;
//////                    y = r;
//////                }
////////////            d = y;
////////////        }
////////////        return d;
////////////    }
//////#include <Stdio.h>
//////int Gcd(int x, int y);
//////int main()
//////{
//////	int a, b, c;
//////	scanf("%d%d", &a, &b);
//////	c = Gcd(a, b);
//////	printf("%d\n", c);
//////	return 0;
//////}
//////
//////int Gcd(int x, int y) {
//////	int d;
//////	if (x < 0)x = -x;
//////	if (y < 0)y = -y;
//////	if (x == 0 && y == 0)d = 1;
//////	else if (y == 0) d = x;
//////	else if (x % y == 0) d = y;
//////	else {
//////		int r;
//////		while (r = x % y) {
//////			x = y;
//////			y = r;
//////		}
//////		d = y;
//////	}
//////	return d;
//////}
////#include<stdio.h>
////int main() {
////    int a1 = 1;
////    int b1 = 0, b2 = 0, b3 = 0, b4 = 0;
////    char a;
////    for (; a1 <= 10; a1++) {
////        scanf("%c", &a);
////        if ('A' <= a &&a<='z'||a>='a'&& a <= 'z') {
////            b1++;
////        }
////        else if (a == ' ' || a == '\n') {
////            b2++;
////        }
////        else if (a >= '0' && a  <='9') {
////            b3++;
////        }
////        else {
////            b4++;
////        }
////    }
////    printf("letter = %d, ", b1);
////    printf("blank = %d, ", b2);
////    printf("digit = %d, ", b3);
////    printf("other = %d", b4);
////    return 0;
////
////}
//////#include<stdio.h>
//////int main() {
//////    printf("[1] apple\n");
//////    printf("[2] pear\n");
//////    printf("[3] orange\n");
//////    printf("[4] grape\n");
//////    printf("[0] exit\n");
//////    int a, b = 0, c = 0;
//////    for (a = 1; a <= 5; a++) {
//////        scanf("%d", &b);
//////        if (b == 0)break;
//////        if (b < 0) {
//////            printf("price = 0.00\n");
//////        }
//////        if (b == 1) {
//////            printf("price = 3.00\n");
//////        }
//////        else if (b == 2) {
//////            printf("price = 2.50\n");
//////        }
//////        else if (b == 3) {
//////            printf("price = 4.10\n");
//////        }
//////        else if (b == 4) {
//////            printf("price = 10.20\n");
//////        }
//////    }
//////    return 0;
//////}
/*#include<stdio.h>
int main() {
    int a, b, c, d;
    d = 0;
    int a1, b1;
    c = 2;
    scanf("%d %d", &a, &b);
    a1 = a + 1; b1 = b - 1;
    if (a <= -100 || b >= 100) {
        return 0;
    }
    else {
        for (; a1 <= b1; a1++) {
            if (c == (a1 % 7)) {
                d = d + a1;
            }
        }
        printf("%d", d);
        return 0;
////////    }
////////}*/
////////#include<stdio.h>
////////#include<math.h>
////////int main() {
////////	int n, t, a, d, m;
////////	double b, ro;
////////	scanf("%d %d %lf", &n, &t, &ro);
////////	if (n > 330000000) printf("MAGA? Bazinga!!");
////////	else if (n <= 330000000) {
////////		if (10 <= t && t < 20) {
////////			m = ro / 2.0;
////////			b = n * pow(ro, 10) * pow(m, n - 10);
////////			printf("%.lf", b);
////////		}
////////		else if (t < 10) {
////////			b = n * pow(ro, n);
////////			printf("%.lf", b);
////////		}
////////		else if (n >= 20) {
////////			a = t / 10;
////////			if (a % 2 == 0) {
////////				d = a / 2;
////////				b = n * pow(pow(ro, 10), d) * pow(pow(ro / 2.0, 10), d);
////////			}
////////			else if (a % 2 != 0) {
////////				d = a / 2;
////////				b = n * pow(pow(ro, 10), d) * pow(pow(ro / 2.0, 10), d - 1) * pow(ro, n % 10);
////////			}
////////			printf("%.lf", b);
////////		}
////////	}
////////	return 0;
////////}

#include<stdio.h>
int main() {
    int a, b, c;
    double d;
    double sum;
    scanf("%d", &b);
    c = 1;
    for (a = 1; a <= b; a = a + 3) {
        c++;
        d = 1.0 / a;
        if (c % 2 == 0) {
            d = -d;
        }
        sum += d;
    }
    printf("sum = %d", sum);
    return 0;
}