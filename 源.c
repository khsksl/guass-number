#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void menu();
void game();
int count = 0;
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do 
	{	
		menu();
		printf("��ѡ��1/0����");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			system("cls");			
			game();
			printf("���ܹ��²���%d��\n",count);
			if (count == 1)
			{
				printf("��Ŷ����ѡ֮�ӣ�\n");
			}
			else if ((count) > 1 && (count) <= 7)
			{
				printf("������������Ҫ������\n");
			}
			else
			{
				printf("��̫ѷ��!\n");
			}
			system("pause");
			break;
		case 0:
			system("cls");
			printf("************************\n");
			printf("*�˳���Ϸ����ӭ�´�����*\n");
			printf("************************\n");
			break;
		default:
			system("cls");
			printf("******************************\n");
			printf("*�ף��벻Ҫ����Ŷ(������ѡ��)*\n");
			printf("******************************\n");
			system("pause");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
void menu()
{
	system("cls");
	printf("**********************\n");
	printf("****    1.PLAY    ****\n");
	printf("****    0.EXIt    ****\n");
	printf("**********************\n");
}
void game()
{
//1.����һ�������
	int random;
	int user_gusse;
	//time_t time(time_t *timer)
	//time_t <time.h>
	//srand((unsigned int) time(NULL));(����������������)
	//strand����һ���޷�������ʹ���ɵ�������仯����ʱ��������������������ʼ��
	random = rand() % 100 + 1;//rand�����������ɣ�α�������
	//rand() % 100 + 1 ����1~100
	//����ʱ���
	//��ǰ�������ʱ���ȥ���������ʼʱ�䣨1979��1����0ʱ0��0�룩��λs = ��xxxxx��s
	//printf("%d\n",random);
	while (1)
	{
		printf("�������(1~100)��");
		scanf("%d", &user_gusse);
		if (user_gusse > random) 
		{
			printf("ƫ����\n");
			count ++;
		}
		else if (user_gusse < random)
		{
			printf("ƫС��\n");
			count ++;
		}
		else
		{
			printf("��ϲ��¶���\n");
			count ++;
			system("pause");
			break;
		}
	}
}