#ifndef Main_Plane_H_INCLUDED
#define Main_Plane_H_INCLUDED



// ---------------------------------------------------------------------- main plane missile---------------------------------------
int fire = 0;


void change_missile()
{

	if (shoot1){

		img3_x += 10;
		if (img3_x >= 999)
		{
			img3_x = img2_x + 40;
			img3_y = img2_y + 20;
			shoot1 = false;
		}
	}
	if (shoot2)
	{
		img6_x += 10;
		if (img6_x >= 999)
		{
			img6_x = img2_x + 40;
			img6_y = img2_y + 20;
			shoot2 = false;
		}
	}

}
//----------------------------------------------------------------------------------------------------------------------------------


#endif // !Main_Plane_H_INCLUDED