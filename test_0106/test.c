#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");//1-7以外的输出。
		break;
	}
	//case 1:
	//	printf(" 星期一\n");
	//	break;
	//case 2:
	//	printf(" 星期二\n");
	//	break;
	//case 3:
	//	printf(" 星期三\n");
	//	break;
	//case 4:
	//	printf(" 星期四\n");
	//	break;
	//case 5:
	//	printf(" 星期五\n");
	//	break;
	//case 6:
	//	printf(" 星期六\n");
	//	break;
	//case 7:
	//	printf(" 星期天\n");
	//	break;
	//}
	return 0;
}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	int a = num % 2;
//	if (1 == a)
//		printf("奇数\n");
//	return 0;
//}
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