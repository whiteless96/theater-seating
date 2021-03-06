
/*****************************************************/
/**       ASSIGNMENT: Theater Seating Program       **/
/**             NAME: Learning Team B               **/
/**            CLASS: PRG 410                       **/
/**         DUE DATE: 03/26/2018                    **/
/**       INSTRUCTOR: Jibing Xiao                   **/
/*****************************************************/

// Includes ///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"

// Main function //////////////////////////////////////////////////////////////////////////////////

int main( int argc, char *argv[] ) {
	// Create seating manager instance
	CSeatingManager seatManager;

	// Show welcome message
	seatManager.WelcomeMsg();

	// Start main menu
	seatManager.runMainMenu();

	// Quit program after pause
	system( "pause" );

    return 0;
}

