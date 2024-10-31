/* #########################################
 *
 *      File: playtetris.hpp
 *
 *      Author : Bagus Koko Wibawanto
 *
 * ########################################
 *
 * */

#include <iostream>
#include <ncurses.h>

#ifndef __PLAYTETRIS
#define __PLAYTETRIS

class PlayTetris {
	private:
		int Height;
		int Width;

		// Current size of terminal
		int CurrentHeightTerminal;
		int CurrentWidthTerminal;
	public:
		PlayTetris(int, int);
		int GetCurrentHeightTerminal();
		int GetCurrentWidthTerminal();
		bool InitializeScreen();
		~PlayTetris();
};

#endif
