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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");//1-7����������
		break;
	}
	//case 1:
	//	printf(" ����һ\n");
	//	break;
	//case 2:
	//	printf(" ���ڶ�\n");
	//	break;
	//case 3:
	//	printf(" ������\n");
	//	break;
	//case 4:
	//	printf(" ������\n");
	//	break;
	//case 5:
	//	printf(" ������\n");
	//	break;
	//case 6:
	//	printf(" ������\n");
	//	break;
	//case 7:
	//	printf(" ������\n");
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
//		printf("����\n");
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (num = 5)// = ��ֵ��==�ж����
//	//if(5 == num)//�������ڵȺŵ�ǰ�棬���õĴ��롣
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
//        else//else���Ǻ������δƥ���if����ƥ�䣨�ͽ�ԭ��
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
//		printf("δ����\n");
//		printf("����̸����\n");
//	}//��{}ָʾ�﷨�顣
//	else
//	{if (age >= 18 && age < 28)
//		printf("׳��\n");
//	else if (age >= 28 && age < 50)//�߼�&&���в���
//		printf("����\n");
//	else
//		printf("����\n");
//	}
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age >= 18 && age < 28)
//	//	printf("׳��\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("����\n");
//	//else
//	//	printf("����\n");
//	//int age = 17;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//int age = 20;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//	return 0;
//}