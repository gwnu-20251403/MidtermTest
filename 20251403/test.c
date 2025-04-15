#include <stdio.h>

void gotoxy(int x, int y) {

	// 콘솔에서 커서를 (x, y) 위치로 이동하는 함수
	printf("\033[%d;%dH", y, x);

}

void printHouse() {
	gotoxy(12, 1);
	printf("'");
	gotoxy(20, 1);
	printf("'");
	gotoxy(42, 1);
	printf("(\033[47m    \033[0m)");
	gotoxy(60, 1);
	printf("'");
	//첫째 줄

	gotoxy(2, 2);
	printf("'");
	gotoxy(8, 2);
	printf("'");
	gotoxy(42, 2);
	printf("(\033[47m   \033[0m)");
	gotoxy(52, 2);
	printf("'");
	//둘째 줄

	gotoxy(16, 3);
	printf("'");
	gotoxy(41, 3);
	printf("(\033[47m   \033[0m)");
	//셋째 줄

	gotoxy(6, 4);
	printf("'");
	gotoxy(14, 4);
	printf("'");
	gotoxy(41, 4);
	printf("(\033[47m  \033[0m(");
	gotoxy(55, 4);
	printf("/\\");
	//넷째 줄

	gotoxy(42, 5);
	printf(")\033[47m  \033[0m)");
	gotoxy(54, 5);
	printf("/  \\  /\\");
	//다섯째 줄

	gotoxy(19, 6);
	printf("________________________");
	gotoxy(43, 6);
	printf("|\033[47m  \033[0m|__");
	gotoxy(53, 6);
	printf("/\\/\\/\\/  \\");
	//여섯째 줄

	gotoxy(18, 7);
	printf("/\\\033[41m          ______       |\033[0m");
	printf("\033[47m  \033[41m|  \033[0m\\");
	gotoxy(52, 7);
	printf("/      \\/\\/\\");
	//일곱째 줄

	gotoxy(9, 8);
	printf("/\\");
	gotoxy(17, 8);
	printf("/\033[43m/_\033[0m\\\033[41m         \\    /\\      |\033[0m");
	printf("\033[47m  \033[41m|   \033[0m\\/            \\");
	//여덟째 줄

	gotoxy(1, 9);
	printf("   /\\  /  \\");
	gotoxy(16, 9);
	printf("/\033[43m/___\033[0m\\\033[41m         \\  /  \\     |\033[0m");
	printf("\033[47m  \033[41m|    \033[0m\\");


	gotoxy(1, 10);
	printf("  /  \\/\\/\\/\\");
	gotoxy(15, 10);
	printf("/\033[43m/_____\033[0m\\\033[41m         \\ |[]|     |\033[0m");
	printf("\033[47m  \033[41m|     \033[0m\\");


	gotoxy(1, 11);
	printf(" /\\/\\/\\     \\");
	gotoxy(14, 11);
	printf("/\033[43m/_______\033[0m\\\033[41m         \\|__|     |\033[0m");
	printf("\033[47m  \033[41m|      \033[0m\\");


	gotoxy(1, 12);
	printf("//      \\");
	gotoxy(13, 12);
	printf("/\033[43m/_________\033[0m\\\033[41m                  |\033[0m");
	printf("\033[47m  \033[41m|       \033[0m\\");
}

int main() {
	printHouse();

	return 0;
}