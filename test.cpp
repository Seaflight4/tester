#include <ncurses.h>

void print_start_page()
{
		mvprintw(0,0,":>***********************************************************************************************");
    mvprintw(1,0,":");
    mvprintw(2,0,"::,");
    mvprintw(3,0,"::::::,':");
    mvprintw(4,0,":[:.,':::");
    mvprintw(5,0,"Vv:::::.,...,,;:'d:");
    mvprintw(6,0,":>::::/:###     ##");
    mvprintw(7,0,"::8*::':  ##    ##  ####  #####   #   ##   ####");
    mvprintw(8,0,"::>:::::|  ##   ##   ##   #   ##  #   ##  ##   ");
    mvprintw(9,0,";:::cD:     ##  ##   ##   #####   #   ##   ####");
   mvprintw(10,0,"::B::;       ## ##   ##   #  ##   #   ##      ##");
   mvprintw(11,0,"{::G:.,::     ####  ####  #   ##   #####  #####");
   mvprintw(12,0,"::::':");
   mvprintw(13,0,":::::|                   ####   ##    ##  ##   ##  ####      ####   ####   ####   ##    ##");
   mvprintw(14,0,".,::                      ##    # #   ##   #   ##  #  ##    ##       ##   #   ##  # #   ##");
   mvprintw(15,0,":G                        ##    #  #  ##    #  ##  ######    ####    ##   #   ##  #  #  ##");
   mvprintw(16,0,":{{:::::<                 ##    #   # ##     # ##  #    ##      ##   ##   #   ##  #   # ##");
   mvprintw(17,0,"::                       ####   #    ###      ###  #     ##  ####   ####   ####   #    ###");
   mvprintw(18,0,":+{{::::::L>::::{{::");
   mvprintw(19,0,":Vv:::::.,..");
   mvprintw(20,0,":::Vv:::::.,..:");
   mvprintw(21,0,"::::<::::{{::::}:{{::::{{::::");
   mvprintw(22,0,":Vv:::::.,..Vv:::::.,..Vv:::::.,..Vv:::::.,..");
   mvprintw(23,0,",*****************************************************************************************************");
}

int main()
{
	initscr();
	raw();
	noecho();
	keypad(stdscr, true);
    	refresh();


	start_color();
	init_pair(0, COLOR_RED, COLOR_BLACK);
	init_pair(1, COLOR_GREEN, COLOR_BLACK);

	
	for (int i = 0; i < 10; i++)
	{
		attron(COLOR_PAIR(i%2));
		print_start_page();
		attroff(COLOR_PAIR(i%2));
		refresh();
		napms(300);
	}
	
	mvprintw(25,25, "Press Enter to Start Game >>>");
	refresh();
	getch();
	endwin();
	return 0;
}
