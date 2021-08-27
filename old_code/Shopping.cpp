#include <stdio.h>
int main()
{int pride=0;
int bill=0;
printf ("请输入金额：");
scanf("%d",&pride);
printf("请输入票面：");
scanf("%d",&bill);
if (bill>pride){
	printf("购买成功\n");
	printf("找你%d",bill-pride); 
}else{printf("您的钱不够。"); 
}
}
