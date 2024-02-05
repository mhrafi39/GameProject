#ifndef LIFE_H_INCLUDED
#define LIFE_H_INCLUDED




void life_bool()
{
	if (life_image1 == true)
	{
		iShowBMP2(120, 650, life1, 0);
	}
	if (life_image2 == true)
	{
		iShowBMP2(70, 650, life2, 0);
	}
	if (life_image3 == true)
	{
		iShowBMP2(20, 650, life3, 0);

	}

}


void life_check()
{
	if (life >= 3)
	{
		life_image1 = false;
	}
    if (life >= 6)
	{
		life_image2 = false;
	}
    if (life >= 9)
	{
		life_image3 = false;
	}

}

#endif // !LIFE_H_INCLUDED
