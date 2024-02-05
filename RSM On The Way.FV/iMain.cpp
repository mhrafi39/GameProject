#define _CRT_SECURE_NO_WARNINGS

#include "iGraphics.h"
#include<iostream>
#include"Variables.h"
#include"Menu.h"
#include"Sound.h"
#include"SCORE.h"
#include"LIFE.h"
#include"PAUSEMENU.h"
#include "background.h"
#include "Enemy_Plane.h"
#include "Main_plane.h"

using namespace std;


//::::::::::::::::::::::::::::::::::::::::::::::::::::::RSM on the way::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


void iDraw()
{
	iClear();
	//--------------------------------------------------Showing Loading Screen-------------------------------------------------------------//
	if (loadingScreen)
	{
		showLoading();
	}
	//--------------------------------------------------Showing Main Menu------------------------------------------------------------------//
	else if (mainMenu)
	{
		showMenu();
	}
	else if (play)
	{
		if (fieldActive)
		{
			showchar();
			
		}

		if (!fieldActive){

			nameInputComplete = true;
				background_ren();
			
			//---------------------------------------------------------------------------plane------------------------------------------------------

			if (game_start == false)
			{
				iShowBMP2(plane1_x, plane1_y, plane1, 0);
			}

			//----------------------------------------------------------------------------character------------------------------------------------------------------------

			if (right_bool == true)
			{
				if (!stand_position){

					iShowBMP2(running_x, running_y, running_forward[running_index], 0);
					stand_counter++;
					if (stand_counter >= 100)
					{
						stand_counter = 0;
						running_index = 0;
						stand_position = true;
						left_bool = true;
					}
				}
				else
				{
					iShowBMP2(running_x, running_y, running_forward[0], 0);
				}
			}
			else if (left_bool == true)
			{
				if (!stand_position){

					iShowBMP2(running_x, running_y, running_backward[running_index], 0);
					stand_counter++;
					if (stand_counter >= 100)
					{
						stand_counter = 0;
						running_index = 0;
						stand_position = true;
						right_bool = true;
					}
				}
				else
				{
					iShowBMP2(running_x, running_y, running_backward[0], 0);
				}
			}

			life_bool();

			//-----------------------------------------------------------------main plane + main plane missile--------------------------------------------

			if (game_start == true)
			{
				//------------------------------- ----------------------------enemy plane-----------------------------



				//------------------------------------------------------------ main plane + missile-----------------------
				if (img3_bool == true)
				{
					iShowBMP2(img3_x, img3_y, img3, 0);
				}
				if (img6_bool == true)
				{
					iShowBMP2(img6_x, img6_y, img6, 0);
				}
				if (img2_bool == true)
				{
					iShowBMP2(img2_x, img2_y, img2, 0);
				}
				zombieMovement();
			}
			//------------------------------------------------------------enemy missile explosion rendering---------------------------------------------
			if (main_plane_explosion == true)
			{
				iShowBMP2(img2_x + 40, img2_y + 20, main_plane_collision_rendering[k], 0);
			}


			showScore();
			
		}
	
	}
	//---------------------------------------------------Showing Instructions---------------------------------------------------------------//
	else if (instructions)
	{
		showInstructions();
	}
	//---------------------------------------------------Showing High Score------------------------------------------------------------------//
	else if (highScores)
	{
		showHighScore();
	}
	//----------------------------------------------------Shwoing Settings---------------------------------------------------------------------------//
	else if (settings)
	{
		showSettings();
	}
	//-----------------------------------------------------Showimg Exit-----------------------------------------------------------------------------//
	else if (quite)
	{
		showExit();
	}
	if (pause)
		pauseMenuShow();
	if (gameOver)
	{
		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(gameOverImage[0]));
		iText(600, 580, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(615, 550, scoreString, GLUT_BITMAP_TIMES_ROMAN_24);
	}

}





void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		cout << mx << " " << my << endl;
		if (play)
		{
			pauseMenuImage(mx, my);
		}
		if (pause)
		{
			pauseMenuControl(mx, my);
		}
		
	}
	
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
	
}



void iKeyboard(unsigned char key)
{
	if (fieldActive){
		takeinput(key);
	}


	if (key == '\r')
	{
		if (mainMenu)
		{
			selectMenuOption(menu_index);
		}
		else if (play)
		{
			if (nameInputComplete){
				//----------------------------------------------------background rendering--------------------------------------------------
				background_bool = true;
				//-----------------------------------------------------character-----------------------------------------------------
				right_bool = false;
				left_bool = false;
				game_start = true;
				music();
			}
		}
		if (gameOver)
		{
			game_over();

			mainMenu = true;	
			gameOver = false;
		}
	}
	if (key == ' ')
	{
		if (loadingScreen)
		{
			mainMenu = true;
			loadingScreen = false;
			mute();
		}
		
	}
	if (key == 'b'|| key=='B')
	{
		if (!fromPlay){
			mainMenu = true;
			loadingScreen = false;
			instructions = false;
			highScores = false;
			play = false;
			mute();
		}

		if (fromPlay)
		{
			settings = false;
			play = true;
			fromPlay = false;
		}
	}
	if (key == 'M' || key == 'm')
	{
		if (settings)
		{
			if (playSound)
			{
				playSound = false;
				mciSendString("stop sound//LoadingScreenMusic.wav", NULL, 0, NULL);
				settings_index++;
			}
			else
			{
				playSound = true;
				music();
				settings_index--;
			}
		}
	}
	//-------------------------------Mahdi----------------------------------------------------
	if (key == 'e')
	{
		//----------------------------------------------------background rendering--------------------------------------------------
		background_bool = false;
		//-----------------------------------------------------character-------------------------------------------------------
		right_bool = true;
		left_bool = true;
		//-----------------------------------------------------game_start------------------------------------------------------
		game_start = false;
		//-----------------------------------------------------------------------------------------------------------------------
	}


	if (key == 'f')
	{
		//------------------------------------------------------------------main plane missile---------------------------------
		if (nameInputComplete&&play){
			fire++;
			if (fire==1)
			{
				shoot1 = true;
			}
			if (fire==2)
			{
				shoot2 = true;
				fire = 0;
			}
			if ((shoot1 || shoot2) && nameInputComplete)
			{
				missileSound();
			}


			iSetTimer(n, change_missile);

			iSetTimer(25, enemy_plane_collision);
			n = n * 10;
		}
		//-----------------------------------------------------------------------------------------------------------
	}
	
	
}

void iSpecialKeyboard(unsigned char key)
{
	
	if (key == GLUT_KEY_UP)
	{
		if (mainMenu)
		{
			menu_index--;
			clickSound();
		}
		else if (play)
		{
			//-------------------------------------------------------------- main plane control------------------------------------------
			img2_y += img2_dy;

			if (shoot1 == false)
			{
				img3_y += img2_dy;
			}
			if (shoot2 == false)
			{
				img6_y += img2_dy;
			}
		}
	}
	if (key == GLUT_KEY_DOWN)
	{
		if (mainMenu)
		{
			menu_index++;
			clickSound();
		}
		else if (play)
		{
			//-------------------------------------------------------------- main plane control------------------------------------------
			img2_y -= img2_dy;

			if (shoot1 == false)
			{
				img3_y -= img2_dy;
			}
			if (shoot2 == false)
			{
				img6_y -= img2_dy;
			}
		}
		
	}
	if (key == GLUT_KEY_RIGHT)
	{
		if (play)
		{
			//--------------------------------------------------------------character---------------------
			if (right_bool == true)
			{
				right_bool = true;
				left_bool = false;
				running_x += 10;
				running_index++;
				if (running_index >= 7)
				{
					running_index = 0;
				}
				stand_position = false;
			}
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		if (play)
		{
			//-----------------------------------------------------------------character-----------------------------------
			if (left_bool == true)
			{
				right_bool = false;
				left_bool = true;
				running_x -= 10;
				running_index++;
				if (running_index >= 7)
				{
					running_index = 0;
				}
				stand_position = false;
			}
		}


	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}

	
}

//-------------------------------------------------------------chnageable
void change_explosion()
{
	k++;
	if (k >= 8)
	{
		k = 0;
	}
}
void boss_change_explosion()
{
	p++;
	if (p >= 8)
	{
		p = 0;
	}
}
void check1()  //explosion
{
	m1_bool = false;
}

void check2()  //explosion
{
	m2_bool = false;
}



int main()
{
	positionfunction();
	
	iSetTimer(30, change_background);
	//iSetTimer(10, change_Life);

	//--------------------------------
	iSetTimer(50, change_explosion);
	iSetTimer(1300, check1);
	iSetTimer(1300, check2);




	setZombieVariable();
	iSetTimer(40, change);
	iSetTimer(40, enemy_missile_change);

	iSetTimer(50, life_check);

	

	//showScoreInMenu();
	iInitialize(screenWidth, screenHeight, "RSM on the way");
	iSetTimer(500, text);
	music();
	iStart();
	return 0;
}