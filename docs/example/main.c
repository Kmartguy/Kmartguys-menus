#include <ncurses.h>
#include "kmgmenus.c"

int main(int argv, char **argc)
{
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	start_color();
	int out = kmg_menu_2("Please choose an option:", "Show message", "close", NULL, NULL);
	switch(out)
	{
		case 1:
			endwin();
			printf("Hello world!\n");
			break;
		case 2:
			endwin();
			break;
		default:
			endwin();
			printf("ERROR\n");
			break;
	}
	return 0;
}
