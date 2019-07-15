#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<float.h>

int main()
{
//Part1 
#if 0
	printf("%d\n", 1+2);
	printf("%d\n", 999/10);
	printf("%d\n", 999%10);
	printf("%.1lf\n", 8.0/5.0);
	printf("%.2lf\n", 8.0/5.0);
	printf("%d\n", 8.0/5.0);
#endif	
//Part2 
#if 0
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", a+b);
#endif
//Part3 圆柱体表面积
#if 0
	const double pi = 4.0 * atan(1.0);
	double r, h, s1, s2, s;
	scanf("%lf%lf", &r, &h);
	s1 = pi * r * r;
	s2 = 2 * pi * r * h;
	s = s1 * 2.0 + s2;
	printf("Area = %.3lf\n", s);		
#endif
//Part4 三位数反转
#if 0
	int n4;
	scanf("%d", &n4);
	printf("%d%d%d\n", n4%10, n4/10%10, n4/100);
#endif
//Part5 变量交换
#if 0 
	int a5, b5;
	scanf("%d%d", &a5, &b5);
	printf("%d %d\n", b5, a5);//能解决问题就行
	a5 = a5 + b5;
	b5 = a5 - b5;
	a5 = a5 - b5;
	printf("%d %d\n", a5, b5);
#endif

//Part6 鸡兔同笼
#if 0
	int a6, b6, n6, m6;
	scanf("%d%d", &n6, &m6);
	a6 = (4 * n6 - m6) / 2;
	b6 = n6 - a6;
	if(m6 % 2 == 1 || a6 < 0 || b6 < 0){
		printf("No answer\n");
	} else {
		printf("%d %d\n", a6, b6);
	}
#endif

//Part7 三整数排序
#if 0 
	int a7, b7, c7, x7, y7, z7;
	scanf("%d%d%d", &a7, &b7, &c7);
	x7 = a7; if(x7 > b7) {x7=b7;}; if(x7 > c7) {x7=c7;};
	z7 = c7; if(z7 < a7) {z7=a7;}; if(z7 < b7) {z7=b7;};
	y7 = a7 + b7 + c7 - x7 - z7;
	printf("%d %d %d\n", z7, y7, x7);
#endif

//Part8 
#if 0

	printf("%%d \\n \n");
	printf("11111*11111 %d\n", 11111 * 11111);
	printf("11111.0*11111.0 %lf\n", 11111.0 * 11111.0);
	printf("sqrt(-10) %d\n", sqrt(-10));
	printf("1.0/0.0 %f\n", 1.0/0.0);
	printf("0.0/0.0 %f\n", 0.0/0.0);
	printf("1/0 %d\n", 1/0);

#endif

//Part9
#if 0
	printf("%d\n", 2147483647);
	printf("%d\n", 2147483647 + 1);
	printf("%d\n", -2147483648 -1);
#endif
//Part10 闰年
#if 0
	int y = 0;
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 3200 != 0)){
		printf("yes\n");
	} else {
		printf("no\n");
	}
#endif
//Part11 
#if 0
	double n9 = 0.0;
	printf("INT_MAX %d\n", INT_MAX);
	printf("INT_MIN %d\n", INT_MIN);
	printf("DOUBLE_MAX %f\n", FLT_MAX);
	printf("DOUBLE_MIN %f\n", FLT_MIN);
	int a9 = 0;
	scanf("%d", &a9);
	int count9 = a9 / 2;
	int sum9 = a9 + 1;
	if(a9 % 2 == 0){
		printf("sum: %d\n", sum9 * count9);
	} else
	printf("sum: %d\n", sum9 * count9 + count9 + 1);
#endif

//Part12  
#if 0
	int n9 = 0;
	while(1){
		printf("%d\n", n9++);

		if(n9 < n9 * n9){
			printf("%d\n", n9);
			n9 = n9 * n9;
		}
		
		if(n9 == 0){
			break;
		}
	}	
#endif

//Part13 阶乘之和
#if 0 
	const int MOD = 1000000;
	int i, j, k, n, s = 0;
	scanf("%d", &n);
	int count = n;
	while(count-- > 1){
		s = 0;
		if(count > 25) count = 25;
		for(i = 1; i <= count; i++) {
			int factorial = 1;
			for(j = 1; j <= i; j++) {
				factorial = factorial * j % MOD;
			}
		s = (s + factorial) % MOD;
		}
		printf("count:%d value:%d\n", count, s);
	}
#endif

//Part14 最大值 最小值 平均值
#if 0
	int x, n = 0, min, max , s = 0;
	while(scanf("%d", &x) == 1) {
		printf("scanf:%d\n", x);
		if(n == 0) min = max = x;
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		n++;
	}
	printf("%d %d %.3lf\n", min, max, (double)s/n);
#endif

//Part15 浮点数陷阱
#if 0

	double i;
	for(i = 0; i != 10; i += 0.1)
	printf("%.1lf\n", i);
#endif

//Part]16 位数
#if 0
	int i = 0,  count = 1;
	scanf("%d", &i);
	while(i > 9) {
		count++;
printf("%d\n",i);
		i = i/10;
	}
	printf("digit:%d\n", count);


#endif

// Part16 水仙花数 daffodil
#if 0
	
#endif

//Part17 韩信点兵

//Part18 调和级数 harmony
#if 0 
	int i = 0;
	float  sum = 0;
	scanf("%d", &i);
	while(i != 0){
		sum = 1.0/i + sum;
		i--;
	}
	printf("sum:%.3f\n", sum);
#endif

//Part19 近似计算 approximation

//Part20 排序 permutation
#if 0
	for(int n = 123;n <= 329; n++){
		
		int a,b,c;
		a = n /100;
		b = n / 10 % 10;
		c = n % 10;
		int s = 0, m = 0;
		s = a + b  + c;
		m = a * b * c;
		
		a = 2 * n / 100;
		b = 2 * n / 10 % 10;
		c = 2 * n % 10;
		s = s + a + b + c;
		m = m * a * b * c;

		a = 3 * n / 100;
		b = 3 * n / 10 % 10;
		c = 3 * n % 10;
		s = s + a + b + c;
		m = m * a * b *c;

		if(s == 45 && m == 362880){
			printf("the answer:%d\n", n);
		}		
	}
#endif
	
return 0;
}
/*
//Part 1
1. 整数值用%d输出，实数用%lf输出.
2. 整数/整数=整数，浮点数/浮点数=浮点数
3. 整数-浮点数=浮点数(整数先转成浮点数然后再:浮点数-浮点数=浮点数)

//Part 2
1. 尽量用const关键字声明常量
2. 赋值是个动作，先计算右边的值，再赋值给左边的变量，覆盖她原来的值

//Part6
1. if语句的条件是一个逻辑表达式,他的值可能为真，也可能为假
2. C 语言中的逻辑运算符都是短路运算符，一旦能够确认整个表达式的值就不再继续计算
3. 浮点运算可能存在误差。在进行浮点比较时，应该考虑到浮点误差

//Note
1. 比较大的数组应尽量声明在main函数外
2. strlen 返回的是结束标记符之前的字符个数2. strlen 返回的是结束标记符之前的字符个数
*/

