/* #########################################
 *
 *      File: main.cpp
 *
 *      Author : Bagus Koko Wibawanto
 *
 * ########################################
 *
 * */

#include "../include/playtetris.hpp"

#define HEIGHT 20
#define WIDTH 10

int main() {
	PlayTetris* Tetris = new PlayTetris(HEIGHT, WIDTH);

	// Exception Handling
	try {
		if(Tetris->GetCurrentHeightTerminal() < HEIGHT || Tetris->GetCurrentWidthTerminal() < WIDTH) {
			throw "Terminal is too small";
		}

		//Tetris->Menu();
	}

	catch(const char* error) {
		Tetris->~PlayTetris();

		std::cout << error << "\nThis game can't run on small terminal. Please resize your terminal to play the game";
	}

	delete Tetris;
	
	return 0;
}
