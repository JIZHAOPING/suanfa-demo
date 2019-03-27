//#include <stdio.h>
//#include <stdlib.h>
//#define pi 3.14
//const double pi = 3.14;
//#define ADD(a,b) ((a)+(b))
//#define MAX(a,b) ((a)>(b)?(a):(b))
//
//int main(){
	//double a = 3.14,b = 0.12;
	//double c = a + b ;
	//printf("%f",c);//%f是float和double型的输出格式
	//system("pause");
	//return 0;
	////输出3.260000

	//char c1 = 'z',c2 = 'j',c3 = 117;//计算器中字符类型是按照ASCII编码来的
	//printf("%c,%c,%c",c1,c2,c3);
	//system("pause");
	//return 0;

	//int num1 = 1,num2 = 2;
	//printf("%d\n\n%d",num1,num2);// \n是换行字符
	//printf("%c",7);//因为ASCII为7的字符是控制字符，并且是控制响铃功能的字符
	//system("pause");
	//return 0;

	//字符串常量用字符数组来存储
	/*char str1[25] = "Wo ao de ren bu ai wo";
	char str2[25] = "so sad a story it is";
	printf("%s,%s",str1,str2);
	system("pause");
	return 0;*/

	//在c语言中必须添加#include<stdbool.h>头文件才能使用布尔型，或者直接将文件扩展名改成.cpp
	//true=1;false=0
	/*bool flag1 = 0,flag2 = true;
	int a = 1,b = 1;
	printf("%d %d %d\n",flag1,flag2,a==b);
	system("pause");
	return 0;*/

	//强制类型转换；如果没有写强制类型转换，编译器将会自动进行转换，
	//但是不可以说任何时候都可以不用写，因为如果在计算过程中需要转换类型，就不能等算完再转换
	//double r = 12.56;
	//int a =3,b = 5;
	//printf("%d\n",(int)r);
	//printf("%d\n",r/a);
	//printf("%d\n",a/b);
	//printf("%.1f",(double)a/(double)b);//%.1f是指保留一位小数输出
	//system("pause");
	//return 0;

	//符号常量：在开头声明#define 标识符 常量（末尾不加分号）
	/*double r = 3;
	printf("%f\n",pi*r*r);
	system("pause");
	return 0 ;*/
	//另一种定义常量的方法是使用const，代替define
	//const 数据类型 变量名=常量;推荐const的写法
	
	//题外话：define除了可以定义常量，其实可以定义任何语句和片段
	//#define ADD(a,b) ((a)+(b))：注意加括号
	/*int num1 = 3,num2 = 5;
	printf("%d",ADD(num1,num2));
	system("pause");
	return 0 ;*/

	//运算符
	/*int a = 3,b = 4;
	double c = 1.23,d=0.24;
	printf("%d %d\n",a+b,a-b);
	printf("%f\n",c*d);
	system("pause");
	return 0;*/
	//除法运算,舍去小数部分，向下取整
	//取模返回余数
	/*int a =5,b=4,c =5,d=6;
	printf("%d %d %d\n",a/b,a/c,a/d);
	printf("%d %d %d\n",a%b,a%c,a%d);
	system("pause");
	return 0;*/

	//a?b:c条件运算符：如果a为真，执行并返回b的结果，如果a为假，执行并返回c的结果
	/*int a =3,b = 5;
	int c = a>b?7:11;
	printf("%d\n",c);
	system("pause");
	return 0;*/
	//用宏定义
	/*int a = 4,b = 3;
	printf("%d\n",MAX(a,b));
	system("pause");
	return 0;

}*/