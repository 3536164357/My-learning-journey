#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//switch 语句

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("余数是0\n");
//	else if (num % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)//表达式结果为整型 字符类型
//	{
//	case 0://也是整型
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 3;
//	while (n)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	
//	while (n <= 10) {
//		printf("%d\n", n);
//		n++;
//		continue;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n > 0) {
//		printf("%d ", n % 10);
//		n = n / 10;
//
//		
//	}
//	
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++) {
//		if(n%3==0)
//			printf("%d ", n);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = 0;
//	
//	for (b = 1; b <= 9;b++ ) {
//		c = a * b;
//		printf("%d*%d=%d\n", a, b, c);
//		if (b == 9) {
//			++a; 
//			b = a-1;
//			
//				
//		}
//		
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//for 循环
//1初始化 2判断 3调整 

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++){
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 100; n++) {
//		if (n % 3 == 0)
//			sum += n;
//			
//		continue;
//		
//	}
//	printf("%d ", sum);
//	return 0;
//}


//do while循环 循环体至少被执行一次

//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	unsigned int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	do {
//		i++;
//		n /= 10;
//	} while (n);
//	printf("%d", i);
//	return 0;
//}


//break 和 continue

//
//int main()
//{
//	int n = 0;
//	for (n = 100; n <= 200; n++) {
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= n - 1; j++) {
//			if (n % j == 0){
//				flag = 0;
//				break;
//			}
//				
//			
//		
//		}
//		if (flag == 1)
//			printf("%d ", n);
//	}
//		
//	return 0;
//}


/*int main() {
	printf("hehe\n");
	goto next;
	printf("haha\n");
next:
	printf("heihei\n");
	return 0;

}*/

//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//}


//int main()
//{
//	double n = 1;
//	int m = 0;
//	double sum = 0;
//	for (m = 1; m <= 100; m++) {
//		if (m % 2 == 0)
//			sum = sum - n / m;
//		else
//			sum = sum + n / m;
//
//	}
//	printf("%.6lf", sum);
//	return 0;
//
//}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++) {
		if (y % 4 == 0 && y%100!=0)
			printf("%d ", y);
	}
	return 0;
}