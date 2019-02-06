#include <kipr/botball.h>
#include </home/root/Documents/KISS/Alissa_Morgan/meople/include/create_functions.h>
#include </home/root/Documents/KISS/Alissa_Morgan/meople/include/create_comp_lib .h>
int main()
{	
    create_connect();
    slow_arm (600);
    /*slow_arm (1000);
    slow_hand (1200);
    square_up_back_create(black,-60);
    meople_1();
    square_up_back_create(black,-60);
    create_drive_direct (0,0);
    meople_extraction_top();*/
    /*create_drive_direct (50,50); // go y amount of distance before conditional linefollow
    msleep (1000);*/
	create_disconnect();
    return 0;
}
