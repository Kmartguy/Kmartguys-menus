#include <ncurses.h>
#include <string.h>
#include <stdlib.h>

int menu_2(char *title, char *entrya, char *entryb, int exit_key, int leave_key)
{
	raw();
	noecho();
	keypad(stdscr, TRUE);	
	int x, y, out, row, col, op, keypress;
	_Bool go = 1;
	init_pair(1 , COLOR_BLACK, COLOR_WHITE);
        getmaxyx(stdscr, row, col);
        x = row / 2;
	op = 0;
	while (go == 1)
	{
	start:
	clear();
	switch (op)
        {
        case 0:
		goto c_one;
	case 1:
		c_one:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		attron(COLOR_PAIR(1));
                mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attroff(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
		out = 1;
                break;

        case 2:
      		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attron(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attroff(COLOR_PAIR(1));
                out = 2;
                break;
        default:
                out = -1;

        }
	keypress = getch();
	switch(keypress)
	{
	case KEY_UP:
		op--;
		break;
	case KEY_DOWN:
		op++;
		break;
	case 10:
		goto end;
		break;
	default:
		if (keypress == exit_key)
		{
			endwin();
			exit(0);
		}
		else if (keypress == leave_key)
		{
			out = 0;
			goto end;
		}
	}
	if (op > 2)
	{
		op = 1;
	}
	else if (op < 1)
	{
		op = 2;
	}
	goto start;
	end:
	break;
	}
	clear();
	return out;

}

int menu_3(char *title, char *entrya, char *entryb, char *entryc, int exit_key, int leave_key)
{
	raw();
	noecho();
	keypad(stdscr, TRUE);	
	int x, y, out, row, col, op, keypress;
	_Bool go = 1;
	init_pair(1 , COLOR_BLACK, COLOR_WHITE);
        getmaxyx(stdscr, row, col);
        x = row / 2;
	op = 0;
	while (go == 1)
	{
	start:
	clear();
	switch (op)
        {
        case 0:
		goto c_one;
	case 1:
		c_one:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		attron(COLOR_PAIR(1));
                mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attroff(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
		out = 1;
                break;

        case 2:
      		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attron(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attroff(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
		out = 2;
                break;
        case 3:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attron(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attroff(COLOR_PAIR(1));
		out = 3;
                break;
        default:
                out = -1;

        }
	keypress = getch();
	switch(keypress)
	{
	case KEY_UP:
		op--;
		break;
	case KEY_DOWN:
		op++;
		break;
	case 10:
		goto end;
		break;
	default:
		if (keypress == exit_key)
		{
			endwin();
			exit(0);
		}
		else if (keypress == leave_key)
		{
			out = 0;
			goto end;
		}
	}
	if (op > 3)
	{
		op = 1;
	}
	else if (op < 1)
	{
		op = 3;
	}
	goto start;
	end:
	break;
	}
	clear();
	return out;

}

int menu_4(char *title, char *entrya, char *entryb, char *entryc, char *entryd, int exit_key, int leave_key)
{
	raw();
	noecho();
	keypad(stdscr, TRUE);	
	int x, y, out, row, col, op, keypress;
	_Bool go = 1;
	init_pair(1 , COLOR_BLACK, COLOR_WHITE);
        getmaxyx(stdscr, row, col);
        x = row / 2;
	op = 0;
	while (go == 1)
	{
	start:
	clear();
	switch (op)
        {
        case 0:
		goto c_one;
	case 1:
		c_one:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		attron(COLOR_PAIR(1));
                mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attroff(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		out = 1;
                break;

        case 2:
      		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attron(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attroff(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		out = 2;
                break;
        case 3:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attron(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attroff(COLOR_PAIR(1));
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		out = 3;
                break;
        case 4:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attron(COLOR_PAIR(1));
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
                attroff(COLOR_PAIR(1));
		out = 4;
                break;
        default:
                out = -1;

        }
	keypress = getch();
	switch(keypress)
	{
	case KEY_UP:
		op--;
		break;
	case KEY_DOWN:
		op++;
		break;
	case 10:
		goto end;
		break;
	default:
		if (keypress == exit_key)
		{
			endwin();
			exit(0);
		}
		else if (keypress == leave_key)
		{
			out = 0;
			goto end;
		}
	}
	if (op > 4)
	{
		op = 1;
	}
	else if (op < 1)
	{
		op = 4;
	}
	goto start;
	end:
	break;
	}
	clear();
	return out;

}
int menu_5(char *title, char *entrya, char *entryb, char *entryc, char *entryd, char *entrye, int exit_key, int leave_key)
{
	raw();
	noecho();
	keypad(stdscr, TRUE);	
	int x, y, out, row, col, op, keypress;
	_Bool go = 1;
	init_pair(1 , COLOR_BLACK, COLOR_WHITE);
        getmaxyx(stdscr, row, col);
        x = row / 2;
	op = 0;
	while (go == 1)
	{
	start:
	clear();
	switch (op)
        {
        case 0:
		goto c_one;
	case 1:
		c_one:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		attron(COLOR_PAIR(1));
                mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attroff(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		out = 1;
                break;
		
        case 2:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attron(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attroff(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		out = 2;
                break;
        case 3:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attron(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attroff(COLOR_PAIR(1));
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		out = 3;
                break;
        case 4:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attron(COLOR_PAIR(1));
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
                attroff(COLOR_PAIR(1));
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		out = 4;
                break;
	case 5:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
                attron(COLOR_PAIR(1));
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		attroff(COLOR_PAIR(1));
		out = 5;
                break;
        default:
                out = -1;

        }
	keypress = getch();
	switch(keypress)
	{
	case KEY_UP:
		op--;
		break;
	case KEY_DOWN:
		op++;
		break;
	case 10:
		goto end;
		break;
	default:
		if (keypress == exit_key)
		{
			endwin();
			exit(0);
		}
		else if (keypress == leave_key)
		{
			out = 0;
			goto end;
		}
	}
	if (op > 5)
	{
		op = 1;
	}
	else if (op < 1)
	{
		op = 5;
	}
	goto start;
	end:
	break;
	}
	clear();
	return out;

}
int menu_6(char *title, char *entrya, char *entryb, char *entryc, char *entryd, char *entrye, char *entryf, int exit_key, int leave_key)
{
	raw();
	noecho();
	keypad(stdscr, TRUE);	
	int x, y, out, row, col, op, keypress;
	_Bool go = 1;
	init_pair(1 , COLOR_BLACK, COLOR_WHITE);
        getmaxyx(stdscr, row, col);
        x = row / 2;
	op = 0;
	while (go == 1)
	{
	start:
	clear();
	switch (op)
        {
        case 0:
		goto c_one;
	case 1:
		c_one:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		attron(COLOR_PAIR(1));
                mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attroff(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		mvprintw(x+5, (col-strlen(entryf))/2, "%s", entryf);
		out = 1;
                break;
        case 2:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                attron(COLOR_PAIR(1));
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attroff(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		mvprintw(x+5, (col-strlen(entryf))/2, "%s", entryf);
		out = 2;
                break;
        case 3:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                attron(COLOR_PAIR(1));
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attroff(COLOR_PAIR(1));
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		mvprintw(x+5, (col-strlen(entryf))/2, "%s", entryf);
		out = 3;
                break;
        case 4:
                mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                attron(COLOR_PAIR(1));
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
                attroff(COLOR_PAIR(1));
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		mvprintw(x+5, (col-strlen(entryf))/2, "%s", entryf);
		out = 4;
                break;
	case 5:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
                attron(COLOR_PAIR(1));
		mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		attroff(COLOR_PAIR(1));
		mvprintw(x+5, (col-strlen(entryf))/2, "%s", entryf);
		out = 5;
                break;
	case 6:
		mvprintw(x-2, (col-strlen(title))/2, "%s", title);
		mvprintw(x, (col-strlen(entrya))/2, "%s", entrya);
                mvprintw(x+1, (col-strlen(entryb))/2, "%s", entryb);
                mvprintw(x+2, (col-strlen(entryc))/2, "%s", entryc);
                mvprintw(x+3, (col-strlen(entryd))/2, "%s", entryd);
                mvprintw(x+4, (col-strlen(entrye))/2, "%s", entrye);
		attron(COLOR_PAIR(1));
		mvprintw(x+5, (col-strlen(entryf))/2, "%s", entryf);
		attroff(COLOR_PAIR(1));
		out = 6;
                break;

        default:
                out = -1;

        }
	keypress = getch();
	switch(keypress)
	{
	case KEY_UP:
		op--;
		break;
	case KEY_DOWN:
		op++;
		break;
	case 10:
		goto end;
		break;
	default:
		if (keypress == exit_key)
		{
			endwin();
			exit(0);
		}
		else if (keypress == leave_key)
		{
			out = 0;
			goto end;
		}
	}
	if (op > 6)
	{
		op = 1;
	}
	else if (op < 1)
	{
		op = 6;
	}
	goto start;
	end:
	break;
	}
	clear();
	return out;

}
