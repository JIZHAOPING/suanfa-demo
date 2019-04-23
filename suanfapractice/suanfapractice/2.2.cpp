#include <stdio.h>
#include <stdlib.h>
//函数

//函数的定义-小例子

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

//有参函数

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

//局部变量

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

//再谈main函数
//对计算机来说，main函数返回0的意义在于告知系统程序正常终止

//以数组作为函数参数
//最重要的是：数组作为函数参数时，在函数中对数组元素的修改就等同于对原数组元素的修改（这与普通的局部变量不同）
//参数中数组的第一维不需要填写长度（如果是二维数组，那么第二维需要填写长度）

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

//函数的嵌套调用
//3个数比较大小

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

//函数的递归调用
//n的阶乘

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

//什么是指针
//获得变量的地址

//int main(){
//	int a = 1;
//	printf("%d,%d\n",&a,a);
//	system("pause");;
//	return 0;
//}

//获得地址所指的元素：在指针变量前面加*，所以直接对*p复制就相当于对变量赋值了

//int main(){
//	int a;
//	int* p=&a;
//	a=233;
//	printf("%d\n",*p);
//	system("pause");
//	return 0;
//}

//指针与数组
   
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

//使用指针变量作为函数参数

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

//交换两个数：把交换的部分用函数单独拿出来，就要用到指针来交换

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

//引用
//引用是给原变量起了个别名：变量前面加&
//不管是否引用，函数的参数名和实际传入的参数名可以不同
//要把引用的&跟取地址运算符&区分开来，引用并不是取地址的意思

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

//指针的引用
//交换两个数（利用指针的引用）

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

