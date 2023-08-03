#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//char类型溢出
//#include <string.h>
//int main()
//{
//	char a[1000];
//	for (int i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//		printf("%d ", a[i]);
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//死循环，unsigned char范围为0-255，不能大于”255“，大于后变为零。
//unsigned char i = 0;
//int main()
//{
//	for (int i = 0; i <= 255; i++) {
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf(" % d % d", a + b, c);
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++) {
//		for (B = 1; B <= 5; B++) {
//			if (A == B) continue;
//			for (C = 1; C <= 5; C++) {
//				if (C == A || C == B) continue;
//				for (D = 1; D <= 5; D++) {
//					if (D == A || D == B || D == C) continue;
//					E = 15 - A - B - C - D;
//					if ((B == 2 || A == 3) && (B == 2 || E == 4) &&
//						(C == 1 || D == 2) && (C == 5 || D == 3) && (E == 4 || A == 1)) {
//						printf("%d %d %d %d %d\n", A, B, C, D, E);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main()
//{
//	char judge;
//	for (char s = 'A'; s <= 'D'; s++) {
//		int truth = 0;
//		for (char ss = 'A'; ss <= 'D'; ss++) {
//			if ((ss == 'A' && s != 'A') || 
//				(ss == 'B' && s == 'C') ||
//				(ss == 'C' && s == 'D') || 
//				(ss == 'D' && s != 'D')) {
//				truth++;
//			}
//		}
//		if (truth == 3) {
//			judge = s;
//			break;
//		}
//	}
//	printf("%c\n", judge);
//	return 0;
//}


//在屏幕上打印杨辉三角。
//   1
//  1 1
// 1 2 1
//1 3 3 1
//……
//0001
//00101
//010201
//1030301
//int main()
//{
//	int i,rows,s,j,c;
//	scanf("%d", &rows);
//	for (i = 1; i <= rows; i++) {
//		for (s = 1; s <= rows - i; s++) {
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++) {
//			if (j == 0 ||i == 0)
//				c = 1;
//			else
//				c = c * (i - j + 1) / j;
//			printf("%d ", c);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//-------------GPT---------------
//int main() {
//    int rows, coef = 1, space, i, j;
//
//    printf("请输入杨辉三角的行数：");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++) {
//            printf("  ");
//        }
//
//        for (j = 0; j <= i; j++) {
//            if (j == 0 || i == 0) {
//                coef = 1;
//            }
//            else {
//                coef = coef * (i - j + 1) / j;
//            }
//            printf("%4d", coef);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    int n = 9;
//    float* pFloat = (float*)&n;
//    printf("n的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//
//    *pFloat = 9.0;
//    printf("num的值为：%d\n", n);
//    printf("*pFloat的值为：%f\n", *pFloat);
//    return 0;
//}

