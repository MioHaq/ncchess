#include <iostream>
#include <string>
#include <ncurses.h>

int main() {
	
	// Initializing ncurses
	initscr();
	noecho();
	cbreak();

	// get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *winboard = newwin(yMax - 10, xMax - 2, 1, 1);
	box(winboard, 0, 0);
	refresh();
	wrefresh(winboard);


	getch();
	endwin();
	return 0;
}
