#define _CRT_SECURE_NO_WARNINGS 1
//c语言代码中一定有main函数 主函数
//printf是一个库函数 专门用来打印数据
//std - 标准 standard
//i - input
//o - output
#include<stdio.h>
//C语言规定
//main函数是程序的入口
//main函数有且仅有一个
//标准的主函数写法
//int main()
//{
//	printf("hehe\n");
////return 0 约定俗成的	
//	return 0;
//}
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	
//	return 0;
//}

//计算机中的单位
//bit - 比特位
//byte - 字节
//kb
//mb
//gb
//tb
//pb
//C语言规定： sizeof(long)>=sizeof(int)


//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0; 
//}

//变量与常量概念
//变量分为：
//局部变量 - {}内部定义的变量
//全局变量 - {}外部定义的变量
//int b = 20;//全局变量

//int main()
//{
//	/*short age = 20;
//	int height = 180;
//	float weight = 88.5;*/
//	int a = 10;//局部变量
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("a=%d\n",a);//当全局变量和局部变量名字相同情况下 局部优先
//	return 0;
//}

//建议不要将全局和局部变量的名字写成一样的


//写一个代码，计算两个整数的和
//scanf 是一个输入函数
//printf  是一个输出函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}


//变量的作用域
// 1.局部变量
// 局部变量的作用域是变量所在的局部范围
// 2.全局变量
// 全局变量的作用域是整个工程
//变量生命周期

//声明来自外部的符号
//extern int a;
//int main()
//{
//	int a = 10;
//	{
//		//int a = 10;
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//int main()
//{
//	//\t - tab 8
//	printf("c:\\test\\test.c");
//	return 0;
//}      

//int main()
//{
//	printf("\a");
//	return 0;
//}


//int main()
//{
//	printf("xxxx\b\by");
//	getchar();
//	return 0;
//}

//int main()
//{
//	printf("abc\nsjk\nsaujw");
//	return 0;
//}


//int main()
//{
//	int len = strlen("c:\test\098\abc\test.c");
//	printf( "%d\n", len);
//	return 0;
//
//}

//int main()
//{
//	;//空语句
//	printf("hehe");//表达式语句
//	return 0;
//}

//#include <stdbool.h>
//int main()
//{
//	/*_Bool islike = false;*/
//	bool islike = false;
//	if (islike)
//		printf("I like C\n");
//	else
//		printf("I don't like C\n");
//	return 0;
//}

//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));
//	printf("s= %zd\n", s);
//}
//size_t 用%zd 打印

//
//int main()
//{
//	int age = 10;//初始化
//	float score = 85.5f;
//	double num = 123.45;
//	
//	return 0;
//}

