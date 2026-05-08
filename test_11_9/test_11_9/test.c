#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//关机程序 
//shutdown -s -t
//-a 取消关机

//system是一个函数 用来执行命令

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:	
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) {//两个字符串比较内容不能用==
//		system("shutdown -a");
//		printf("关机被取消");
//	}
//	else 
//	{
//		goto again;
//	
//	}
//	return 0;
//}


//rand 伪随机


//int main()
//{
//	int rand();
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}


//srand 初始随机数

//int main()
//{
//	srand(2);
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//time 返回当前的日历时间 
//int main()
//{
//	srand((unsigned int)time(NULL));//程序起来后 只需要设置一次就行
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));//程序起来后 只需要设置一次就行
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	return 0;
//}

//生成a到b的随机数 a+rand()%(b-a+1)

//封装一个函数
void menu()
{
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}
void game()
{
	int r = rand() % 100 + 1;
	int g = 0;
	while (1) {
		printf("请猜数字\n");
		scanf("%d", &g);
		if (g < r) {
			printf("猜小了");
		}
		else if (g > r) {
			printf("猜大了");
		}
		else {
			printf("恭喜你猜对了，数字是：%d\n", r);

			break;
		}
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while(input);
	
	return 0;
}