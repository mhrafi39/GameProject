#ifndef background_H_INCLUDED
#define background_H_INCLUDED
#include"Variables.h"

//-------------------------------------------------------------------background--------------------------------------------------------
void background_ren(){
	
	if (counter_ren == 1){
		int i = 0;

		if (background_bool == true)
		{
			for (i = 0; i < 150; i++)
			{
				iShowBMP(position[i], 0, background[i]);
			}
		}
		else
		{
			iShowBMP(0, 0, still);
		}
	}
	else if (counter_ren == 2){
		int i = 0;

		if (background_bool == true)
		{
			for (i = 0; i < 150; i++)
			{
				iShowBMP(position[i], 0, background1[i]);
			}
		}
		else
		{
			iShowBMP(0, 0, still1);
		}
	}
	else if (counter_ren == 3){
		int i = 0;

		if (background_bool == true)
		{
			for (i = 0; i < 150; i++)
			{
				iShowBMP(position[i], 0, background2[i]);
			}
		}
		else
		{
			iShowBMP(0, 0, still2);
		}
	}
}
void change_background()
{
	if (counter_ren == 1 || counter_ren == 2 || counter_ren == 3){
		for (int i = 0; i < 150; i++)
		{
			position[i] -= width;
			if (position[i] < 0)
			{
				position[i] = (slice*width) - width;
			}
		}
	}
}

void positionfunction()
{
	if (counter_ren == 1){
		int i, j;
		for (i = 0, j = 0; i < slice; i++)
		{
			position[i] = j;
			j += width;

		}
	}
	else if (counter_ren == 2){
		int i, j;
		for (i = 0, j = 0; i < slice; i++)
		{
			position[i] = j;
			j += width;

		}
	}
	else if (counter_ren == 3){
		int i, j;
		for (i = 0, j = 0; i < slice; i++)
		{
			position[i] = j;
			j += width;

		}
	}
}

#endif // !background_H_INCLUDED