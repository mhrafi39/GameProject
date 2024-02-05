#ifndef Variables_H_INCLUDED
#define Variables_H_INCLUDED
//---------------------------------------------------------Display-----------------------------------------------------------------
int screenWidth =1200;
int screenHeight =700;

//--------------------------------------------------------Main Menu-----------------------------------------------------------------

bool loadingScreen = true;
bool pressSpace = true;
bool mainMenu = false;
bool play = false;
bool instructions = false;
bool highScores = false;
bool settings = false;
bool playSound = true;
bool quite = false;

int menu_index = 0;
int settings_index = 0;

char pressScpaceText[60] = { "press 'space' to continue......" };
char mainMenuImage[][50] = { "main_menu\\Highlight\\play.png", "main_menu\\Highlight\\instructions.png", 
"main_menu\\Highlight\\highScore.png", "main_menu\\Highlight\\settings.png", "main_menu\\Highlight\\exit.png" };
char highScoreImage[][30] = { "highScore\\highScoreShow.png" };
char instructionImage[][50] = { "main_menu\\instructions\\instruction.png" };
char settingsImage[][30] = { "main_menu\\settings\\2.png", "main_menu\\settings\\1.png" };




//------------------------------------------------------------Score----------------------------------------------------------------
char scoreString[20];
//int score = 0;

//____________________________________________________________Pasue menu____________________________________________________________
char pasuMenuButton[][30] = { "pauseMenu\\button.png"};

//------------------------------------------------------------------------background---------------------------------------------------------------------
int position[150];
char background[150][40] = { "img//1.bmp", "img//2.bmp", "img//3.bmp", "img//4.bmp", "img//5.bmp", "img//6.bmp", "img//7.bmp", "img//8.bmp", "img//9.bmp", "img//10.bmp", "img//11.bmp", "img//12.bmp", "img//13.bmp", "img//14.bmp", "img//15.bmp", "img//16.bmp", "img//17.bmp", "img//18.bmp", "img//19.bmp", "img//20.bmp", "img//21.bmp", "img//22.bmp", "img//23.bmp", "img//24.bmp", "img//25.bmp", "img//26.bmp", "img//27.bmp", "img//28.bmp", "img//29.bmp", "img//30.bmp", "img//31.bmp", "img//32.bmp", "img//33.bmp", "img//34.bmp", "img//35.bmp", "img//36.bmp", "img//37.bmp", "img//38.bmp", "img//39.bmp", "img//40.bmp", "img//41.bmp", "img//42.bmp", "img//43.bmp", "img//44.bmp", "img//45.bmp", "img//46.bmp", "img//47.bmp", "img//48.bmp", "img//49.bmp", "img//50.bmp", "img//51.bmp", "img//52.bmp", "img//53.bmp", "img//54.bmp", "img//55.bmp", "img//56.bmp", "img//57.bmp", "img//58.bmp", "img//59.bmp", "img//60.bmp", "img//61.bmp", "img//62.bmp", "img//63.bmp", "img//64.bmp", "img//65.bmp", "img//66.bmp", "img//67.bmp", "img//68.bmp", "img//69.bmp", "img//70.bmp", "img//71.bmp", "img//72.bmp", "img//73.bmp", "img//74.bmp", "img//75.bmp", "img//76.bmp", "img//77.bmp", "img//78.bmp", "img//79.bmp", "img//80.bmp", "img//81.bmp", "img//82.bmp", "img//83.bmp", "img//84.bmp", "img//85.bmp", "img//86.bmp", "img//87.bmp", "img//88.bmp", "img//89.bmp", "img//90.bmp", "img//91.bmp", "img//92.bmp", "img//93.bmp", "img//94.bmp", "img//95.bmp", "img//96.bmp", "img//97.bmp", "img//98.bmp", "img//99.bmp", "img//100.bmp", "img//101.bmp", "img//102.bmp", "img//103.bmp", "img//104.bmp", "img//105.bmp", "img//106.bmp", "img//107.bmp", "img//108.bmp", "img//109.bmp", "img//110.bmp", "img//111.bmp", "img//112.bmp", "img//113.bmp", "img//114.bmp", "img//115.bmp", "img//116.bmp", "img//117.bmp", "img//118.bmp", "img//119.bmp", "img//120.bmp", "img//121.bmp", "img//122.bmp", "img//123.bmp", "img//124.bmp", "img//125.bmp", "img//126.bmp", "img//127.bmp", "img//128.bmp", "img//129.bmp", "img//130.bmp", "img//131.bmp", "img//132.bmp", "img//133.bmp", "img//134.bmp", "img//135.bmp", "img//136.bmp", "img//137.bmp", "img//138.bmp", "img//139.bmp", "img//140.bmp", "img//141.bmp", "img//142.bmp", "img//143.bmp", "img//144.bmp", "img//145.bmp", "img//146.bmp", "img//147.bmp", "img//148.bmp", "img//149.bmp", "img//150.bmp" };
char still[40] = { "img//still.bmp" };

int slice = 150;
int width = 1200 / slice;

//int position1[150];
char background1[150][40] = { "img3//1.bmp", "img3//2.bmp", "img3//3.bmp", "img3//4.bmp", "img3//5.bmp", "img3//6.bmp", "img3//7.bmp", "img3//8.bmp", "img3//9.bmp", "img3//10.bmp", "img3//11.bmp", "img3//12.bmp", "img3//13.bmp", "img3//14.bmp", "img3//15.bmp", "img3//16.bmp", "img3//17.bmp", "img3//18.bmp", "img3//19.bmp", "img3//20.bmp", "img3//21.bmp", "img3//22.bmp", "img3//23.bmp", "img3//24.bmp", "img3//25.bmp", "img3//26.bmp", "img3//27.bmp", "img3//28.bmp", "img3//29.bmp", "img3//30.bmp", "img3//31.bmp", "img3//32.bmp", "img3//33.bmp", "img3//34.bmp", "img3//35.bmp", "img3//36.bmp", "img3//37.bmp", "img3//38.bmp", "img3//39.bmp", "img3//40.bmp", "img3//41.bmp", "img3//42.bmp", "img3//43.bmp", "img3//44.bmp", "img3//45.bmp", "img3//46.bmp", "img3//47.bmp", "img3//48.bmp", "img3//49.bmp", "img3//50.bmp", "img3//51.bmp", "img3//52.bmp", "img3//53.bmp", "img3//54.bmp", "img3//55.bmp", "img3//56.bmp", "img3//57.bmp", "img3//58.bmp", "img3//59.bmp", "img3//60.bmp", "img3//61.bmp", "img3//62.bmp", "img3//63.bmp", "img3//64.bmp", "img3//65.bmp", "img3//66.bmp", "img3//67.bmp", "img3//68.bmp", "img3//69.bmp", "img3//70.bmp", "img3//71.bmp", "img3//72.bmp", "img3//73.bmp", "img3//74.bmp", "img3//75.bmp", "img3//76.bmp", "img3//77.bmp", "img3//78.bmp", "img3//79.bmp", "img3//80.bmp", "img3//81.bmp", "img3//82.bmp", "img3//83.bmp", "img3//84.bmp", "img3//85.bmp", "img3//86.bmp", "img3//87.bmp", "img3//88.bmp", "img3//89.bmp", "img3//90.bmp", "img3//91.bmp", "img3//92.bmp", "img3//93.bmp", "img3//94.bmp", "img3//95.bmp", "img3//96.bmp", "img3//97.bmp", "img3//98.bmp", "img3//99.bmp", "img3//100.bmp", "img3//101.bmp", "img3//102.bmp", "img3//103.bmp", "img3//104.bmp", "img3//105.bmp", "img3//106.bmp", "img3//107.bmp", "img3//108.bmp", "img3//109.bmp", "img3//110.bmp", "img3//111.bmp", "img3//112.bmp", "img3//113.bmp", "img3//114.bmp", "img3//115.bmp", "img3//116.bmp", "img3//117.bmp", "img3//118.bmp", "img3//119.bmp", "img3//120.bmp", "img3//121.bmp", "img3//122.bmp", "img3//123.bmp", "img3//124.bmp", "img3//125.bmp", "img3//126.bmp", "img3//127.bmp", "img3//128.bmp", "img3//129.bmp", "img3//130.bmp", "img3//131.bmp", "img3//132.bmp", "img3//133.bmp", "img3//134.bmp", "img3//135.bmp", "img3//136.bmp", "img3//137.bmp", "img3//138.bmp", "img3//139.bmp", "img3//140.bmp", "img3//141.bmp", "img3//142.bmp", "img3//143.bmp", "img3//144.bmp", "img3//145.bmp", "img3//146.bmp", "img3//147.bmp", "img3//148.bmp", "img3//149.bmp", "img3//150.bmp" };
char still1[40] = { "img3//still.bmp" };

//int slice1 = 150;
//int width1 = 1200 / slice1;

//int position2[150];
char background2[150][40] = { "img4//1.bmp", "img4//2.bmp", "img4//3.bmp", "img4//4.bmp", "img4//5.bmp", "img4//6.bmp", "img4//7.bmp", "img4//8.bmp", "img4//9.bmp", "img4//10.bmp", "img4//11.bmp", "img4//12.bmp", "img4//13.bmp", "img4//14.bmp", "img4//15.bmp", "img4//16.bmp", "img4//17.bmp", "img4//18.bmp", "img4//19.bmp", "img4//20.bmp", "img4//21.bmp", "img4//22.bmp", "img4//23.bmp", "img4//24.bmp", "img4//25.bmp", "img4//26.bmp", "img4//27.bmp", "img4//28.bmp", "img4//29.bmp", "img4//30.bmp", "img4//31.bmp", "img4//32.bmp", "img4//33.bmp", "img4//34.bmp", "img4//35.bmp", "img4//36.bmp", "img4//37.bmp", "img4//38.bmp", "img4//39.bmp", "img4//40.bmp", "img4//41.bmp", "img4//42.bmp", "img4//43.bmp", "img4//44.bmp", "img4//45.bmp", "img4//46.bmp", "img4//47.bmp", "img4//48.bmp", "img4//49.bmp", "img4//50.bmp", "img4//51.bmp", "img4//52.bmp", "img4//53.bmp", "img4//54.bmp", "img4//55.bmp", "img4//56.bmp", "img4//57.bmp", "img4//58.bmp", "img4//59.bmp", "img4//60.bmp", "img4//61.bmp", "img4//62.bmp", "img4//63.bmp", "img4//64.bmp", "img4//65.bmp", "img4//66.bmp", "img4//67.bmp", "img4//68.bmp", "img4//69.bmp", "img4//70.bmp", "img4//71.bmp", "img4//72.bmp", "img4//73.bmp", "img4//74.bmp", "img4//75.bmp", "img4//76.bmp", "img4//77.bmp", "img4//78.bmp", "img4//79.bmp", "img4//80.bmp", "img4//81.bmp", "img4//82.bmp", "img4//83.bmp", "img4//84.bmp", "img4//85.bmp", "img4//86.bmp", "img4//87.bmp", "img4//88.bmp", "img4//89.bmp", "img4//90.bmp", "img4//91.bmp", "img4//92.bmp", "img4//93.bmp", "img4//94.bmp", "img4//95.bmp", "img4//96.bmp", "img4//97.bmp", "img4//98.bmp", "img4//99.bmp", "img4//100.bmp", "img4//101.bmp", "img4//102.bmp", "img4//103.bmp", "img4//104.bmp", "img4//105.bmp", "img4//106.bmp", "img4//107.bmp", "img4//108.bmp", "img4//109.bmp", "img4//110.bmp", "img4//111.bmp", "img4//112.bmp", "img4//113.bmp", "img4//114.bmp", "img4//115.bmp", "img4//116.bmp", "img4//117.bmp", "img4//118.bmp", "img4//119.bmp", "img4//120.bmp", "img4//121.bmp", "img4//122.bmp", "img4//123.bmp", "img4//124.bmp", "img4//125.bmp", "img4//126.bmp", "img4//127.bmp", "img4//128.bmp", "img4//129.bmp", "img4//130.bmp", "img4//131.bmp", "img4//132.bmp", "img4//133.bmp", "img4//134.bmp", "img4//135.bmp", "img4//136.bmp", "img4//137.bmp", "img4//138.bmp", "img4//139.bmp", "img4//140.bmp", "img4//141.bmp", "img4//142.bmp", "img4//143.bmp", "img4//144.bmp", "img4//145.bmp", "img4//146.bmp", "img4//147.bmp", "img4//148.bmp", "img4//149.bmp", "img4//150.bmp" };
char still2[40] = { "img4//still.bmp" };

//int slice2 = 150;
//int width2 = 1200 / slice2;

bool background_bool = false;

//----------------------------------------------------------------------character----------------------------------------------------------------
char running_forward[7][40] = { "Running\\1.bmp", "Running\\2.bmp", "Running\\3.bmp", "Running\\4.bmp", "Running\\5.bmp", "Running\\6.bmp", "Running\\7.bmp" };
char running_backward[7][40] = { "Running2\\1.bmp", "Running2\\2.bmp", "Running2\\3.bmp", "Running2\\4.bmp", "Running2\\5.bmp", "Running2\\6.bmp", "Running2\\7.bmp" };

int running_index;

int running_x = 100;
int running_y = 100;

bool stand_position = true;
int stand_counter = 0;

bool right_bool = true;
bool left_bool = true;
//--------------------------------------------------------------------------plane-------------------------------------------------------------

char plane1[40] = { "plane//plane.bmp" };
int plane1_x = 300;
int plane1_y = 50;



//---------------------------------------------------------------main Plane + main plane missile--------------------------------------------------


int img2_x = 10;
int img2_y = 100;
int img2_dx = 10;
int img2_dy = 10;
bool img2_bool = true;
int img2_x_size = 200;  //200
int img2_y_size = 132;  //132

int img3_x = img2_x + 40;
int img3_y = img2_y + 20;
bool img3_bool = true;
int img3_x_size = 100;  //100
int img3_y_size = 18;   //18
bool shoot1 = false;

int img6_x = img2_x + 40;
int img6_y = img2_y + 20;
bool img6_bool = true;
int img6_x_size = 100;  //100
int img6_y_size = 18;   //18
bool shoot2 = false;

int n = 50;
int counter = 0;

char img2[40] = { "img1\\2.bmp" };
char img3[40] = { "img1\\3.bmp" };              // Here img 2 is plane and img 3,6, is missile
char img6[40] = { "img1\\6.bmp" };

char main_plane_collision_rendering[8][100] = { "main_plane_collision_rendering//1.bmp", "main_plane_collision_rendering//2.bmp", "main_plane_collision_rendering//3.bmp", "main_plane_collision_rendering//4.bmp", "main_plane_collision_rendering//5.bmp", "main_plane_collision_rendering//6.bmp", "main_plane_collision_rendering//7.bmp", "main_plane_collision_rendering//8.bmp" };

bool main_plane_explosion = false;
int k;

//------------------------------------------------------- enemy plane + enemy plane missile-----------------------------------------------------
#define PlaneNumber 3
int boss_no = 1;

struct enemy
{
	int enemy_plane_x = 0;
	int enemy_plane_y = 0;
	int enemy_planeIndex;
	bool enemy_plane_bool;

	int enemy_plane_missile_x;
	int enemy_plane_missile_y;

	bool enemy_missile_bool = true;


	int boss_plane_x;
	int boss_plane_y;
	int boss_planeIndex;
	bool boss_plane_bool;
	bool boss_missile_bool = true;

	int boss_plane_missile_x;
	int boss_plane_missile_y;

};
enemy plane[PlaneNumber];


bool movement_zombie = true;

bool m = true;
bool down = false;
bool up = false;

bool timer = false;


char enemy_plane[40] = { "img2\\1.bmp" };
int enemy_plane_x_size = 170; //170  //300
int enemy_plane_y_size = 60; //74     //130
int enemy_plane_x = 900;

char boss_plane[40] = { "Boss\\1.bmp" };

int boss_plane_x_size = 300; //170  //300
int boss_plane_y_size = 120; //74   //130
int boss_plane_x = 900;



char missile1[40] = { "missile\\1.bmp" };
int missile1_x = 0;
int missile1_y = 0;
bool enemy_missile_bool = false;

char boss_missile1[40] = { "BossMissile\\2.bmp" };
int boss_missile1_x = 0;
int boss_missile1_y = 0;
bool boss_missile_bool = false;

char missile2[40] = { "missile\\2.bmp" };
int missile2_x;
int missile2_y;

int i;

bool m1_bool = false;

bool m2_bool = false;

char boss_plane_collision_rendering[8][100] = { "boss_plane_collision_rendering//1.bmp", "boss_plane_collision_rendering//2.bmp", "boss_plane_collision_rendering//3.bmp", "boss_plane_collision_rendering//4.bmp", "boss_plane_collision_rendering//5.bmp", "boss_plane_collision_rendering//6.bmp", "boss_plane_collision_rendering//7.bmp", "boss_plane_collision_rendering//8.bmp" };

bool boss_plane_explosion = false;
int p;
int j;

int je;

//-------------------------------------------------------------------game start bool ---------------------------------------------

bool game_start = false;




//-------------------------------------------------------------------score----------------------------------

bool boss_bool = false;

int score = 450;  /////////////////////////////////////////////////////////////////////////////////// 

bool set_bool = true;

//------------------------------------------------------------life-----------------------------------------------------

int life = 0;

char life1[40] = { "life//1.bmp" };
char life2[40] = { "life//2.bmp" };
char life3[40] = { "life//3.bmp" };

bool life_image1 = true;
bool life_image2 = true;
bool life_image3 = true;


//-------------------------------------------------------------------Game lvl-----------------------------------------------------
bool level_1 = true;
bool level_2 = false;
bool level_3 = false;


char gameOverImage[][30] = { "life\\GameOver.jpg" };


int counter_ren = 1;

int r_score = 0;

#endif // !Variables_H_INCLUDED
