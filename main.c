#include <kipr/botball.h>
#include </home/root/Documents/KISS/Alissa/meople/include/create_functions.h>
#include </home/root/Documents/KISS/Alissa/meople/include/create_comp_lib.h>
int main()
{	
    create_connect();
    set_up_meople();
    square_up_back_create(black,150);
	create_drive_direct(60,0); //moves right so that can align with tower to get top meople
    msleep (500);
    create_drive_direct(60,60); //forward 
    msleep (1000);
    create_drive_direct(-60,0); // claw on side of tower
    msleep (400);
    //slow_hand (100);
    //meople_extraction_left();

	create_disconnect();
    return 0;
}
