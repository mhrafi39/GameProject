#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include"Sound.h"
#include"score.h"


//-----------------------------------------------------Loading Screen-----------------------------------------------------------------

void showLoading()
{
	char loadingScreen[][40] = { "main_menu\\loading\\loadScreen.jpg" };
	iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(loadingScreen[0]));
	if (pressSpace)
	{
		iText(160, 80, pressScpaceText, GLUT_BITMAP_HELVETICA_18);
	}
	
}
void text()
{
	if (pressSpace)
		pressSpace = false;
	else
		pressSpace = true;
}


//-----------------------------------------------------Showing Main Menu--------------------------------------------------------------
void showMenu()
{
	if (menu_index >= 0 && menu_index<5)
		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(mainMenuImage[menu_index]));
	else if (menu_index < 0)
	{
		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(mainMenuImage[0]));
		menu_index = 4;
	}
	else if (menu_index >= 4)
	{
		menu_index = 0;
		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(mainMenuImage[4]));
	}
}

void selectMenuOption(int n)
{
	switch (n)
	{
		case 0:
			mainMenu = false;
			play = true;
			fieldActive = true;
			mute();
			break;
		case 1:
			instructions = true;
			mainMenu = false;
			music();
			break;
		case 2:
			highScores = true;
			getScore();
			sortScores();
			mainMenu = false;
			music();
			break;
		case 3:
			settings = true;
			mainMenu = false;
			music();
			break;
		case 4:
			quite = true;
			exit(0);
	}

}

//----------------------------------------------------Main Menu Functions----------------------------------------------------------
void playGame()
{

}
void showInstructions()
{
	iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(instructionImage[0]));

}

void showHighScore()
{
	iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(highScoreImage[0]));
	show_Score();
}
void showSettings()
{
	iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(settingsImage[settings_index]));
}
void showExit()
{
	exit(0);

}


#endif // !MENU_H_INCLUDED
