#include <stdio.h>
int main()
{const double RATE=8.25;
const int STANDARD=40;
double pay=0.0;
int hours=0;

printf("�����빤����ʱ��:");
scanf("%d",&hours);
if(hours>STANDARD){pay=RATE*STANDARD+(hours-STANDARD)*1.5*RATE;
}printf("���Ĺ����ǣ�%f",pay);
}
