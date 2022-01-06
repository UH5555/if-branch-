#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int num = 1;
	int a = num % 2;
	if (1 == a)
		printf("奇数\n");
	return 0;
}
//int main()
//{
//	int num = 4;
//	if (num = 5)// = 赋值，==判断相等
//	//if(5 == num)//常量放在等号的前面，更好的代码。
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else//else总是和最近的未匹配的if进行匹配（就近原则）
//            printf("haha\n");
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//            printf("haha\n");
//    return 0;
//}


//int main()
//{
//	int age = 50;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}//用{}指示语法块。
//	else
//	{if (age >= 18 && age < 28)
//		printf("壮年\n");
//	else if (age >= 28 && age < 50)//逻辑&&进行并列
//		printf("中年\n");
//	else
//		printf("老年\n");
//	}
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age >= 18 && age < 28)
//	//	printf("壮年\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("中年\n");
//	//else
//	//	printf("老年\n");
//	//int age = 17;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//int age = 20;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//	return 0;
//}