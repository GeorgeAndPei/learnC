#include <stdio.h>
#include <math.h>
/*
 * comment1
 * main: generate some simple output
 */
/*自定义函数-打印奇偶数*/
void printParity(int x)
{
	if (x % 2 == 0)
		printf("this is even number.\n");
	else
		printf("this is odd number.\n");
}
void printNumber(int x)
{
	printf("x的十位数字是：%d\nx的个位数字是：%d\n", x / 10 , x % 10);
}
/*自定义函数-1到100出现多少次数字9*/
int count_9(void)
{
	int a = 1;
	int count = 0;
	while (a <= 100){
		if(a / 10 == 9 || a == 9 || a % 10 == 9) 
			count = count + 1;
		a++;
	}
	return count;
}
/*自定义函数-四舍五入*/
double myround(double x)
{
	if (x == 0.0)
		printf("%f不是小数，请重新输入！\n",x);
	if (x > 0.0){
		if (x - floor(x) >= 0.5)
			return ceil(x);
		else
			return floor(x);
	}
	else{
		if (x - floor(x) < 0.5)
			return floor(x);
		else
			return ceil(x);
	}
}
/*自定义函数-求两个整数的最大公约数*/
int k = 0;
int return_GCD(int a, int b)
{
	k = k + 1;
	if (a % b == 0)
		return b;
	else 
		return return_GCD(b, a % b);
	printf("%d\n", k);
}
/*自定义函数-用循环求两个整数的最大公约数*/
int return_GCD_loop(int a, int b)
{
	int c;
	while (a % b != 0){
		c = b;
		b = a % c;
		a = c;
	}
	return b; 
}
/*自定义函数-求Fibonacci数列的第n项*/
int return_Fn(int n)
{
	if (n <= 1)	
		return 1;
	else
		return return_Fn(n-1) + return_Fn(n-2);
}
/*自定义函数-循环求Fibonacci数列的第n项*/
int return_Fn_loop(int n)
{
	int result = 1;
	int a1 = 1;
	int a2;
	while (n > 1) {
		a2 = a1;
		a1 = result;
		result = a1 + a2;
		n = n - 1;
	}
	return result;
}
/*自定义函数-打印九九乘法表*/
int print_99(void)
{
	int i, j;
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= i; j++){
			printf("%d * %d = %d\t", i, j, i*j);
		}
		printf("\n");
	}
}
/*自定义函数-打印菱形*/
int diamond(int x, char ch)
{
	int i, j; 
	if (x % 2 ==0)
		printf("参数无效，请重新输入！\n");
	else{
		//打印中间行以上部分，包含中间行
		for (i = 1; i <= x / 2 + 1; i++){
			for (j = 1; j <= i + x / 2; j++){
				if (j <= (x - 2 * i + 1) / 2){
					printf(" \t");
				}
				else {
					printf("%c\t", ch);
				}
			}
			printf("\n");
		}
		//打印中间行以下部分
		for (i = x / 2 + 2; i <= x ; i++){
			for (j = 1; j <= x - i + x / 2 + 1; j++){
				if (j <= (2 * i - x) / 2){
					printf(" \t");
				}
				else {
					printf("%c\t", ch);
				}
			}
			printf("\n");
		}

	}
}
/*主函数*/
int main(void)
{
	int i = 56;
	int j = 30; 
//	printf("%d\n", i % j);
//	printf("%d 和 %d 的最大公约数是%d\n", i, j, return_GCD_loop(i , j));
//	printf("%d 和 %d 的最大公约数是%d\n", i, j, return_GCD(i , j));
//	printf("%d\n", count_9()); 
	diamond(13, '*');
	return 0;
}
