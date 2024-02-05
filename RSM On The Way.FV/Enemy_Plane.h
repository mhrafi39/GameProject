#ifndef Enemy_Plane_H_INCLUDED
#define Enemy_Plane_H_INCLUDED


void enemy_missile_collision(int i);

void enemy_missile_change()
{
	if (game_start == true)
	{
		if (boss_bool == false)
		{
			for (i = 0; i < PlaneNumber; i++)
			{
				plane[i].enemy_plane_missile_x -= 10;
				if (plane[i].enemy_plane_missile_x <= 0)
				{
					plane[i].enemy_plane_missile_x = plane[i].enemy_plane_x;
					plane[i].enemy_plane_missile_y = plane[i].enemy_plane_y;
				}

			}
		}
		

		if (boss_bool == true)
		{
			for (i = 0; i < boss_no; i++)
			{
				plane[i].boss_plane_missile_x -= 10;
				if (plane[i].boss_plane_missile_x <= 0)
				{
					plane[i].boss_plane_missile_x = plane[i].boss_plane_x;
					plane[i].boss_plane_missile_y = plane[i].boss_plane_y;
				}

			}
		}

	}

	
	
}


void movement()
{
	if (boss_bool == false)
	{
		plane[i].enemy_plane_x = 850;
		if (movement_zombie == true)
		{

			plane[i].enemy_plane_y += 10;
			if (enemy_missile_bool == false)
			{
				plane[i].enemy_plane_missile_y = plane[i].enemy_plane_y;
			}

			//zombie[i].zombie_y = rand()/10 ;
			if (plane[i].enemy_plane_y >= 700)
			{
				plane[i].enemy_plane_y = 0;
			}

		}
	}
	if (boss_bool == true)
	{
		plane[i].boss_plane_x = 700;
		if (movement_zombie == true)
		{

			plane[i].boss_plane_y += 10;
			if (boss_missile_bool == false)
			{
				plane[i].boss_plane_missile_x = plane[i].boss_plane_x;
			}

			//zombie[i].zombie_y = rand()/10 ;
			if (plane[i].boss_plane_y >= 700)
			{
				plane[i].boss_plane_y= 0;
			}

		}
	}
	
}

void change_y_minus()
{
	if (boss_bool == false)
	{
		if (down == true)
		{
			plane[i].enemy_plane_y -= 10;
			if (enemy_missile_bool == false)
			{
				plane[i].enemy_plane_missile_y = plane[i].enemy_plane_y;
			}
		}
	}
	
	if (boss_bool == true)
	{
		if (down == true)
		{
			plane[i].boss_plane_y -= 10;
			if (boss_missile_bool == false)
			{
				plane[i].boss_plane_missile_y = plane[i].boss_plane_y;
			}
		}
	}

}
void change_y_plus()
{
	if (boss_bool ==  false)
	{
		if (up == true)
		{
			plane[i].enemy_plane_y += 10;
			if (enemy_missile_bool == false)
			{
				plane[i].enemy_plane_missile_y = plane[i].enemy_plane_y;
			}

		}
	}

	if (boss_bool == true)
	{
		if (up == true)
		{
			plane[i].boss_plane_y += 10;
			if (boss_missile_bool == false)
			{
				plane[i].boss_plane_missile_y = plane[i].boss_plane_y;
			}

		}
	}
	
}


void change()
{
	if (boss_bool == false)
	{
		for (i = 0; i < PlaneNumber; i++)
		{
			plane[i].enemy_plane_x -= 10;
			if (enemy_missile_bool == false)
			{
				plane[i].enemy_plane_missile_x = plane[i].enemy_plane_x;
			}

			if (plane[i].enemy_plane_x <= 850)
			{
				movement();
				if (plane[i].enemy_plane_y >= 600)
				{
					movement_zombie = false;
					down = true;
					up = false;
				}
				change_y_minus();
				if (plane[i].enemy_plane_y <= 100)
				{
					movement_zombie = false;
					up = true;
					down = false;
				}
				change_y_plus();

				//iSetTimer(400, enemy_missile_change);
				enemy_missile_bool = true;
			}

			plane[i].enemy_planeIndex++;
			if (plane[i].enemy_planeIndex >= 10)
			{
				plane[i].enemy_planeIndex = 0;
			}

			enemy_missile_collision(i);
		}
	}
	
	if (boss_bool == true)
	{
		for (i = 0; i < boss_no; i++)
		{
			plane[i].boss_plane_x -= 10;
			if (boss_missile_bool == false)
			{
				plane[i].boss_plane_missile_x = plane[i].boss_plane_x;
			}

			if (plane[i].boss_plane_x <= 700)
			{
				movement();
				if (plane[i].boss_plane_y >= 600)
				{
					movement_zombie = false;
					down = true;
					up = false;
				}
				change_y_minus();
				if (plane[i].boss_plane_y <= 100)
				{
					movement_zombie = false;
					up = true;
					down = false;
				}
				change_y_plus();

				//iSetTimer(400, enemy_missile_change);
				boss_missile_bool = true;
			}

			plane[i].boss_planeIndex++;
			if (plane[i].boss_planeIndex >= 10)
			{
				plane[i].boss_planeIndex = 0;
			}

			enemy_missile_collision(i);
		}
	}
	
}



void setZombieVariable()
{
	if (boss_bool == false)
	{
		for (i = 0; i < PlaneNumber; i++)
		{
			plane[i].enemy_plane_x = 1200 + rand() % 400;
			plane[i].enemy_plane_y = 200 + i * 10;  //rand() % 200
			plane[i].enemy_planeIndex = rand() % 10;
			plane[i].enemy_plane_bool = true;

			if (enemy_missile_bool == false)
			{
				plane[i].enemy_plane_missile_x = plane[i].enemy_plane_x;
				plane[i].enemy_plane_missile_y = plane[i].enemy_plane_y;
			}


		}
	}
	if (boss_bool == true)
	{
		for (i = 0; i < boss_no; i++)
		{
			plane[i].boss_plane_x = 1200 + rand() % 400;
			plane[i].boss_plane_y = 200 + i * 10;  //rand() % 200
			plane[i].boss_planeIndex = rand() % 10;
			plane[i].boss_plane_bool = true;

			if (boss_missile_bool == false)
			{
				plane[i].boss_plane_missile_x = plane[i].boss_plane_x;
				plane[i].boss_plane_missile_y = plane[i].boss_plane_y;
			}


		}
	}
	
}

void zombieMovement()
{
	
	if (boss_bool == false)
	{
		for (i = 0; i <= PlaneNumber; i++)
		{
			
			if (plane[i].enemy_plane_bool ==true)
			{
				iShowBMP2(plane[i].enemy_plane_x, plane[i].enemy_plane_y, enemy_plane, 0);
				if (plane[i].enemy_missile_bool)
				{
					
					iShowBMP2(plane[i].enemy_plane_missile_x, plane[i].enemy_plane_missile_y, missile1, 0);
				}
			}
		}
	}
	
	if (boss_bool == true)
	{
		
		for (i = 0; i <= boss_no; i++)
		{
			if (plane[i].boss_plane_bool)
			{
				printf("Working");
				iShowBMP2(plane[i].boss_plane_x, plane[i].boss_plane_y, boss_plane, 0);
				if (plane[i].boss_missile_bool)
				{
					iShowBMP2(plane[i].boss_plane_missile_x, plane[i].boss_plane_missile_y, boss_missile1, 0);
				}
				
			}
		}
	}
}


void setZombie1Variable(int i)
{
	if (boss_bool == false)
	{
		plane[i].enemy_plane_x = 1200 + rand() % 400;
		plane[i].enemy_plane_y = 200 + rand() % 200;
		plane[i].enemy_planeIndex = rand() % 10;
		plane[i].enemy_plane_bool = true;
		
	}
	if (boss_bool == true)
	{
		plane[i].boss_plane_x = 1200 + rand() % 400;
		plane[i].boss_plane_y = 200 + rand() % 200;
		plane[i].boss_planeIndex = rand() % 10;
		plane[i].boss_plane_bool = true;
	}
}

void enemy_plane_collision()
{
	if (boss_bool == false)
	{
		for (i = 0; i < PlaneNumber; i++)
		{
			
			if ((img3_x + img3_x_size >= plane[i].enemy_plane_x  && img3_x <= plane[i].enemy_plane_x + enemy_plane_x_size) && (img3_y <= plane[i].enemy_plane_y + enemy_plane_y_size && img3_y >= plane[i].enemy_plane_y - img3_y_size))
			{
				img3_bool = false;
				plane[i].enemy_plane_bool = false;
				plane[i].enemy_plane_x = 0;
				plane[i].enemy_plane_y = 0;


				img3_x = img2_x + 40;
				img3_y = img2_y + 20;
				img3_bool = true;
				shoot1 = false;
				setZombie1Variable(i);

				

				score += 50;
				r_score += 50;
				collisonSound();

			}
			else if ((img6_x + img6_x_size >= plane[i].enemy_plane_x && img6_x <= plane[i].enemy_plane_x + enemy_plane_x_size) && (img6_y <= plane[i].enemy_plane_y + enemy_plane_y_size && img6_y >= plane[i].enemy_plane_y - img6_y_size))
			{
				img6_bool = false;
				plane[i].enemy_plane_bool = false;
				plane[i].enemy_plane_x = 0;
				plane[i].enemy_plane_y = 0;


				img6_x = img2_x + 40;
				img6_y = img2_y + 20;
				img6_bool = true;
				shoot2 = false;
				setZombie1Variable(i);

				score += 50;
				r_score += 50;
				collisonSound();

			}

			if (score >= 950)
			{
				boss_bool = true;
				score1 = 0;
			}

		}
	}

	if (boss_bool == true)
	{
		for (i = 0; i < boss_no; i++)
		{
			if (m2_bool == false) /////////////////////////////////////////////////////////
			{
				boss_plane_explosion = false;
			}
			if ((img3_x + img3_x_size >= plane[i].boss_plane_x  && img3_x <= plane[i].boss_plane_x + boss_plane_x_size) && (img3_y <= plane[i].boss_plane_y + boss_plane_y_size && img3_y >= plane[i].boss_plane_y - img3_y_size))
			{
				
				img3_bool = false;
				//plane[i].boss_plane_bool = false;
				//plane[i].boss_plane_x = 0;
				//plane[i].boss_plane_y = 0;


				img3_x = img2_x + 40;
				img3_y = img2_y + 20;
				img3_bool = true;
				shoot1 = false;

				//setZombie1Variable(i);
				if (set_bool == true)
				{
					setZombieVariable();
				}
				set_bool = false;

				m2_bool = true;
				boss_plane_explosion = true;

				score += 50;
				r_score += 50;
				collisonSound();
				


			}
			else if ((img6_x + img6_x_size >= plane[i].boss_plane_x && img6_x <= plane[i].boss_plane_x + boss_plane_x_size) && (img6_y <= plane[i].boss_plane_y + boss_plane_y_size&& img6_y >= plane[i].boss_plane_y - img6_y_size))
			{
				img6_bool = false;
				//plane[i].boss_plane_bool = false;
				//plane[i].boss_plane_x = 0;
				//plane[i].boss_plane_y = 0;


				img6_x = img2_x + 40;
				img6_y = img2_y + 20;
				img6_bool = true;
				shoot2 = false;

				//setZombie1Variable(i);
				if (set_bool == true)
				{
					setZombieVariable();
				}
				set_bool = false;

				m2_bool = true;
				boss_plane_explosion = true;

				score += 50;
				r_score += 50;
				collisonSound();

				
			}
		
			/*if (score >= 1200)
			{
				//boss_bool = true;
				cout << "Have";
			}*/
			if (score >= 1200)
			{
				score = 450;

				life = 0;
				life_image1 = true;
				life_image2 = true;
				life_image3 = true;

				boss_bool = false;

				int count = 0;
				count++;
				if (count == 1)
				{
					setZombieVariable();
				}

				counter_ren++;

			}

		}
	}
	
}

void game_over();

void enemy_missile_collision(int i)
{
	if (boss_bool == false)
	{
		if (m1_bool == false)
		{
			main_plane_explosion = false;
		}
		if ((plane[i].enemy_plane_missile_x - 180 < img2_x) && (img2_y >= plane[i].enemy_plane_missile_y - 70 && img2_y <= plane[i].enemy_plane_missile_y - 10)) //128 is img1 size
		{
			m1_bool = true;
			plane[i].enemy_plane_missile_x = 1300;
			plane[i].enemy_plane_missile_y = 1300;

			main_plane_explosion = true;
			
			life++;
			collisonSound();

			game_over();
		}
	}

	if (boss_bool == true)
	{
		if (m1_bool == false)
		{
			main_plane_explosion = false;
		}
		if ((plane[i].boss_plane_missile_x - 180 < img2_x) && (img2_y >= plane[i].boss_plane_missile_y - 70 && img2_y <= plane[i].boss_plane_missile_y - 10)) //128 is img1 size
		{
			m1_bool = true;
			plane[i].boss_plane_missile_x = 1300;
			plane[i].boss_plane_missile_y = 1300;

			main_plane_explosion = true;
			life+=3;
			collisonSound();

			game_over();
		}
	}

	
}


//--------------------------------------------------

int filescore = 0;

void game_over()
{
	if (life>=9||gameOver)
	{

		score = 450;
		play = false;
		gameOver = true;
		//mainMenu = true;

		//--------------------------------
		stand_position = true;
		background_bool = false;
		right_bool = true;
		left_bool = true;
		counter_ren = 1;

		readscore(tempH.name, r_score);


		//-----------------------------------------------------game_start------------------------------------------------------
		game_start = false;
		r_score = 0;

	


		life = 0;
		life_image1 = true;
		life_image2 = true;
		life_image3 = true;

		boss_bool = false;

		int count = 0;
		count++;
		if (count == 1)
		{
			setZombieVariable();
		}

	}


}



#endif // !Enemy_Plane_H_INCLUDED