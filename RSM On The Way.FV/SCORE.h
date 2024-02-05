#ifndef SCORE_H_ICLUDED
#define SCORE_H_ICLUDED

#include<iostream>

using namespace std;
//_____________________________________________________Show Score in Game___________________________________________________________
int score1;
bool fieldActive = false;
char tempN[50];
int c = 0;
bool gameOver = false;
bool takeInputComplete=false;

int score_final = 0;


void showScore()
{

	 iSetColor(255, 255, 255);
	 sprintf_s(scoreString, "%d", r_score);
	iText(570, 660, "Score : ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(640, 660,scoreString , GLUT_BITMAP_HELVETICA_18);
	iShowImage(1114, 630, 80, 60, iLoadImage(pasuMenuButton[0]));
}

typedef struct highscore {
	char name[50];
	int score;


} h_score;
h_score tempH;

pair<char[50], int> HighScore[200];

void readscore(char name[20], int score) {
	FILE *file = fopen("highscore.txt", "a");

	h_score hscore;
	for (int j = 0; j < 3; j++) {
		
		strcpy(hscore.name, name);
		hscore.score = score;
		fwrite(&hscore, sizeof(h_score), 1, file);
	}

	fclose(file);
}

void sortScores() {
	for (int i = 0; i < c ; i++) {
		for (int j = 0; j < c  - i; j++) {
			if (HighScore[j].second < HighScore[j + 1].second) {
				swap(HighScore[j], HighScore[j + 1]);
			}
		}
	}
}
void getScore() {

	h_score hscore;

	FILE *file = fopen("highscore.txt", "r");

	while (fread(&hscore, sizeof(h_score), 1, file)) {
		strcpy(HighScore[c].first, hscore.name);
		HighScore[c].second = hscore.score;
		c++;
	}

	fclose(file);
}
char tempScore[5][4];


void show_Score()
{

	for (int j = 0; j < 5; j++)
	{
		sprintf_s(tempScore[j], "%d", HighScore[j].second);
	}
	if (highScores)
	{
		iSetColor(255, 0, 255);


		iText(400, 470, HighScore[0].first, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 470, tempScore[0], GLUT_BITMAP_TIMES_ROMAN_24);

		/*	iText(400, 400, HighScore[3].first, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 400, tempScore[3], GLUT_BITMAP_TIMES_ROMAN_24);

		iText(400, 330, HighScore[2].first, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 330, tempScore[2], GLUT_BITMAP_TIMES_ROMAN_24);

		iText(400, 260, HighScore[3].first, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 260, tempScore[3], GLUT_BITMAP_TIMES_ROMAN_24);

		iText(400, 190, HighScore[4].first, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 190, tempScore[4], GLUT_BITMAP_TIMES_ROMAN_24);*/
	}

}


//_----------------------------------------------------------------Sadnan-----------------------------------------------
int nameIndex = 0;
bool play_game = false;
bool nameInputComplete = false;

void takeinput(unsigned char key)
{
	if (key == '\b')
	{
		tempH.name[--nameIndex] = NULL;
	}
	else if (key != '\r')
	{
		tempH.name[nameIndex] = key;
		nameIndex++;
	}

	else if (key == '\r')
	{
		tempH.name[nameIndex] = '\0';	
		nameIndex = 0;
		fieldActive = false;


	}
}

char bgImage[][20] = { "life\\bg.jpg" };
void showchar()
{

	iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(bgImage[0]));
	iSetColor(255, 255, 0);
	iText(500, 500, "Enter Your Name", GLUT_BITMAP_HELVETICA_18);
	iRectangle(480, 450, 180, 30);
	iText(481, 460, tempH.name, GLUT_BITMAP_HELVETICA_18);

}



#endif // !SCORE_H_ICLUDED
