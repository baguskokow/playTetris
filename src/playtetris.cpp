/* #########################################
 *
 *      File: playncurses.cpp
 *
 *      Author : Bagus Koko Wibawanto
 *
 * ########################################
 *
 * */

#include "../include/playtetris.hpp"

PlayTetris::PlayTetris(int height, int width) {
	this->Height = height;
	this->Width = width;

	// Function to get current size of terminal
	getmaxyx(stdscr, CurrentHeightTerminal, CurrentWidthTerminal);
}

int PlayTetris::GetCurrentHeightTerminal() {
	return this->CurrentHeightTerminal;
}

int PlayTetris::GetCurrentWidthTerminal() {
	return this->CurrentWidthTerminal;
}
