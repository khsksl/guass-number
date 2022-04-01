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
		printf("请选择（1/0）：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			system("cls");			
			game();
			printf("您总共猜测了%d次\n",count);
			if (count == 1)
			{
				printf("哇哦，天选之子！\n");
			}
			else if ((count) > 1 && (count) <= 7)
			{
				printf("基本操作，不要骄傲。\n");
			}
			else
			{
				printf("你太逊了!\n");
			}
			system("pause");
			break;
		case 0:
			system("cls");
			printf("************************\n");
			printf("*退出游戏，欢迎下次再玩*\n");
			printf("************************\n");
			break;
		default:
			system("cls");
			printf("******************************\n");
			printf("*亲，请不要捣乱哦(请重新选择)*\n");
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
//1.生成一个随机数
	int random;
	int user_gusse;
	//time_t time(time_t *timer)
	//time_t <time.h>
	//srand((unsigned int) time(NULL));(常放置于主函数内)
	//strand内置一个无符号整型使生成的随机数变化，用时间戳设置生成随机数的起始点
	random = rand() % 100 + 1;//rand（）函数生成（伪）随机数
	//rand() % 100 + 1 生成1~100
	//利用时间戳
	//当前计算机的时间减去计算机的起始时间（1979年1月日0时0分0秒）单位s = （xxxxx）s
	//printf("%d\n",random);
	while (1)
	{
		printf("请猜数字(1~100)：");
		scanf("%d", &user_gusse);
		if (user_gusse > random) 
		{
			printf("偏大了\n");
			count ++;
		}
		else if (user_gusse < random)
		{
			printf("偏小了\n");
			count ++;
		}
		else
		{
			printf("恭喜你猜对了\n");
			count ++;
			system("pause");
			break;
		}
	}
}