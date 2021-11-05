#include <stdio.h>

int main()
{int pride=0;
 int bill=0;
 printf（"请输入金额");
 scanf ("%d",&pride);
 printf ("请输入票面");
 scanf ("%d",&bill);
 if (pride<bill)
 {printf ("应该找您：%d\n",bill-pride,"元钱");
 }else{printf("您的票面不足");
 } 
  
  
  
}
