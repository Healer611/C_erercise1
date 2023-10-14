#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//选关界面：可以选择关卡进入[游戏界面], 或者回到[开始界面]
//游戏界面：可以移动人物，回退到[选关界面], 或者游戏胜利后展示[胜利界面]
//胜利界面：提示游戏胜利，并回到[选关界面]
//设置界面：展示[未完待续...]
//排行榜界面：展示[未完待续....]
/*
功能：打印菜单
	1.打印开始界面
	2.读取从键盘输入值
	3.返回对应的功能菜单

1.[选关界面] >> 将所选关卡传递给show()函数打印对应地图
2.[设置界面] >> 输出游戏操作说明：上w下s左a右d（大小写均可）
3.[排行榜界面] >> 选择关卡排行榜，读取对应关卡文件中游戏数据（按时间排序打印）
		示例：关卡一
				  云海：00:48
				  大超：01:10
				东东哥：05:20

4.[退出游戏] >> 退出程序运行

参数：void
返回值：void
*/
void menu();//开始界面和功能选择

/*
功能：根据menu函数选关的返回值，打印对应关卡的游戏地图

空地 0	    墙壁 1	
箱子 3	    目的地 4	
人 5	    箱子+目的地	7	 人+目的地	9

参数：对应关卡
返回值：void
*/
void show(int ch);//打印棋盘

/*
功能：运行游戏
1.在地图中找到玩家角色的位置，然后根据用户输入的方向键移动角色
	捕获用户按键：
				w或W向上移动
				s或S向下移动
				a或A向左移动
				d或D向右移动
2.如果角色前方是空地或目标点，直接移动过去；
3.如果前方是箱子，则判断箱子前方是否是空地或目标点，如果是，则同时移动角色和箱子。
4.移动过程中需要对地图上对应位置的数值进行修改。

参数：void
返回值：void
*/
void playGame();//玩游戏

/*
功能：1.如果有任意一个位置上的值为7（箱子和目的地），则游戏未结束，返回1；
	  2.否则，游戏已结束，返回0。

参数：void
返回值：1>>未结束，0>>已结束
*/
int isWin();//判断游戏输赢


int map[8][8] =
{
	1,1,1,1,1,1,1,1,
	1,0,4,0,1,1,1,1,
	1,0,3,0,0,1,1,1,
	1,0,0,0,0,1,1,1,
	1,1,0,5,1,1,1,1,
	1,1,1,0,0,0,0,1,
	1,0,0,0,1,1,1,1,
	1,1,1,1,1,1,1,1
};
//空地 0	墙壁 1	箱子 3	目的地 4	人 5	箱子+目的地	7	 人+目的地	9
void show() {
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			//区别绘制
			if (map[i][j] == 0)
			{
				printf("  ");
			}
			else if (map[i][j] == 1)
			{
				printf("##");
			}
			else if (map[i][j] == 3)
			{
				printf("@@");
			}
			else if (map[i][j] == 4)
			{
				printf("$$");
			}
			else if (map[i][j] == 5 || map[i][j] == 9)
			{
				printf("oo");
			}
			else if (map[i][j] == 7)
			{
				printf("xx");
			}
		}
		printf("\n");
	}
}

//判断游戏结束
int gameOver()
{
	int le = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (map[i][j] == 7)
			{
				le++;
				break;
			}
		}

	}
	return le;
}

//玩游戏
void playGame()
{
	int i;
	int j;
	//找人
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++) {
			if (map[i][j] == 5 || map[i][j] == 9)	//找到了
			{
				break;
			}
		}
		if (map[i][j] == 5 || map[i][j] == 9)	//找到了
		{
			break;
		}
	}
	//按键处理
	char ch = ' ';		//捕获用户按键
	ch = _getch();	//
	switch (ch)
	{
	case 'W':
	case 'w':
		//空地上走
		if (map[i - 1][j] == 0 || map[i - 1][j] == 4)
		{
			map[i][j] -= 5;
			map[i - 1][j] += 5;
		}
		//推箱子
		if (map[i - 1][j] == 3 || map[i - 1][j] == 7)
		{
			if (map[i - 2][j] == 0 || map[i - 2][j] == 4)
			{
				map[i][j] -= 5;
				map[i - 1][j] += 2;
				map[i - 2][j] += 3;
			}
		}
		break;
	case 'S':
	case 's':
		if (map[i + 1][j] == 0 || map[i + 1][j] == 4)
		{
			map[i][j] -= 5;
			map[i + 1][j] += 5;
		}
		if (map[i + 1][j] == 3 || map[i + 1][j] == 7)
		{
			if (map[i + 2][j] == 0 || map[i + 2][j] == 4)
			{
				map[i][j] -= 5;
				map[i + 1][j] += 2;
				map[i + 2][j] += 3;
			}
		}
		break;
	case 'A':
	case 'a':
		if (map[i][j - 1] == 0 || map[i][j - 1] == 4)
		{
			map[i][j] -= 5;
			map[i][j - 1] += 5;
		}
		if (map[i][j - 1] == 3 || map[i][j - 1] == 7)
		{
			if (map[i][j - 2] == 0 || map[i][j - 2] == 4)
			{
				map[i][j] -= 5;
				map[i][j - 1] += 2;
				map[i][j - 2] += 3;
			}
		}
		break;
	case 'D':
	case 'd':
		if (map[i][j + 1] == 0 || map[i][j + 1] == 4)
		{
			map[i][j] -= 5;
			map[i][j + 1] += 5;
		}
		if (map[i][j + 1] == 3 || map[i][j + 1] == 7)
		{
			if (map[i][j + 2] == 0 || map[i][j + 2] == 4)
			{
				map[i][j] -= 5;
				map[i][j + 1] += 2;
				map[i][j + 2] += 3;
			}
		}
		break;
	default:
		break;
	}
}

int main()
{
	int le = 0;
	while (1)
	{
		show();
		//检测用户按键
		playGame();
		//刷新
		system("cls");
		le = gameOver();
		if (le)
		{
			printf("***Win***");
			exit(0);
		}
	}
	return 0;
}