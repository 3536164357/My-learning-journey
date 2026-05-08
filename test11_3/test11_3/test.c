#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//scanf double %lf long double %Lf
//%c 不忽略起首空白 符 返回当前第一个字符
//%s 字符串


//int main()
//{
//	char arr[20];//数组
//	scanf("%s", arr);//arr没取地址 因为数组名就是地址
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr[5];//数组
//	scanf("%[^\n]4s", arr);
//	/*scanf("%4s", arr);*///4s表示最多读取4个字符，剩下一个留给\0
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int year;
//	int month;
//	int day;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);//%*忽略读取到的字符串
//	printf("%d-%d-%d", year, month, day);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//		printf("%d 是奇数\n", n);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//		printf("%d是奇数\n", n);
//	else
//		printf("%d是偶数\n", n);
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("成年\n");
//		printf("可以谈恋爱");
//	}
//	else {
//		printf("未成年\n");
//		printf("不能谈恋爱");
//	}
//	return 0;
//
//}


//嵌套if

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("是0\n");
//	else if (num < 0)
//		printf("是负数\n");
//	else
//		printf("是正数\n");
//	return 0;
//
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0) {
//		if (num % 2 == 1)
//			printf("奇数\n");
//		else
//			printf("偶数\n");
//	}
//	else
//		printf("非整数\n");
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//	else if (age <= 80)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}


//悬空else

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else//与离他最近的if匹配
//			printf("haha\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//如果a在90到100之间，优秀
//	if (a >= 90 && a <= 100)//&& 并集
//		printf("优秀\n");
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//		printf("青年\n");
//	return 0;
//}


//条件操作符 三目操作符
//exp1 ? exp2 : exp3\
// 真     真     假
// 假     假     真


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a,&b);
//	m = (a > b ? a : b);
//	printf("%d\n", m);
//	
//	return 0;
//}


//逻辑操作符: && || !
//&&并集 ||交集  ! 非门

//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)
//		printf("呵呵\n");
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天\n");
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("冬天\n");
//	return 0;
//
//}


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("闰年\n");
//	else if (year % 400 == 0)
//		printf("闰年\n");
//	else
//		printf("非闰年\n");
//	return 0;
//}


/*int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
	return 0;
}*/


int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ || ++b || d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
	return 0;
}