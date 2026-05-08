#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//加减乘除
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = 3 * num2;
//	printf("%d\n", r);
//	return 0             ;
//}

//int main()
//{
//	int r = 6 / 4; // 1.5 除号两端是整数执行整数除法
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	float r = 6.0 / 4;//有一个浮点数 浮点除法
//	printf("%f\n", r);
//	
//	return 0;
//}

//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d\n", score);
//
//	return 0;
//}

//int main()
//{
//	int r = 6 % 4;
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int n = 0;//初始化
//	n = 10;//赋值 赋值操作符
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//连续赋值，从右往左赋值
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*a = a + 3;*/
//	//a -= 3;
//	/*a *= 3;*/
//	a /= 3;
//	printf("%d\n", a);
//	return 0;
//}

//为什么变量要初始化？
//一个局部变量不初始化，值是随机的
//一个全局变量不初始化，值会默认初始化为0 
//int main()
//{
//	int a;
//	printf("%d\n,r");
//	return 0;
//
//
//}

//int main()
//{
//	int a = 10;
//	//a = a - 1;
//	//a -= 1;
//	//a--;
//	--a;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a--;//后置--：先使用再减一
//	int b = --a;//前置--；先减一再使用
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	//int b =a++;//后置++；先使用再加一
//	int b = ++a;//前置++，先加一再使用
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("hello\nworld\n");
//	getchar();//读取一个字符
//	return 0;
//}


//int main()
//{
//	int ch = getchar();//读取一个字符
//	/*printf("%c\n", ch);*/
//	putchar(ch);//把ch打印在屏幕上
//	return 0;
//}

//占位符
//int main() 
//{
//	printf("there are %d apples\n", 3);
//	return 0;
//}

//int main()
//{
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n", "1");
//	return 0;
//}

//int main()
//{
//	printf("%s says it is %d o'clock", "zhangsan", 3);
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	printf("%d\n", num);
//	unsigned int num2 = 20;
//	printf("%u\n", num2);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 123);
//	printf("%-5d", 123); //左对齐
//	printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	//printf输出小数，小数点后默认打印6位
//	printf("%f\n", 123.45);
//	printf("%12f\n", 123.45);
//	return 0;
//}


//int main()
//{
//	printf("%+d\n", 12);//加一个+输出带着正负号
//	printf("%+d\n", -20);
//	return 0;
//
//}


//int main()
//{
//	printf("%f\n",123.4567);
//	printf("%.2f\n",123.4567); //小数点后保留两位
//	return 0;
//}


//int main()
//{
//	printf("%10.2f\n",123.4567);//总宽度加保留位数
//	return 0;
//}


//int main()
//{
//	printf("%*.*f\n", 10, 2, 123.4567);
//	return 0;
//
//}


//int main()
//{
//	printf("%.5s\n", "hello world");//输出一部分字符串
//	return 0;
//
//}


//int main()
//{
//	int score = 0;
//	printf("请输入成绩");
//	scanf("%d", &score);//& -取地址操作符
//	printf("成绩是%d\n", score);
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	score = 1;
//	printf("%d\n", score);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0;
//	float y = 0;
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%f\n", x);
//	printf("%f\n", y);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	double y = 0.0;
//	scanf("%d", &x);
//	printf("%d\n", x);
//	scanf("%lf", &y);
//	printf("%lf\n", y);
//	return 0;
//}

//scanf 返回值是一个整数int
//未读取到匹配信息则为0 读取错误或文件末尾EOF 
//EOF end of file 文件结束标志

//EOF
int main()
{
	int a = 0;
	int b = 0;
	float c = 0.0f;
	int r =scanf("%d%d%f", &a, &b, &c);
	
	printf("%d", r);
	return 0;
}