#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED


void music()
{
	if (playSound){
		//PlaySound("sound\\LoadingScreenMusic.wav", NULL, SND_LOOP | SND_ASYNC);
		//mciSendString("play \"sound\\LoadingScreenMusic.wav\" repeat", NULL, 0, NULL);
		mciSendString("play sound//LoadingScreenMusic.wav" , NULL, 0, NULL);
		

	
	}

}
void clickSound()
{

	PlaySound("sound\\MenuSound.wav", NULL, SND_ASYNC);
}
void mute()
{
	PlaySound(0, 0, 0);
}
void collisonSound()
{
	PlaySound("sound\\Collison_sound.wav", NULL, SND_ASYNC);
}
void missileSound()
{
	PlaySound("sound\\Missile_launch.wav", NULL, SND_ASYNC);
}

#endif // SOUND_H_INCLUDED
