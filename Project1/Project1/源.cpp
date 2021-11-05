#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	int any = strlen("abc");
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", any);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", "\'");
	printf("\a\a\a\a\a");
	printf("%d",100);
	return 0;
}