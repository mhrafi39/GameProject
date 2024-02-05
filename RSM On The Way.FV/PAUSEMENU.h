#ifndef PAUSEMENU_H_INCLUDED
#define PAUSEMENU_H_INCLUDED
#include"SCORE.h"
#include"Enemy_Plane.h"

bool pause = false;
bool fromPlay = false;

char pause_Image[][30] = { "pauseMenu\\pause.png" };

void pauseMenuShow(){
	iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(pause_Image[0]));
}
void pauseMenuImage(int mx, int my)
{
	if (mx >= 1114 && mx <= 1181 && my >= 630 && my <= 685)
	{
		 pause = true;
		 play = false;
	}

}
void pauseMenuControl(int mx, int my)
{
	if (mx >= 354 && mx <= 832 && my >= 346 && my <= 400)
	{
		pause = false;
		play = true;
	}
	else if (mx >= 354 && mx <= 832 && my >= 275 && my <= 329)
	{
		pause = false;
		settings = true;
		fromPlay = true;
	}
	else if (mx >= 354 && mx <= 832 && my >= 204 && my <= 263)
	{
		pause = false;
		gameOver = true;
		
	}

}



#endif // !PAUSEMENU_H_INCLUDED
