#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//��ӡ100-1000�ڵ�ˮ�ɻ���
int one(){
	int i;
	int tmp;
	for (i = 100; i < 1000; i++){
		//pow��������ȡǰ�ߵĺ������η�,
		//��λ��3�η�+ʮλ��3�η�+��λ��3�η�=i,��Ϊˮ�ɻ���
		tmp = pow(i % 10,      3) +
			  pow(i / 10 % 10, 3) +
			  pow(i / 100,     3);
		if (tmp == i){
			printf("100-1000�е�ˮ�ɻ�����%d\n",i);
		}
	}

	system("pause");
	return 0;
}
//��λ��������������
//1.ȡ�������ÿһλ
//2.����ת��
int two(){
	int n = 1234;
	int i;
	//iΪ0,����ѭ��
	for (i = n; i; i /= 10){
		printf("%d ",i % 10);//ȡ����λ
	}
	system("pause");
	return 0;
}
//�ж�һ�����Ƿ�Ϊ�غ���,����:123454321,����д��һ��,
int three(){
	int n;
	scanf("%d",&n);

	int i, sum = 0;

	//iΪ0ʱ,����ѭ��
	for (i = n; i; i /= 10){
		sum = sum * 10 + i % 10;//����ԭ������
	}
	if (sum == n){
		printf("�ǻ�����\n");
	}
	else{
		printf("���ǻ�����\n");
	}

	system("pause");
	return 0;
}
//�ж�һ�����ڲ�ͬ�������Ƿ�Ϊ������
int main(){
	int n, m;
	scanf("%d%d", &n,&m);
	//�ж�һ����n��m�������Ƿ�Ϊ������

	int i, sum = 0;
	//iΪ0ʱ,����ѭ��
	//i % m����ɶ�����n��m������ÿһλ�ı���.
	for (i = n; i; i /= m){
		sum = sum * m + i % m;//����ԭ������n
	}
	if (sum == n){
		printf("�ǻ�����\n");
	}
	else{
		printf("���ǻ�����\n");
	}
	system("pause");
	return 0;
}