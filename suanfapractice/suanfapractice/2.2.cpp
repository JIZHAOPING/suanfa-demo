#include <stdio.h>
#include <stdlib.h>
//����

//�����Ķ���-С����

//void print1(){
//	printf("Haha,\n");
//	printf("Good idea!\n");
//}
//void print2(){
//	printf("Ohno,\n");
//	printf("Bad idea!\n");
//}
//int main(){
//	print1();
//	print2();
//	system("pause");
//	return 0;
//}

//�вκ���

//int judge(int x){
//	if(x>0) return 1;
//	else if(x==0) return 0;
//	else return -1;
//}
//int main(){
//	int a,ans;
//	scanf("%d",&a);
//	ans=judge(a);
//	printf("%d\n",ans);
//	system("pause");
//	return 0;
//}

//�ֲ�����

//void change(int x){
//	x = x+1;
//}
//int main(){
//	int x = 10;
//	change(x);
//	printf("%d\n",x);
//	system("pause");
//	return 0;
//}

//��̸main����
//�Լ������˵��main��������0���������ڸ�֪ϵͳ����������ֹ

//��������Ϊ��������
//����Ҫ���ǣ�������Ϊ��������ʱ���ں����ж�����Ԫ�ص��޸ľ͵�ͬ�ڶ�ԭ����Ԫ�ص��޸ģ�������ͨ�ľֲ�������ͬ��
//����������ĵ�һά����Ҫ��д���ȣ�����Ƕ�ά���飬��ô�ڶ�ά��Ҫ��д���ȣ�

//void change(int a[],int b[][5]){
//	a[0] = 1;
//	a[1] = 3;
//	a[2] = 5;
//	b[0][0] = 1;
//}
//
//int main(){
//	int a[3] = {0};
//	int b[5][5] = {0};
//	change(a,b);
//	for(int i = 0;i<3;i++){
//		printf("%d\n",a[i]);
//	}
//	system("pause");
//	return 0;
//}

//������Ƕ�׵���
//3�����Ƚϴ�С

//int max_2(int a,int b){
//	if(a>b) return a;
//	else return b;
//}
//
//int max_3(int  a,int b,int c){
//	int temp = max_2(a,b);
//	temp = max_2(temp,c);
//	return temp;
//}
//
//int main(){
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	printf("%d\n",max_3(a,b,c));
//	system("pause");
//	return 0;
//}

//�����ĵݹ����
//n�Ľ׳�

//int F(int n){
//	if(n==0)  return 1;
//	else return F(n-1)*n;
//}
//int main(){
//	int n;
//	scanf("%d   ",&n);
//	printf("%d\n",F(n));
//	system("pause");
//	return 0;
//}

//ʲô��ָ��
//��ñ����ĵ�ַ

//int main(){
//	int a = 1;
//	printf("%d,%d\n",&a,a);
//	system("pause");;
//	return 0;
//}

//��õ�ַ��ָ��Ԫ�أ���ָ�����ǰ���*������ֱ�Ӷ�*p���ƾ��൱�ڶԱ�����ֵ��

//int main(){
//	int a;
//	int* p=&a;
//	a=233;
//	printf("%d\n",*p);
//	system("pause");
//	return 0;
//}

//ָ��������
   
//int main(){
//	int a[10];
//	for(int i=0;i<10;i++){
//		scanf("%d",a+i);
//	}
//	for(int i=0;i<10;i++){
//		printf("%d ",*(a+i));
//	}
//	system("pause");
//	return 0;
//}

//ʹ��ָ�������Ϊ��������

//void change(int* p){
//	*p = 233;
//}
//int main(){
//	int a = 1;
//	int* p=&a;
//	change(p);
//	printf("%d\n",a);
//	system("pause");
//	return 0;
//}

//�������������ѽ����Ĳ����ú��������ó�������Ҫ�õ�ָ��������

//void swap(int * a,int * b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int a = 1,b = 2;
//	int *p1 = &a,*p2=&b;
//
//	swap(p1,p2);
//	printf("a = %d,b = %d\n",*p1,*p2);
//	system("pause");
//	return 0;
//}

//����
//�����Ǹ�ԭ�������˸�����������ǰ���&
//�����Ƿ����ã������Ĳ�������ʵ�ʴ���Ĳ��������Բ�ͬ
//Ҫ�����õ�&��ȡ��ַ�����&���ֿ��������ò�����ȡ��ַ����˼

//void change(int &x){
//	x=1;
//}
//int main(){
//	int x = 10;
//	change(x);
//	printf("%d\n",x);
//	system("pause");
//	return 0;
//}

//ָ�������
//����������������ָ������ã�

//void swap(int* &p1, int* &p2){
//	int* temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//int main(){
//	int a = 1,b = 2;
//	int *p1 = &a,*p2 = &b;
//	swap(p1,p2);
//	printf("a=%d,b=%d\n",*p1,*p2);
//	system("pause");
//	return 0;
//}

