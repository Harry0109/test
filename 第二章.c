#include<stdio.h>
#include<math.h>
int main() {
	//4.2 输入几个数字 求最大值

	//int i = 0;
	//int max;
	//int x;
	//for (i = 0; i < 3; i++) {
	//	scanf("%d", &x);
	//	max = x;
	//	if (i > 0) {
	//		if (x > max) {
	//			max = x;
	//		}
	//		else
	//		{
	//			max = max;
	//		}
	//	}
	//}
	//printf("最大值%d", max);

	//4.3输入三个数 按升序输出

	//int a = 45;
	//int b = 14;
	//int c = 188;
	//if (a > b) {
	//	int d = b;
	//	b = a;
	//	a = d;
	//}
	//if (a > c) {
	//	int d = c;
	//	c = a;
	//	a = d;
	//}
	//if (b > c) {
	//	int d = c;
	//	c = b;
	//	b = d;
	//}
	//printf("%d %d %d", a, b, c);
 
	//int x = 15;
	//if (x % 3 == 0 && x % 5 == 0) {
	//	printf("YES");
	//}
	//else
	//{
	//	printf("NO");
	//}

	//int x = 100;
	//int i = 0;
	//int j = 0;
	//for (x = 100; x <= 200; x++) {
	//	for (i = 2; i < x; i++) {
	//		if (x%i == 0) {
	//			j = 0;
	//			break;
	//		}
	//		else {
	//			j = 1;
	//		}
	//	}
	//	if (j == 1) {
	//		printf("%d ", x);
	//	}
	//	
	//}

	//int x=8, y=24;
	//int z=1;
	//if (x < y) {
	//	int c = y;
	//	y = x;
	//	x = c;
	//}
	//while (z) {
	//	z = x % y;
	//	x = y;
	//	y = z;
	//}
	//printf("%d ", x);

	//3.1

	//float p=1.0, r;
	//int n;
	//r = 0.07;
	//n = 10;
	//for (int i = 1; i <= 10; i++) {
	//	p = p * (1 + r);
	//}
	////p = pow(1 + r, n);
	//printf("%f ", p);

	//3.2

	//float p = 1000,n=5;
	//float p1, p2, p3, p4, p5;
	//float r1 = 0.0414,r2=0.021,r3=0.0275,r5=0.0585,r0=0.0072;
	//p1 = p * (1 + n * r5);
	//p2 = p * (1 + 2 * r2)*(1 + 3 * r3);
	//p4 = p * pow((1 + r1), 5);
	//printf("%.2f ", p1);
	//printf("%.2f ", p2);
	//printf("%f ", p4);

	//3.3

	//float d = 300000,p=6000,r=0.01,m;
	//m = log(p /( p - d * r)) / log(1 + r);
	//printf("%.2f ", m);

	 //3.4

	//char x[] = "China";
	//for (int i = 0; i < 5; i++) {
	//	printf("%c ", x[i]+4);
	//}
	//char c;
	//c=getchar();
	//putchar(c);


	//char a;
	//a = getchar();
	//printf("%d ", a);
	//putchar(a); 

	int x = 20, y = 30;
	char c = getchar();
	switch (c)
	{
	case 'a':
	case 'A':
		printf("%d", x + y);
		break;
	case 'b':
	case 'B':
		printf("%d ", x - y);
		break;
	default:
		break;
	}
}