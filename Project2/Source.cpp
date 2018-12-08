#include<iostream>
#include<stdio.h>
#include<locale.h>
void task6()
{
	int a, b, c;
	printf("a");
	scanf_s("%d", &a);
	printf("b");
	scanf_s("%d", &b);
	c = a % b;
	if (c == 0)
		printf("true");
	else printf("false");
}




void task5()
{
	printf(" ”же делали");




}



void task4()
{
	int a, b, c;
	printf("n");
	scanf_s("%d",&c);
	a = c / 10;
	b = c % 10;
	printf("%d\n%d\n",a, b);
}




void task3()
{
	int a, b, c;
	printf("a");
	scanf_s("%d", &a);
	printf("b");
	scanf_s("%d", &b);
	switch (b) {
	case 1: b * 30;
		break;
	case 2: b * 31;
		break;
	case 3: b * 30;
		break;
	case 4: b * 31;
		break;
	case 5: b * 30;
		break;
	case 6: b * 31;
		break;
	case 7: b * 30;
		break;
	case 8: b * 31;
		break;
	case 9: b * 30;
		break;
	case 10: b * 31;
		break;
	case 11: b * 30;
		break;
	case 12: b * 31;
		break;
	default:
		break;

	}
	c = b + a;
	if (c > 365)
		c = c - 365;
	printf("%d\n", c);
}
void task2()
{
	int a, b, c;
	printf("a");
	scanf_s("%d", &a);
	printf("b");
	scanf_s("%d", &b);
	b = b * 30;
	c = b + a;
	if (c > 365)
		c = c - 365;
	printf("%d\n", c);
	system("pause");
}





void task1() 
{
	int a, b, c,f;
	printf("a");
	scanf_s("%d",&a);
	printf("b");
	scanf_s("%d", &b);
	printf("c");
	scanf_s("%d", &c); 
	b = b * 60;
	c = c * 3600;
	f = a + b + c;
	printf("%d\n",f);
	system("pause");
}
int main()
{
	setlocale(LC_ALL, "");
	int task;
start:
	printf("¬видите номер задани€");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {
		task1();
	}break;
	case 2: {
		task2();
	}break;
	case 3: {
		task3();
	}break;
	case 4: {
		task4(); };
			break;
	case 5: {
		task5(); };
			break;
	case 6: {
		task6(); };
			break;

	 
	default:
		break;
	}
	goto start;





	system("pause");



}
