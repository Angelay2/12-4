#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//打印100-1000内的水仙花数
int one(){
	int i;
	int tmp;
	for (i = 100; i < 1000; i++){
		//pow函数可以取前者的后面数次方,
		//各位的3次方+十位的3次方+百位的3次方=i,即为水仙花数
		tmp = pow(i % 10,      3) +
			  pow(i / 10 % 10, 3) +
			  pow(i / 100,     3);
		if (tmp == i){
			printf("100-1000中的水仙花数有%d\n",i);
		}
	}

	system("pause");
	return 0;
}
//数位遍历的适用条件
//1.取出输出的每一位
//2.进制转换
int two(){
	int n = 1234;
	int i;
	//i为0,跳出循环
	for (i = n; i; i /= 10){
		printf("%d ",i % 10);//取出个位
	}
	system("pause");
	return 0;
}
//判断一个数是否为回合数,类似:123454321,正反写都一样,
int three(){
	int n;
	scanf("%d",&n);

	int i, sum = 0;

	//i为0时,跳出循环
	for (i = n; i; i /= 10){
		sum = sum * 10 + i % 10;//逆序原来的数
	}
	if (sum == n){
		printf("是回文数\n");
	}
	else{
		printf("不是回文数\n");
	}

	system("pause");
	return 0;
}
//判断一个数在不同进制下是否为回文数
int main(){
	int n, m;
	scanf("%d%d", &n,&m);
	//判断一个数n在m进制下是否为回文数

	int i, sum = 0;
	//i为0时,跳出循环
	//i % m能完成对数字n在m进制下每一位的遍历.
	for (i = n; i; i /= m){
		sum = sum * m + i % m;//逆序原来的数n
	}
	if (sum == n){
		printf("是回文数\n");
	}
	else{
		printf("不是回文数\n");
	}
	system("pause");
	return 0;
}