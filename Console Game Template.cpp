#include <iostream>
#include <conio.h>
using namespace std;

string grid[10][10] = {
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
	                   {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "}     
};

void show_grid() {
	for(int n = 0; n < 10; n++) {
		for(int i = 0; i < 10; i++) {
			cout << grid[n][i];
			cout << " ";
		}
		cout << endl;
	}
}

int main() {
	int x = 4;
	int y = 5;
	grid[5][4] = "@";
	while(true) {
		show_grid();
		switch(getch()) {
			case 'w':
				y -= 1;
				grid[y + 1][x] = " ";
				break;
			case 's':
				y += 1;
				grid[y - 1][x] = " ";
				break;
			case 'a':
				x -= 1;
				grid[y][x + 1] = " ";
				break;
			case 'd':
				x += 1;
				grid[y][x - 1] = " ";
				break;
				
		}
		switch(x) {
			case -1:
				x = 0;
				break;
			case 10:
				x = 9;
				break;
		}
		switch(y) {
			case -1:
				y = 0;
				break;
			case 10:
				y = 9;
				break;
		}
		grid[y][x] = "@";
		system("cls");
		
	}
	return 0;
}
