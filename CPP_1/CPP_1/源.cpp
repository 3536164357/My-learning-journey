#include <cstdio> // printf scanf
#include <iostream>// cin cout
#include <string.h>
#include <string>
using namespace std;
//int main(){
//	cout << "hello,world" << endl; 
//	cout << "hehe" << endl;
//	return 0;
//}

//int main() {
//	int num;
//	cin >> num;
//	cout << num << endl;
//	return 0;
//}

//int main() {
//	bool; //真和假 True 1  False 0 1byte
//	char m ; //char 字符 1byte
//	int n; //整数 
//	float a; // 小数 可表示科学计数法 单精度浮点数 6-7位有效数字 4byte
//	double b; // double float 15-16位有效数字 8 byte
//	long long m; //long long int 更长的整数型 8byte
//	long double c; // 18-19位有效数字  
//	return 0;
//}

//int main() {
//	int a, b = 2, c = b;
//	float d = 1.5, e = 1, f = 1.23;
//	bool g = true, h = false;
//	char j = 'a';
//	long long l = 12345;
//	long double m = 123.45;
//	return 0;
//}

//int main() {
//	int a, b;
//	cin >> a >> b; // cin
//	cout << a + b << endl; // cout
//	return 0;
//}

/*int main() {
	float a, b;
	char c;
	scanf("%f%f", &a, &b);
	scanf("%c", &c);
	printf("%c", c);
	printf("%.2f %f\n", a + b, a * b);//.2f 保留2位小数
	return 0;
}*/

/*int : %d
* char:%c
* float:%f
* double:%lf
* long long %lld
*/

//int main() {
//	cout << 5 % 2 << endl; 
//	cout << -5 % 2 << endl;
//	return 0;
//}

//整数的自加和自减
//int main() {
//	int a = 6;
//	int c = a++;
//	cout << c << endl;
//	int b = 6;
//	int d = ++b;
//	cout << d << endl;
//	return 0;
//}

//变量类型强制转换
//int 和 char ASCII码
//float 变 int 下取整
//隐性类型转换 低精度转换到高精度 float>> double int >>float

//顺序结构
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << (a+b)*c << endl;
//	return 0;
//}

//判断结构
//int main() {
//	int score;
//	cin >> score;
//	if (score >= 60) {
//		cout << "及格";
//	}
//	else {
//		cout << "不及格";
//	}
//	return 0;
//}

//int main() {
//	int x;
//	cin >> x;
//	if (x >= 0) {
//		cout << x << endl;
//	}
//	else {
//		cout << -x << endl;
//	}
//	return 0;
//}

//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a > b) {
//		cout << a;
//	}
//	else {
//		cout << b;
//	}
//	return 0;
//}

//循环语句
//int main() {
//	int i = 0;
//	while (i < 10) {
//		cout << i << endl;
//		i++;
//	}
//	return 0;
//}

//int main() {
//	int sum = 0;
//	int i = 1;
//	while (i <= 100) {
//		sum += i * i * i;
//		i++;
		
//	}
//	cout << sum << endl;
//	return 0;
//}

//斐波那契数列
//int main() {
//	int n;
//	cin >> n;
//	int a = 1, b = 1, i = 1;
//	while (i < n) {
//		int c = a + b;
//		a = b;
//		b = c;
//		i++;

//	}
//	cout << a << endl;
//	return 0;
//}

//int main() {
//	int s = 0;
//	int i = 1;
//	do {
//		s += i;
//		i++;
//
//	} while (i <= 10);
//	cout << s << endl;
//	return 0;
//}

//数组
//int main() {
//	int a[100] = { 0 };
//	int b[] = { 1,3,4 };
	//调用 a[0], a[1], a[2];
//	cout << a[0];
//	return 0;
//}

//int main() {
//	int a;
//	cin >> a;
//	int f[100];
//	f[0] = 0, f[1] = 1;
//	for (int i = 2; i <= a; i++) {
//		f[i] = f[i - 1] + f[i - 2];
//		
//	}
//	cout << f[a] << endl;
//	return 0;
//}

//int main() {
//	int n;
//	cin >> n;
///	int a[10000];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int j = n-1; j >= 0; j--) {
//		cout << a[j];
//	}
//	return 0;
//}

//int main() {
//	int n,k;
//	cin >> n >> k;
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	reverse(a, a + n);
//	reverse(a, a + k);
//	reverse(a + k, a + n);
//	for (int i = 0; i < n; i++) {
//		cout << a[i];
//	}
//	return 0;
//}

//字符串
int main() {
	char a1[4] = { 'c','+','+' };
	char a2[4] = { 'c','+','+','\0'};
	char a3[4] = "c++";
	char s[100];
	string s1;
	cin.getline(s, 100);
	fgets(s, 100, stdin);
	getline(cin, s1);
	cout << a1 << endl;
	printf("%s\n", a3);
	puts(s);//自带\n
	//(1) strlen(str)，求字符串的长度
	//(2) strcmp(a, b)，比较两个字符串的大小，a < b返回负整数，a == b返回0，a > b返回正整数。这里的比较方式是字典序！
	//(3) strcpy(a, b)，将字符串b复制给从a开始的字符数组。
	return 0;
}
int main()
{
	string s1;              // 默认初始化，s1是一个空字符串
	string s2 = s1;         // s2是s1的副本，注意s2只是与s1的值相同，并不指向同一段地址
	string s3 = "hiya";     // s3是该字符串字面值的副本
	string s4(10, 'c');     // s4的内容是 "cccccccccc"
	getline(cin, s1); // string 用 getline 读取一整行
	return 0;
}

int main() {
	string s1 = "abc", s2;
	cout << s1.empty() << endl;//是否空 空则1，不空则0
	cout << s2.empty() << endl;
	cout << s1.size() << endl; //size 字符串长度
}

//string的比较：
//支持 > , < , >= , <= , == , != 等所有比较操作，按字典序进行比较。
int main() {
	string s1(10, 'c'), s2;     // s1的内容是 cccccccccc；s2是一个空字符串
	s1 = s2;                    // 赋值：用s2的副本替换s1的副本// 此时s1和s2都是空字符串
	string s1 = "hello,  """, s2 = "world\n";  //string 可以相加
	string s3 = s1 + s2;                    // s3的内容是 hello, world\n
	s1 += s2;                               // s1 = s1 + s2
	//当把string对象和字符字面值及字符串字面值混在一条语句中使用时，
	//必须确保每个加法运算符的两侧的运算对象至少有一个是string：
	string s4 = s1 + ", ";  // 正确：把一个string对象和有一个字面值相加
	string s5 = "hello" + ", "; // 错误：两个运算对象都不是string

	string s6 = s1 + ", " + "world";  // 正确，每个加法运算都有一个运算符是string
	string s7 = "hello" + ", " + s2;  // 错误：不能把字面值直接相加，运算是从左到右进行的
	string s = "hello world";
	for (char c : s) cout << c << endl; //for 遍历整个字符串
	for (char& c : s) c = 'a'; // 替换字符
	cout << s << endl;

}					

class person{ // 类默认为private
	private:
		int age, height;
		double money;
		string books[100];

	public:
		string name;

		void say()
		{
			cout << "I'm" << name << endl;
		}
		int get_age() {
			return age;
		 }
		void add_money(double x) {
			money += x;
		}
};

int main() {
	person c;
	c.name = "yxc";
	//c.age = 18; 错误
	c.add_money(10000);
	return 0;
}

struct Person {
	int age, height;
	double money;

	Person() {}

	Person(int _age, int _height, double _money) {
		age = _age;
		height = _height;
		money = _money;
	}
};

int main() {
	Person p = { 18,180,0 };
	cout << p.money;
}

char a, b;
int main() {
	char c = 'a',d;
	cout << (void*)&c << endl; // 输出地址
	cout << (void*)&d << endl;
	cout << (void*)&a << endl;
	cout << (void*)&b << endl;

	
	int* p = &a; // int类型的指针
	int** q = &p;
	cout << *p << endl; //通过地址取值
	*p = 12; // *p也可以赋值

	char c;
	int a[5] = { 1,2,3,4,5 };
	cout << (void*)&c << endl;
	cout << a << endl; //数组指针 是开始地址
	for (int i = 0; i < 5; i++) {
		cout << (void*)&a[i] << endl;
	}

	int* p = a;
	cout << p << endl;
	cout << p + 1 << endl;
	cout << *(a + 2) << endl;

	int* p = &a[0];
	int* k = &a[2];
	cout << p - k << endl;

	int b = 10;
	int* p = &b;
	int& p = b; // 引用
	return 0;
}

struct Node{
	int val;
	Node* next;

	Node(int _val) : val(_val),next(NULL){}
};

int main() {
	Node* p = new Node(1);
	Node* q = new Node(2);
	Node* o = new Node(3);
	p->next = q;
	q->next = o;
	
	Node* head = p;

	Node* u = new Node(4);
	u->next = head; // 从头插入
	head = u;
	//删除节点
	head->next = head->next->next;
	for (Node* i = head; i; i = i->next) {
		cout << i->val << endl;
	}
}

//vector 可以自动改变长度的数组
#include <vector>
int main() {
	vector<int> a;
	vector<int> b[233];
	
	a.size();//vector size
	a.empty();// empty
	a.clear();// clear

	vector<int>::iterator it = a.begin()//a的起始迭代器 当成指针
		//* a.begin()与a[0]的作用相同。
		a.end(); //最后一个的下一个
	a.front()//等价于* a.begin()和a[0]
	a.back()//返回最后一个元素
	a.push_back()//在最后添加一个元素
	a.pop_back()//删除最后一个元素
	vector<int>a({ 1,2,3 });//初始化
	//遍历
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
	}
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it;
	}
	for (int x : a) cout << x;


	struct Rec {
		int x, y;
	};
	vector<Rec> c;
	return 0;

}
//queue 先进先出
#include<queue>
int main() {
	queue<int> q;

	q.push(1);//队尾插入一个元素
	q.pop();//弹出队头元素
	q.front();//返回队头
	q.back();//返回队尾

	queue<double> a;
	struct Rec {
		int a.x.y;
	};
	queue<Rec> b;

	priority_queue<int> c; //优先队列 默认大根堆 先返回大的
	c.push(1);//插入一个元素
	c.top();//取最大
	c.pop();//删除最大值

	priority_queue<int, vector<int>, greater<int>> ab;//小根堆 先返回小的
	priority_queue<pair<int, int>> c; //二元组pair
	return 0;
}
//stack 先进后出
#include<stack>
int main()
{
	stack<int> stk;
	stk.push(1);//插入一个元素
	stk.pop();//弹出栈顶元素
	stk.top();//返回栈顶元素
	return 0;
}

//deque 双端队列
#include <deque>
int main() {
	deque<int> a;
	a.begin(), a.end();
	a.front(), a.back();
	a.push_back(1), a.push_front(2);//开头插入一个元素
	a[0];//随机访问一个元素
	a.pop_back(); a.pop_front(); //弹出最后 最前面元素
	a.clear(); //清空deque
	return 0;
}
//set  实现依赖红黑树
#include <set>
int main() {
	set<int> a; // 不包含重复元素
	multiset<int> b; //元素可以重复

	set<int> ::iterator it = a.begin();//set的迭代器
	it++; it--;
	++it; --it;

	struct Rec {
		int x, y;
		bool operator< (const Rec& t) const {
			return x < t.x;
		}
	};
	a.size();
	a.empty();
	a.clear();
	a.insert(x);//插入
	a.find(x)//查找等于x的元素迭代器 不存在返回a.end()
	a.lower_bound(x); // 找到大于等于x的最小元素迭代器
	a.upper_bound(x); // 找到大于x的最小元素迭代器
	a.erase(x) //x为元素 删去a中所有x  x为迭代器 删除x指向的元素
	a.count(x);//存在x返回1 不存在返回0；
}
//key-value映射  实现依赖红黑树	
#include <map>
int main() {
	map<int, int> a;
	map<string, int>b;
	map < string, vector<int> > c;
	a[1] = 2;
	a[10000] = 3;
	c["yxc"] = vector<int>({ 1,2,3,4 });
	cout << a[10000];	

	a.insert(1, 2);
	a.find(x);
}	


#include <unordered_set>
#include <unordered_map>
int main() {
	unordered_set<int> a; //哈希表，不能存储重复元素
	unordered_multiset<int> b;

	unordered_map<int, int>a;
	
}


#include <bitset>
int main() {
	bitset<1000> a; //长度为1000 的 01 串
	a[0] = 1;
	a[1] = 1;
	a.set(3); // 把某一位变成1
	a.reset(3); //把某一位变成0;
}


int main() {
	pair<int, string> a;
	a = { 3,"yxc" };
	a = make_pair(4, "abc");
	cout << a.first << a.second; //第一个值first 第二个second
	return 0;	
}

int main() {
	int a = 13;
	for (int i = 5; i >= 0; i--) {
		a >> i & 1;   //返回每一位
	}

}


int main() {
	int a[] = { 1,1,2,2,3,3,4 };
	int m = unique(a, a + 7) - a;//unique 
	vector<int> b({ 1,1,2,2,3,3,4 });
	b.erase(unique(b.begin(), b.end()), b.end());//删掉后面没用的
	cout << m << endl;
	for (int i = 0; i < m; i++) cout << a[i] << ' ';
	cout << endl;
	
	random_shuffle(b.begin(), b.end());//随机打乱

	sort(b.begin(), b.end());//从小到大
	sort(b.begin(), b.end(),greater<int>());//从大到小
	bool cmp(int a, int b) {
		return a > b;
	}

	struct Rec {
		int x, y;
		bool operator < (const Rec &t)const {//排结构体 重载运算符
			return x < t.x;
		}
	}a[5];
	for (int i = 0; i < 5; i++) {
		a[i].x = -i;
		a[i].y = i;
	}
	for (int i = 0; i < 5; i++) {
		printf("(%d,%d)", a[i].x, a[i].y);
	}

	//lower_bound
	int a[] = { 1,2,3,5,6 };
	vector<int> t{ 1,2,3,4,5,6 };
	int d = lower_bound(t.begin(), t.end(), 3)-t.begin();
	int* p = lower_bound(a, a + 5, 3);
	int p = lower_bound(a, a + 5, 3)-a;//得到下标
	cout << p << endl;
	cout << *p << endl;
	return 0;
}