#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef long long LL;
//const double pi = acos(-1.0); //acos反余弦函数：一直函数值求弧度值

int main(){
	//赋值表达式
	//1
	/*int n=3*2+1;
	int m=(n>6)&&(n<8);
	n=n+2;
	int a= 12,b=3;
	a/=b+1;
	b%=2;
	printf("%d %d\n",n,m);
	printf("%d %d\n",a,b);
	system("pause");
	return 0;*/
	
	/*int a=123,b=1234567;
	double d1=12.3456;
	printf("%5d\n",a);
	printf("%5d\n",b);

	printf("%05d\n",a);
	printf("%05d\n",b);

	printf("%.0f\n",d1);
	printf("%.1f\n",d1);
	printf("%.2f\n",d1);
	printf("%.3f\n",d1);
	printf("%.4f\n",d1);
	system("pause");
	return 0;*/

	/*char c1,c2,c3;
	c1 = getchar();
	getchar();
	c2 = getchar();
	c3 = getchar();
	putchar(c1);
	putchar(c2);
	putchar(c3);
	system("pause");
	return 0;*/

	//typeof
	/*LL a = 123456789012345,
		  b = 234567890123456;
	printf("%lld\n",a+b);
	return 0;*/

	//fabs(double x):用于对double型变量取绝对值
	/*double db = -12.56;
	printf("%.2f\n",fabs(db));
	system("pause");
	return 0;*/

	//floor(double x)和ceil(double x)：对double型变量的向下取整和向上取整
	/*double db1=-5.2,db2=5.2;
	printf("%.0f %.0f\n",floor(db1),ceil(db1));
	printf("%.0f %.0f\n",floor(db2),ceil(db2));
	system("pause");
	return 0;*/

	//pow(double r,double p):用于返回r的p次方
	/*double db =pow(2.0,3.0);
	printf("%f\n",db);
	system("pause");
	return 0;*/

	//sqrt(double x)：返回double型变量的算术平方根
	/*double db = sqrt(2.0);
	printf("%f\n",db);
	system("pause");
	return 0;*/

	//log(double x)：返回double变量的以自然对数(e)为底的对数
	/*double db = log(1.0);
	printf("%.2f\n",fabs(db));
	system("pause");
	return 0;*/

	//sin(double x) cos(double x) tan(double x)
	/*double db1 = sin(pi * 45 / 180);
	double db2 = cos(pi * 45/ 180);
	double db3 = tan(pi * 45 /180);
	printf("%f,%f,%f\n",db1,db2,db3);
	system("pause");
	return 0; */    
	//asin(double x) acos(double x) atan(double x)
	/*double db1 = asin(1.0);
	double db2 = acos(-1.0);
	double db3 = atan(0.0);
	printf("%f,%f,%f\n",db1,db2,db3);
	system("pause");
	return 0; */

	//round(double x)用于将double型变量x四舍五入
	/*double db1 = round(3.40);
	double db2 = round(3.45);
	double db3 = round(3.50);
	double db4 = round(3.55);
	double db5 = round(3.60);
	printf("%d,%d,%d,%d\n",(int)db1,(int)db2,(int)db3,(int)db4,(int)db5);
	system("pause");
	return 0;*/

	//if语句1
	/*int n=2;
	if(n>3){
		n=9;
		printf("%d\n",n);
	}else if(n>2){
		printf("%d\n",n+1);
	}else{
		printf("%d\n",n);
	}
	system("pause");
	return 0;*/
	//if语句2
	/*int n=0,m=5;
	if(n){
		printf("n is not zero!\n");
	}else{
		printf("n is zero!");
	}
	if(m){
		printf("m is not zero!");
	}else{
		printf("m is zero!");
	}
	system("pause");
	return 0;*/
	//if语句3
	/*int n=0,m=3;
	if(!n){
		printf("n is zero!\n");
	}else{
		printf("n is not zero\n");
	}
	if(!m){
		printf("m is zero\n");
	}else{
		printf("m is not zero\n");
	}
	system("pause");
	return 0;*/
	//if语句嵌套
	/*int n=3,m=5;
	if(n<5){
		if(m<5){
			printf("%d\n",m+n);
		}else{
			printf("%d\n",m-n);
		}
	}else{
		printf("haha\n");
	}
	system("pause");
	return 0;*/

	//switch语句 
	/*int a = 1,b = 2;
	switch (a+b){
		case 2:
			printf("%d\n",a);
			break;
		case 3:
			printf("%d\n",b);
			break;
		case 4:
			printf("%d\n",a+b);
			break;
		default:
			printf("sad stroy\n");
	}
	system("pause");
	return 0;*/


	//循环结构
	//while
	/*int n =1,sum = 0;
	while(n<=100){
		sum = sum + n;
		n++;
	}
	printf("sum = %d\n",sum);
	system("pause");
	return 0;*/
	//do...while
	/*int n = 1, sum = 0;
	do{
		sum+=n;
		n++;
	}while(n<=100);
	printf("sum=%d\n",sum);
	system("pause");
	return 0;*/

	//for语句
	/*int i = 1, sum = 0;
	for(i=1;i<=100;i++){
		sum+=i;
	}
	printf("sum=%d\n",sum);
	system("pause");
	return 0;*/

	//break和continue语句
	//break
	/*int n , sum = 0;
	for(int i = 1;i<=100;i++){
		sum+=i;
		if(sum>=2000) break;
	}
	printf("sum = %d\n",sum);
	system("pause");
	return 0;*/
	//continue
	/*int sum = 0;
	for(int i = 1;i<=5;i++){
		if(i%2==1)continue;
		sum+=i;
	}
	printf("sum = %d\n",sum);
	system("pause");
	return 0;*/

	//数组
	//一维数组
	/*int  a[10] = {2,3,5,5,4,6,3};
	int a[10]={};
	for(int i = 0;i<=9;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	system("pause");
	return 0;*/
	/*int a[10];
	scanf("%d",&a[0]);
	for(int i =1;i<10;i++){
		a[i] = a[i-1]*2;
		printf("a[%d]=%d\n",i,a[i]);
	}
	system("pause");
	return 0;*/

	//如何交换两个数
	/*int a = 1, b = 2;
	int temp =a;
	a=b;
	b=temp;
	printf("a=%d,b=%d",a,b);
	system("pause");
	return 0;*/
	//冒泡排序
	/*int a[10]={9,8,7,6,5};
	for(int i=1;i<5;i++){
		for(int j = 0;j<5-i;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int n=0;n<=9;n++){
		printf("a[%d]=%d\n",n,a[n]);
	}
	system("pause");
	return 0;*/
	//二维数组
	/*int a[5][6]={{4,3,4,5},{},{5,2,5},{}};
	for(int i = 0;i<5;i++){
		for(int j =0;j<6;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;*/
	//二维数组
	/*int a[3][3],b[3][3];
	for(int i = 0;i<3;i++){
		for(int j= 0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(int i = 0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	int c [3][3];
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;*/
	
	//memset：给数组中每一个元素赋同样的值，需在开头添加string.h头文件
}





//double round(double r)
//{
//	return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
//};