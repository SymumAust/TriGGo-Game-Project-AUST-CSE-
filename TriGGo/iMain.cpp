#include <iostream>
#include<string>
#pragma warning (disable : 4996)
#include<stdio.h>
#include <stdlib.h>
#include "iGraphics.h"
using namespace std;
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
char img[30][100] = { "screen//1.bmp", "screen//2.bmp", "screen//3.bmp", "screen//4.bmp", "screen//5.bmp", "screen//6.bmp", "screen//7.bmp", "screen//8.bmp", "screen//9.bmp", "screen//10.bmp", "screen//11.bmp", "screen//12.bmp", "screen//13.bmp", "screen//14.bmp", "screen//15.bmp", "screen//16.bmp", "screen//17.bmp", "screen//18.bmp", "screen//19.bmp", "screen//20.bmp", "screen//21.bmp", "screen//22.bmp", "screen//23.bmp", "screen//24.bmp", "screen//25.bmp", "screen//26.bmp", "screen//27.bmp", "screen//28.bmp", "screen//29.bmp", "screen//30.bmp"};
//char img[30][20] = { "dark9\\1.bmp", "dark9\\2.bmp", "dark9\\3.bmp", "dark9\\4.bmp", "dark9\\5.bmp", "dark9\\6.bmp", "dark9\\7.bmp", "dark9\\8.bmp", "dark9\\9.bmp", "dark9\\10.bmp", "dark9\\11.bmp", "dark9\\12.bmp", "dark9\\13.bmp", "dark9\\14.bmp", "dark9\\15.bmp", "dark9\\16.bmp", "dark9\\17.bmp", "dark9\\18.bmp", "dark9\\19.bmp", "dark9\\20.bmp", "dark9\\21.bmp", "dark9\\22.bmp", "dark9\\23.bmp", "dark9\\24.bmp", "dark9\\25.bmp", "dark9\\26.bmp", "dark9\\27.bmp", "dark9\\28.bmp", "dark9\\29.bmp", "dark9\\30.bmp" };

//char bgImg[100][30] = { "1.bmp", "2.bmp", "3.bmp", "4.bmp", "5.bmp", "6.bmp", "7.bmp", "8.bmp", "9.bmp", "10.bmp", "11.bmp", "12.bmp", "13.bmp", "14.bmp", "15.bmp", "16.bmp", "17.bmp", "18.bmp", "19.bmp", "20.bmp", "21.bmp", "22.bmp", "23.bmp", "24.bmp", "25.bmp", "26.bmp", "27.bmp", "28.bmp", "29.bmp", "30.bmp", "31.bmp", "32.bmp", "33.bmp", "34.bmp", "35.bmp", "36.bmp", "37.bmp", "38.bmp", "39.bmp", "40.bmp", "41.bmp", "42.bmp", "43.bmp", "44.bmp", "45.bmp", "46.bmp", "47.bmp", "48.bmp", "49.bmp", "50.bmp", "51.bmp", "52.bmp", "53.bmp", "54.bmp", "55.bmp", "56.bmp", "57.bmp", "58.bmp", "59.bmp", "60.bmp", "61.bmp", "62.bmp", "63.bmp", "64.bmp", "65.bmp", "66.bmp", "67.bmp", "68.bmp", "69.bmp", "70.bmp", "71.bmp", "72.bmp", "73.bmp", "74.bmp", "75.bmp", "76.bmp", "77.bmp", "78.bmp", "79.bmp", "80.bmp", "81.bmp", "82.bmp", "83.bmp", "84.bmp", "85.bmp", "86.bmp", "87.bmp", "88.bmp", "89.bmp", "90.bmp", "91.bmp", "92.bmp", "93.bmp", "94.bmp", "95.bmp", "96.bmp", "97.bmp", "98.bmp", "99.bmp", "100.bmp" };

char score[10][40] = {  "score//score01.bmp", "score//score02.bmp", "score//score03.bmp", "score//score04.bmp", "score//score05.bmp", "score//score06.bmp", "score//score07.bmp", "score//score08.bmp", "score//score09.bmp", "score//score10.bmp" };

char gameOver[30][30] = { "gameOver9\\1.bmp", "gameOver9\\2.bmp", "gameOver9\\3.bmp", "gameOver9\\4.bmp", "gameOver9\\5.bmp", "gameOver9\\6.bmp", "gameOver9\\7.bmp", "gameOver9\\8.bmp", "gameOver9\\9.bmp", "gameOver9\\10.bmp", "gameOver9\\11.bmp",
"gameOver9\\12.bmp", "gameOver9\\13.bmp", "gameOver9\\14.bmp", "gameOver9\\15.bmp", "gameOver9\\16.bmp", "gameOver9\\17.bmp", "gameOver9\\18.bmp", "gameOver9\\19.bmp", "gameOver9\\20.bmp", "gameOver9\\21.bmp", "gameOver9\\22.bmp", "gameOver9\\23.bmp",
"gameOver9\\24.bmp", "gameOver9\\25.bmp", "gameOver9\\26.bmp", "gameOver9\\27.bmp" };

char player[10][25] = { "player9\\plane_0000.bmp", "player9\\plane_0001.bmp", "player9\\plane_0002.bmp", "player9\\plane_0003.bmp", "player9\\plane_0004.bmp", "player9\\plane_0005.bmp", "player9\\plane_0006.bmp", "player9\\plane_0007.bmp" };

char coin9[5][15] = { "coin9\\1.bmp", "coin9\\2.bmp", "coin9\\3.bmp", "coin9\\4.bmp" };

char fire9[20][20] = { "fire9\\1.bmp", "fire9\\2.bmp", "fire9\\3.bmp", "fire9\\4.bmp", "fire9\\5.bmp", "fire9\\6.bmp", "fire9\\7.bmp", "fire9\\8.bmp", "fire9\\9.bmp", "fire9\\10.bmp", "fire9\\11.bmp", "fire9\\12.bmp", "fire9\\13.bmp", "fire9\\14.bmp", "fire9\\15.bmp",
"fire9\\16.bmp", "fire9\\17.bmp", "fire9\\18.bmp", "fire9\\19.bmp", "fire9\\20.bmp" };

char life9[11][20] = { "life9\\1.bmp", "life9\\2.bmp", "life9\\3.bmp", "life9\\4.bmp", "life9\\5.bmp", "life9\\6.bmp", "life9\\7.bmp", "life9\\8.bmp", "life9\\9.bmp", "life9\\10.bmp", "life9\\11.bmp" };
//variable
int xaxis23 = 1200;
int one = 1;
double mousePoint_x;
double mousePoint_y;
double obstracle_x = 1200;
double obstracle_y = 400;
double obstracle_x1 = 1200;
double obstracle_y1 = 100;
double obstracle_x2 = 1137;
double obstracle_y2 = 200;
int player_count = 0;
int obstracle_factor = 4;
int obstracle_count = 0;
int obstracle_rate = 45;
int imgIndex = 0;
int indexSpreed = 0;
int indexSpreedRange = 3;
int frame_width = 1200;
int frame_height = 700;
int backgroundNo = 4;
int point = 0;
int pointx;
int score_i = 0;
int score_j = 0;
int score_k = 0;
int player_x = 500;
int player_y = 350;
int enemy_x = 1000;
int enemy_y = 350;
int coin_x = 1225;
int coin_y = 300;
int coin_index = 0;
int fire_index = 0;
int life_index = 10;
int fire_rate = 0;
int fire_y = 1000;
int fire_x = 0;
int enimyFire_x = 1000;
int enimyFire_y = 350;
int enemyFire_rate = 30;
int updownRate = 15;
int hitCount = 0;
char scoreShow[3];
char readHighScore[3];
bool musicOn = true;
bool pause9 = true;
bool fireKey = true;
int loadScore;
int position[30];
int backGroundslice = 30;
int width9 = 42;
int arr[4];//-----------------------------------HighScore store
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int pause = 0;
int index1;

int cc = 0;
int cc2 = 0;
int cc3 = 0;

int slife = 0;
int slife3 = 0;

int slices = 30;
int mm = 1;
int exit1 = 0;
int nn = 1;
int g11;
int count = 1;
int x1 = 0;
int yy = 0;
int xplane = 0;
int yplane = 350;
int co = 0;
int co2 = 0;
int cooo = 0;
int clovec = 0;

int scoregame = 0;

int k11 = 0, j11 = 0, i11 = 0;
int sc = 1;
char showSecond[3];
char showThird[3];

int imageposition[30];

char imagename[30][30] = { "images//Image01.bmp", "images//Image02.bmp", "images//Image03.bmp", "images//Image04.bmp", "images//Image05.bmp", "images//Image06.bmp", "images//Image07.bmp", "images//Image08.bmp", "images//Image09.bmp", "images//Image10.bmp", "images//Image11.bmp", "images//Image12.bmp", "images//Image13.bmp", "images//Image14.bmp", "images//Image15.bmp", "images//Image16.bmp", "images//Image17.bmp", "images//Image18.bmp", "images//Image19.bmp", "images//Image20.bmp", "images//Image21.bmp", "images//Image22.bmp", "images//Image23.bmp", "images//Image24.bmp", "images//Image25.bmp", "images//Image26.bmp", "images//Image27.bmp", "images//Image28.bmp", "images//Image29.bmp", "images//Image30.bmp" };
char plane[10][25] = { "plane//plane01.bmp", "plane//plane02.bmp", "plane//plane03.bmp", "plane//plane04.bmp", "plane//plane05.bmp", "plane//plane06.bmp", "plane//plane07.bmp", "plane//plane08.bmp", "plane//plane09.bmp" };
char spike[2][30] = { "Obstacle//spike1.bmp", "Obstacle//spike2.bmp " };
char coin[4][30] = { "images//coin01.bmp", "images//coin02.bmp", "images//coin03.bmp", "images//coin04.bmp" };
char score1[10][30] = { "score//score01.bmp", "score//score02.bmp", "score//score03.bmp", "score//score04.bmp", "score//score05.bmp", "score//score06.bmp", "score//score07.bmp", "score//score08.bmp", "score//score09.bmp", "score//score10.bmp" };
char fire[3][100] = { "Obstacle//firee.bmp", "Obstacle//firee1.bmp", "Obstacle//firee2.bmp" };
char heal[5][100] = { "Obstacle//love01.bmp", "Obstacle//love02.bmp", "Obstacle//love03.bmp", "Obstacle//love04.bmp", "Obstacle//love05.bmp" };
char plannew[10][100] = { "plane//plane_0000.bmp", "plane//plane_0001.bmp", "plane//plane_0002.bmp", "plane//plane_0003.bmp", "plane//plane_0004.bmp", "plane//plane_0005.bmp", "plane//plane_0006.bmp", "plane//plane_0007.bmp" };
char life105[11][100] = { "life//11.bmp", "life//10.bmp", "life//9.bmp", "life//8.bmp", "life//7.bmp", "life//6.bmp", "life//5.bmp", "life//4.bmp", "life//3.bmp", "life//2.bmp", "life//1.bmp" };


char gameover[27][100] = { "gameOver//1.bmp", "gameOver//2.bmp", "gameOver//3.bmp", "gameOver//4.bmp", "gameOver//5.bmp", "gameOver//6.bmp", "gameOver//7.bmp", "gameOver//8.bmp", "gameOver//9.bmp", "gameOver//10.bmp", "gameOver//11.bmp", "gameOver//12.bmp", "gameOver//13.bmp", "gameOver//14.bmp", "gameOver//15.bmp", "gameOver//16.bmp", "gameOver//17.bmp", "gameOver//18.bmp", "gameOver//19.bmp", "gameOver//20.bmp", "gameOver//21.bmp", "gameOver//22.bmp", "gameOver//23.bmp", "gameOver//24.bmp", "gameOver//25.bmp", "gameOver//26.bmp", "gameOver//27.bmp" };
int mposx, mposy, i, j;


//#define imagespeed 40;
int gs = 0;
int gam = 0;
int gameoverx = 0;
int gameovery = 0;

double width = 68;

int scr = 1;
int yaxis = 700;
int xaxis = 1200;
int j10, x5 = xaxis;

int index;
int flag;

int xbullet = 1500;
int ybullet = 350;

int xbullet1 = xaxis;
int xbullet2 = xaxis;
int xbullet3 = xaxis;
int xbullet4 = xaxis;

int xlove = xaxis;
int ylove = 300;

int vv = 0;

int ybullet1 = 300;
int ybullet2 = 200;
int ybullet3 = 50;
int ybullet4 = 600;

int xcoin1 = xaxis;
int ycoin1 = 200;

int xcoin2 = xaxis;
int ycoin2 = 600;

int rh = 0;
int lh = 0;
int uh = 0;
int dh = 0;

int mone = 0;
int mone1 = 0;
int mone2 = 0;
int mone3 = 0;
int mone4 = 0;

int cmone1 = 0;
int cmone2 = 0;

int coun = 0;

int clove = 1;


int scorex = 00;
int scorey = 630;

int lifex105 = 00;
int lifey105 = (630 - 60);

int lif = 0;
//shifting plane

int cp = 0;

// music panel
bool music = true;
int flagmusic = 1;
bool musicflag = true;

int xvillain = xaxis;
int yvillain = 550;
int bulletvillainx = xvillain + 123;
int bulletvillainy = yvillain + 31;

int bulletvillainx2 = xvillain + 123;
int bulletvillainy2 = yvillain + 31;

int tempbu = bulletvillainy;

int pla = 0;

int tempo = 0;

int yplanered = 500;
int cn = 0;

int cn1 = 0;

int cn11 = 0;


int scorefinal = 0;

int scorecount = 0;

int cu = 0;
int countu = 0;




int randomlove(int ylove){

	ylove = rand() % 630;
	return ylove;
}
//bullet
int random(int ybullet){
	ybullet = rand() % 630;


	return ybullet;
}
int random1(int ybullet1){
	ybullet1 = rand() % 630;


	return ybullet1;
}
int random2(int ybullet2){
	ybullet2 = rand() % 630;


	return ybullet2;
}
int random3(int ybullet3){
	ybullet3 = rand() % 630;


	return ybullet3;
}
int random4(int ybullet4){
	ybullet4 = rand() % 630;


	return ybullet4;
}
int randomcoin1(int ycoin){
	ycoin = rand() % 630;


	return ycoin;
}

// didn't used
int randomcoin2(int ycoin2){
	ycoin2 = rand() % 630;


	return ycoin2;
}


void imageposfunction(){
	int i, j;
	for (i = 0, j = 0; i < slices; i++){
		imageposition[i] = j;
		j += width;
	}
}



void gameOover(){
	//iText(500,500,,)
	//iText(500,500,,)
	if (cu <= 3){
		iShowBMP2(gameoverx, gameovery, gameover[gam], 0);
		scorefinal = 1;

		gam++;
	}
	if (gam > 26){
		cu++;
		gam = 0;
	}
	if (cu >= 3){
		iShowBMP2(gameoverx, gameovery, "gameOver//gameo.bmp", 0);
		iShowBMP2(320, 50, "menu//ss.bmp", 0);
		iShowBMP2(690, 50, "menu//ss2.bmp", 0);


		iShowBMP2(520, 50, score1[k11], 0);

		iShowBMP2(570, 50, score1[j11], 0);

		iShowBMP2(620, 50, score1[i11], 0);
		countu = 1;



	}
	scorecount = k11 * 100 + j11 * 10 + i11;
	FILE *fs;
	fs = fopen("score.txt", "r+");
	if (fs == NULL)
	{
		//cout << "File not found!" << endl;
	}
	int i = 3;
	arr[3] = scorecount;
	int temp;
	for (int i = 1; i<4; ++i)
	for (int j = 0; j<i; ++j)
	if (arr[j]>arr[i]){
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}

	while (i>0){
		fprintf(fs, "%d ", arr[i--]);
		//cout << i << " " << endl;
	}

	//fprintf(fs, "%d", pointx);


	int j = 2;
	//int tmp = loadScore;
	int tmp = arr[3];
	while (j >= 0){
		readHighScore[j] = tmp % 10 + '0';
		tmp = tmp / 10;
		j--;
	}


	j = 2;
	tmp = arr[2];
	while (j >= 0){
		showSecond[j] = tmp % 10 + '0';
		tmp = tmp / 10;
		j--;
	}
	j = 2;
	tmp = arr[1];
	while (j >= 0){
		showThird[j] = tmp % 10 + '0';
		tmp = tmp / 10;
		j--;
	}


	fclose(fs);
	point = 0;
	score_i = 0;
	score_j = 0;
	score_k = 0;
	life_index = 10;
	obstracle_rate = 30;
	
}

int start = 1;


void temp(){
	int start = 1;
	int pause = 0;
	int index1;

	int cc = 0;
	int cc2 = 0;
	int cc3 = 0;

	int slife = 0;
	int slife3 = 0;

	int slices = 30;
	int mm = 1;
	int exit1 = 0;
	int nn = 1;
	int g11;
	int count = 1;
	int x1 = 0;
	int yy = 0;
	int xplane = 0;
	int yplane = 350;
	int co = 0;
	int co2 = 0;
	int cooo = 0;
	int clovec = 0;

	int scoregame = 0;

	int k11 = 0, j11 = 0, i11 = 0;
	int sc = 1;



	int mposx, mposy, i, j;


	//#define imagespeed 40;
	int gs = 0;
	int gam = 0;
	int gameoverx = 0;
	int gameovery = 0;

	double width = 68;

	int yaxis = 700;
	int xaxis = 1200;
	int j10, x5 = xaxis;

	int index;
	int flag;

	int xbullet = 1500;
	int ybullet = 350;

	int xbullet1 = xaxis;
	int xbullet2 = xaxis;
	int xbullet3 = xaxis;
	int xbullet4 = xaxis;

	int xlove = xaxis;
	int ylove = 300;

	int vv = 0;

	int ybullet1 = 300;
	int ybullet2 = 200;
	int ybullet3 = 50;
	int ybullet4 = 600;

	int xcoin1 = xaxis;
	int ycoin1 = 200;

	int xcoin2 = xaxis;
	int ycoin2 = 600;

	int rh = 0;
	int lh = 0;
	int uh = 0;
	int dh = 0;

	int mone = 0;
	int mone1 = 0;
	int mone2 = 0;
	int mone3 = 0;
	int mone4 = 0;

	int cmone1 = 0;
	int cmone2 = 0;

	int coun = 0;

	int clove = 1;


	int scorex = 00;
	int scorey = 630;

	int lifex105 = 00;
	int lifey105 = (630 - 60);

	int lif = 0;
	//shifting plane

	int cp = 0;

	// music panel
	bool music = true;
	int flagmusic = 1;
	bool musicflag = true;

	int xvillain = xaxis;
	int yvillain = 550;
	int bulletvillainx = xvillain + 123;
	int bulletvillainy = yvillain + 31;

	int bulletvillainx2 = xvillain + 123;
	int bulletvillainy2 = yvillain + 31;

	int tempbu = bulletvillainy;

	int pla = 0;

	int tempo = 0;

	int yplanered = 500;
	int cn = 0;

	int cn1 = 0;

	int cn11 = 0;


	int scorefinal = 0;

	int scorecount = 0;

	int cu = 0;
	int countu = 0;



	/*
	cu = 0;
	xplane = 10;
	yplane = 350;

	cc3 = 1;
	cc = 1;
	cc2 = 1;

	scoregame=0;

	scorecount = 0;
	k11 = 0;
	j11 = 0;
	i11 = 0;
	lif = 0;
	//slif3 = 0;
	pla = 0;
	cooo = 0;
	clovec = 0;
	coun = 0;
	co = 0;
	co2 = 0;
	*/

	//

	/*int gs = 0;
	int gam = 0;
	int gameoverx = 0;
	int gameovery = 0;

	double width = 68;

	int yaxis = 700;
	int xaxis = 1200;
	int j10, x5 = xaxis;

	int index;
	int flag;

	int xbullet = 1500;
	int ybullet = 350;

	int xbullet1 = xaxis;
	int xbullet2 = xaxis;
	int xbullet3 = xaxis;
	int xbullet4 = xaxis;

	int xlove = xaxis;
	int ylove = 300;

	int vv = 0;

	int ybullet1 = 300;
	int ybullet2 = 200;
	int ybullet3 = 50;
	int ybullet4 = 600;

	int xcoin1 = xaxis;
	int ycoin1 = 200;

	int xcoin2 = xaxis;
	int ycoin2 = 600;

	int rh = 0;
	int lh = 0;
	int uh = 0;
	int dh = 0;

	int mone = 0;
	int mone1 = 0;
	int mone2 = 0;
	int mone3 = 0;
	int mone4 = 0;

	int cmone1 = 0;
	int cmone2 = 0;

	int coun = 0;

	int clove = 1;


	int scorex = 00;
	int scorey = 630;

	int lifex105 = 00;
	int lifey105 = (630 - 60);

	int lif = 0;
	//shifting plane

	int cp = 0;

	// music panel
	bool music = true;
	int flagmusic = 1;
	bool musicflag = true;

	int xvillain = xaxis;
	int yvillain = 550;
	int bulletvillainx = xvillain + 123;
	int bulletvillainy = yvillain + 31;

	int bulletvillainx2 = xvillain + 123;
	int bulletvillainy2 = yvillain + 31;

	int tempbu = bulletvillainy;

	int pla = 0;

	int tempo = 0;

	int yplanered = 500;
	int cn = 0;

	int cn1 = 0;

	int cn11 = 0;


	int scorefinal = 0;

	int scorecount = 0;

	int cu = 0;
	int countu = 0;

	//
	int mposx, mposy, i, j;
	//

	int pause = 0;
	int index1;

	int cc = 0;
	int cc2 = 0;
	int cc3 = 0;

	int slife = 0;
	int slife3 = 0;

	int slices = 30;
	int mm = 1;
	int exit1 = 0;
	int nn = 1;
	int g11;
	int count = 1;
	int x1 = 0;
	int yy = 0;
	int xplane = 0;
	int yplane = 350;
	int co = 0;
	int co2 = 0;
	int cooo = 0;
	int clovec = 0;

	int scoregame = 0;

	int k11 = 0, j11 = 0, i11 = 0;
	int sc = 1;*/
}


void temp2(){
	cu = 0;
	xplane = 10;
	yplane = 350;

	cc3 = 1;
	cc = 1;
	cc2 = 1;

	scoregame = 0;

	scorecount = 0;
	k11 = 0;
	j11 = 0;
	i11 = 0;
	lif = 0;
	//slif3 = 0;
	pla = 0;
	cooo = 0;
	clovec = 0;
	coun = 0;
	co = 0;
	co2 = 0;
}

void gamescreen(){

	if (flag == 1){

		if (start == 1){
			//mciSendString("play music//start.wav", NULL, 0, NULL);
			start = 0;
		}


		if (cc3 == 1){
			xlove = xaxis + 9000;
			cc3 = 0;
			clove = 1;
		}

		if (cc == 1){
			xcoin1 = xaxis;
			cc = 0;
			cmone1 = 1;
		}

		if (cc2 == 1){
			xcoin2 = xaxis;
			cc2 = 0;
			cmone2 = 1;
		}


		mm = 1;
		nn = 0;


		for (i = 0; i < slices; i++){

			iShowBMP(imageposition[i], 0, imagename[i]);
		}
		if (pause == 0){

			if (sc == 0){
				if (i11 >= 9){
					i11 = 0;
					if (j11 >= 9){
						j11 = 0;
						if (k11 >= 9){
							k11 = 9;
						}
						else{
							k11 = k11 + 1;
						}
					}
					else{
						j11 = j11 + 1;
					}
				}
				else{
					i11 = i11 + 1;
				}
				scoregame++;
				sc = 1;
				scorecount++;
			}

		}

		iShowBMP2(scorex, scorey, score1[k11], 0);

		iShowBMP2(50, scorey, score1[j11], 0);

		iShowBMP2(100, scorey, score1[i11], 0);




		//life


		iShowBMP2(lifex105, lifey105, life105[lif], 0);
		if (pause == 0 && slife == 1){

			lif++;
			slife = 0;


		}
		if (lif >10){
			gs = 1;
			flag = 22;

		}
		if (pause == 0 && slife3 == 1 && lif != 0){
			slife3 = 0;
			lif = lif - 1;
			if (lif < 0){
				lif = 0;
			}


		}




		iShowBMP2(xplane, yplane, plannew[pla], 0);
		if (pause == 0){
			pla++;
		}
		if (pla == 8){
			pla = 0;
		}
		/*iShowBMP2(x1, yy, plane[count], 0);
		count++;
		if (count == 9){
		count = 1;
		}

		*/


		if (clove == 1){
			ylove = randomlove(ylove);

			clove = 0;
		}
		// PLANE OPERATING SYSTEM //*************
		if (mone == 1)
		{
			ybullet = random(ybullet);

			mone = 0;
		}
		if (mone1 == 1)
		{

			ybullet1 = random1(ybullet1);

			mone1 = 0;
		}

		if (mone2 == 1)
		{

			ybullet2 = random2(ybullet2);

			mone2 = 0;
		}

		if (mone3 == 1)
		{

			ybullet3 = random3(ybullet3);
			mone3 = 0;
		}
		if (mone4 == 1)
		{
			ybullet4 = random(ybullet4);

			mone4 = 0;
		}

		if (cmone1 == 1)
		{
			ycoin1 = randomcoin1(ycoin1);

			cmone1 = 0;
		}

		if (cmone2 == 1)
		{
			ycoin2 = randomcoin2(ycoin2);

			cmone2 = 0;
		}



		iShowBMP2(xbullet, ybullet, fire[cooo], 0);
		if (pause == 0){
			cooo++;
		}
		if (cooo == 3){
			cooo = 0;
		}
		iShowBMP2(xbullet1, ybullet1, "Obstacle//object.bmp", 0);
		iShowBMP2(xbullet2, ybullet2, "Obstacle//fire.bmp", 0);
		iShowBMP2(xbullet3, ybullet3, "Obstacle//fire.bmp", 0);
		iShowBMP2(xbullet4, ybullet4, spike[coun], 0);
		iShowBMP2(xlove, ylove, heal[clovec], 0);
		if (pause == 0){

			clovec++;
		}
		if (clovec == 4){
			clovec = 0;

		}


		if (pause == 0){
			coun++;
		}
		if (coun == 1){
			coun = 0;
		}


		iShowBMP2(xcoin1, ycoin1, coin[co], 0);
		if (pause == 0){
			co++;
		}
		if (co == 3){
			co = 0;
		}


		iShowBMP2(xcoin2, ycoin2, coin[co2], 0);
		if (pause == 0){
			co2++;

		}
		if (co2 == 3){
			co2 = 0;
		}
		if (pause == 0){
			xbullet = xbullet - 30;
			xbullet1 = xbullet1 - 40;
			xbullet2 = xbullet2 - 10;
			xbullet3 = xbullet3 - 20;
			xbullet4 = xbullet4 - 20;
			xcoin1 = xcoin1 - 20;
			xcoin2 = xcoin2 - 20;
			xlove = xlove - 20;

		}
		if (xlove <= -8000){
			xlove = xaxis;
			clove = 1;
		}

		if (xbullet <= 0){
			xbullet = xaxis;
			mone = 1;

		}
		if (xbullet1 <= 0){
			xbullet1 = xaxis;
			mone1 = 1;

		}
		if (xbullet2 <= 0){
			xbullet2 = xaxis;
			mone2 = 2;

		}
		if (xbullet3 <= 0){
			xbullet3 = xaxis;
			mone3 = 1;

		}
		if (xbullet4 <= 0){
			xbullet4 = xaxis;
			mone4 = 1;

		}
		if (xcoin1 <= 0){
			xcoin1 = xaxis;
			cmone1 = 1;
		}

		if (xcoin2 <= -300){
			xcoin2 = xaxis;
			cmone2 = 1;
		}



		//iShowBMP2(xplane, yplane, "plane//plane000.bmp", 0);

		//problem 1

		//if ((xbullet4 >= xplane && xbullet3+127 <=xplane+77) && (ybullet4>= yplane && ybullet4+68<=yplane+81 )){
		//printf("spike crash\n");
		//	}


		//if (bulletvillainx>=xplane+80)

		if (scoregame >= 25){
			if (cn11 == 0){
				mciSendString("play music//halfway.wav", NULL, 0, NULL);
				cn11 = 1;
			}
			iShowBMP2(xvillain, yvillain, "Obstacle//villain10.bmp", 0);
			iShowBMP2(bulletvillainx, bulletvillainy, "Obstacle//villainbullet.bmp", 0);
			if (pause == 0){
				bulletvillainy = bulletvillainy - 5;
				tempbu = tempbu - 5;
			}

			if (tempbu <= 300 && pause == 0){
				iShowBMP2(bulletvillainx2, bulletvillainy2, "Obstacle//villainbullet.bmp", 0);
				bulletvillainy2 = bulletvillainy2 - 5;
				if (bulletvillainy2 <= 0){
					bulletvillainy2 = yvillain + 31;
				}
				bulletvillainx2 = xvillain + 113;
			}
			if (bulletvillainy <= 0 && pause == 0){
				bulletvillainy = yvillain + 31;
			}
			bulletvillainx = xvillain + 113;

			if (vv == 0 && pause == 0){
				xvillain = xvillain - 5;
				if (xvillain <= 0){
					vv = 1;

				}
			}


			if (vv == 1 && pause == 0){
				xvillain = xvillain + 5;
				if (xvillain >= 1200 - 250){
					vv = 0;
				}
			}
		}



		if ((ybullet > yplane - 76 + 12 && ybullet + 76 <= yplane + 72 + 76) && (xbullet >= xplane + 80 && xbullet <=xplane+80+20)){
		//printf("Crashed\n");
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		slife=1;
		//sc = 0;
		}
		
		/*if (((xbullet >= xplane) && (xbullet <= xplane + 80)) && ((ybullet-75 <= yplane) && (ybullet+75 >= yplane + 73))){
		printf("Crashed\n");
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		slife = 1;
		}*/

		/*if (((yplane + 73 <= ybullet) && (yplane >= ybullet + 75)) && (xplane >= xbullet && xplane + 80 <= xbullet)){

			printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;

		}*/

		if ((ybullet1 + 0 >= yplane + 12 - 26 && ybullet1 + 26 <= yplane + 72 + 26) && (xbullet1 >= xplane + 80 && xbullet1 <= xplane + 80 + 20)){
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;
			//sc =0;
		}
		if ((ybullet2 + 8 >= yplane - 35 + 12 && ybullet2 + 35 <= yplane + 72 + 35) && (xbullet2 >= xplane + 80 && xbullet2 <= xplane + 80 + 10)){
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;

		}

		if ((ybullet3 + 8 >= yplane - 35 + 12 && ybullet3 + 35 <= yplane + 72 + 35) && (xbullet3 >= xplane + 80 && xbullet3 <= xplane + 80 + 10)){
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;

		}

		if ((ycoin1 - 90 <= yplane + 12 && yplane + 72 <= ycoin1 + 90 + 71) && xcoin1 >= xplane + 80 && xcoin1 <= xplane + 80){
			sc = 0;
			//printf("coin\n");
			mciSendString("play music//coin.wav", NULL, 0, NULL);
			cc = 1;
		}
		if ((ycoin2 - 90 <= yplane + 12 && yplane + 72 <= ycoin2 + 90 + 71) && xcoin2 >= xplane + 80 && xcoin2 <= xplane + 80){
			sc = 0;
			//printf("coin\n");
			mciSendString("play music//coin.wav", NULL, 0, NULL);
			cc2 = 1;
		}
		if ((yvillain  <= yplane + 12+71 && yplane + 72 <= yvillain + 174 + 71) && xvillain >= xplane + 80 && xvillain <= xplane + 80){
			
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;
		}

		if ((ybullet4 >= yplane - 68 + 12 && ybullet4 + 68 <= yplane + 72 + 68) && (xbullet4 >= xplane + 80 && xbullet4 <= xplane + 80 + 20)){
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;
		}
		/*
		if ((bulletvillainy >= yplane - 84 + 12 && ybullet4 + 84 <= yplane + 72 + 84) && (bulletvillainx >= xplane + 80 && bulletvillainx <= xplane + 80 + 10)){
		printf("Crashed\n");
		slife = 1;
		}
		*/
		if (((bulletvillainx >= xplane) && (bulletvillainx <= xplane + 80)) && ((bulletvillainy >= yplane) && (bulletvillainy <= yplane + 73))){
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;
		}
		if (((bulletvillainx2 >= xplane) && (bulletvillainx2 <= xplane + 80)) && ((bulletvillainy2 >= yplane) && (bulletvillainy2 <= yplane + 73))){
			//printf("Crashed\n");
			mciSendString("play music//blast.wav", NULL, 0, NULL);
			slife = 1;
		}
		if ((ylove - 71 <= yplane + 12 && yplane + 72 <= ylove + 71 + 71) && xlove >= xplane + 80 && xlove <= xplane + 80){
			cc3 = 1;
			slife3 = 1;
			//printf("heal\n");
			mciSendString("play music//love.wav", NULL, 0, NULL);
		}







	}
	if (pause == 1){
		iShowBMP2(0, 0, "menu//pause.bmp", 0);
	}
}


void flag2(){

	if (flag == -2){

		exit(1);
	}
	if (flag == -1){
		if (flagmusic == 0){
			PlaySound("music//beginning.WAV", NULL, SND_LOOP | SND_ASYNC);
			flagmusic = 1;
		}
		iShowBMP(0, 0, "menu//exit.bmp");

		exit1 = 1;
		mm = 1;
		nn = 1;

		if (cp == 1){

			yplanered = random(yplane);
			cp = 0;

		}

		iShowBMP2(tempo, yplanered, plannew[pla], 0);


		pla++;
		if (pla == 8){
			pla = 0;
		}

		tempo = tempo + 10;
		if (tempo >= xaxis){
			tempo = 0;
			cp = 1;
		}
		if (yplanered >= 630){
			yplanered = 630;
		}
		if (yplanered <= 0){
			yplanered = 0;
		}



	}


}


void flag6(){
	if (flag == 6){
		if (flagmusic == 0){
			//PlaySound("music//beginning.WAV", NULL, SND_LOOP| SND_SYNC);
			//mciSendString("play music//beginning.wav", NULL, 0, NULL);
			flagmusic = 1;
		}
		iShowBMP(0, 0, "menu//instruction.bmp");
		mm = 1;
		nn = 0;

		if (cp == 1){

			yplanered = random(yplane);
			cp = 0;

		}

		iShowBMP2(tempo, yplanered, plannew[pla], 0);


		pla++;
		if (pla == 8){
			pla = 0;
		}

		tempo = tempo + 10;
		if (tempo >= xaxis){
			tempo = 0;
			cp = 1;
		}
		if (yplanered >= 630){
			yplanered = 630;
		}
		if (yplanered <= 0){
			yplanered = 0;
		}

	}
}


void flag5(){

	if (flag == 5){
		if (flagmusic == 0){
			//PlaySound("music//beginning.WAV", NULL,SND_LOOP| SND_SYNC);
			//mciSendString("play music//beginning.wav", NULL, 0, NULL);
			flagmusic = 1;
		}
		iShowBMP(0, 0, "menu//Author_Details.bmp");
		mm = 1;
		nn = 0;

		if (cp == 1){

			yplanered = random(yplane);
			cp = 0;

		}

		iShowBMP2(tempo, yplanered, plannew[pla], 0);


		pla++;
		if (pla == 8){
			pla = 0;
		}

		tempo = tempo + 10;
		if (tempo >= xaxis){
			tempo = 0;
			cp = 1;
		}
		if (yplanered >= 630){
			yplanered = 630;
		}
		if (yplanered <= 0){
			yplanered = 0;
		}

	}
}

void flag105(){
	nn = 0;
	mm = 1;
	
	iShowBMP2(0, 0, "Menu//highscore.bmp", 0);
	iText(458, 397, readHighScore, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(453, 290, showSecond, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(455, 187, showThird, GLUT_BITMAP_TIMES_ROMAN_24);
}

void flag0(){
	if (flag == 0){



		if (flagmusic == 0){
			//PlaySound("music//beginning.WAV", NULL, SND_LOOP|SND_SYNC);
			//mciSendString("play music//beginning.wav", NULL, 0, NULL);

			flagmusic = 1;
		}
		//flagmusic = 1;



		iShowBMP(00, 00, "menu//welcomeimage2.bmp");
		mm = 0;
		if (cp == 1){

			yplanered = random(yplane);
			cp = 0;

		}

		iShowBMP2(tempo, yplanered, plannew[pla], 0);


		pla++;
		if (pla == 8){
			pla = 0;
		}

		tempo = tempo + 10;
		if (tempo >= xaxis){
			tempo = 0;
			cp = 1;
		}
		if (yplanered >= 630){
			yplanered = 630;
		}
		if (yplanered <= 0){
			yplanered = 0;
		}


	}

}

void readScore(){
	FILE *fs;
	fs = fopen("score.txt", "r+");
	if (fs == NULL)
	{
		//cout << "File not found!" << endl;
	}
	//reading file------------------------------------------------------------------------
	int i = 0;
	while ((fscanf(fs, "%d", &loadScore)) != EOF){
		arr[i++] = loadScore;
	}

	

	//bubble sorting ---------------------------------------------------------------
	int temp;
	for (int i = 1; i<3; ++i)
	for (int j = 0; j<i; ++j)
	if (arr[j]>arr[i]){
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
	//---------------------------------------------------------------------------------

	//fscanf(fs, "%d", &loadScore);
	int j = 2;
	//int tmp = loadScore;
	int tmp = arr[2];
	while (j >= 0){
		readHighScore[j] = tmp % 10 + '0';
		tmp = tmp / 10;
		j--;
	}


	j = 2;
	tmp = arr[1];
	while (j >= 0){
		showSecond[j] = tmp % 10 + '0';
		tmp = tmp / 10;
		j--;
	}
	j = 2;
	tmp = arr[0];
	while (j >= 0){
		showThird[j] = tmp % 10 + '0';
		tmp = tmp / 10;
		j--;
	}

	fclose(fs);
}
void backGroundChange(){
	int i;
	if (pause9)
	for (i = 0; i < backGroundslice; i++){
		position[i] -= width9;
		if (position[i] < 0){
			position[i] = (backGroundslice*width9) - width9;
		}
	}
}



void backGroundPossition(){
	int i, j;
	if (pause9)
	for (i = 0, j = 0; i < backGroundslice; i++){
		position[i] = j;
		j += width9;
	}
}
void iDraw()
{
	iClear();
	//::::::::::::::::::::::::::::::::Game Background Mark 1::::::::::::::::::::::::::::::::::::::::::::: 
	switch (backgroundNo){
	case 1:
		if (pause == 0 && flag == 22){
			gs = 0;

			gameOover();
			if (cn1 == 0){
				mciSendString("play music//gameover.wav", NULL, 0, NULL);
				cn1 = 1;
			}


		}
		
		gamescreen();
			
		break;
		//:::::::::::::::::::::::::::::::::::: END :::::::::::::::::::::::::::::::::::::::::::::::::

		//::::::::::::::::::::::::::::::::::::Game Background Mark 2::::::::::::::::::::::::::::::::
	case 2:
		int j;
		for (j = 0; j < backGroundslice; j++){
			iShowBMP(position[j], 0, img[j]);
		}
		iShowBMP2(0, 570, life9[life_index], 0);
		iShowBMP2(0, 630, score[score_i], 0);
		iShowBMP2(50, 630, score[score_j], 0);
		iShowBMP2(100, 630, score[score_k], 0);
		if (pause9)
			indexSpreed++;
		if (indexSpreed == indexSpreedRange&&pause9){    //indexSpreedRange 5-10 best  
			imgIndex++;
			indexSpreed = 0;
			if (imgIndex == 47)
				imgIndex = 0;
		}
		iSetColor(255, 0, 0);
		// Player Shooting------------------------------------------------------------
		if (pause9)
			iFilledCircle(fire_x += fire_rate, fire_y + 10, 10);
		fire_rate = 80;
		if (fire_x + fire_rate >= 1200){
			fireKey = true;
			int fire_y = 1000;
			int fire_x = 0;
		}
		//------------------------End Shooting----------------------------------------
		//Enemy----Shooting----------------------------------------------------------
		iSetColor(246, 7, 127);
		if (pause9)
			iFilledCircle(enimyFire_x -= enemyFire_rate, enimyFire_y + 10, 10);
		enemyFire_rate = 15;
		if (enimyFire_x + enemyFire_rate <= 500){
			enimyFire_x = enemy_x;
			enimyFire_y = enemy_y;
		}

		//Enemy----Shooting----------------------------------------------------------


		//------------------------player-----------------------------------------------
		iShowBMP2(player_x, player_y, player[player_count], 0);
		player_count++;
		if (player_count == 7)                       //player randering 
			player_count = 0;
		//--------------------------------------------------------------------------------
		//Enemy---------------------------------------------------------------------------
		iShowBMP2(enemy_x, enemy_y, "enemy9\\1.bmp", 0);
		if (pause9){
			enemy_y += updownRate;
			if (enemy_y + 83 >= 700)
				updownRate = -5;
			else if (enemy_y <= 0)
				updownRate = 5;
			//-------------------------------------------------------------------------------------------

			//Score---------------------------------------------------------------------------------------
			if ((fire_x) >= enemy_x && (fire_x) <= (enemy_x + 100) && (fire_y) >= enemy_y && (fire_y) <= (enemy_y + 83)){
				score_k++;
				if (score_k == 9){
					score_j++;
					score_k = 0;
				}
				if (score_j == 9){
					score_i++;
					score_j = 0;
				}
				point = score_i * 100 + score_j * 10 + score_k;
			}
			//End Of score-------------------------------------------------------------------------------------------------------
			//Life LEVEL----------------------------------------------------------------------------------------------------
			if ((enimyFire_x) >= player_x && (enimyFire_x) <= (player_x + 100) && (enimyFire_y) >= player_y && (enimyFire_y) <= (player_y + 83)){
				hitCount++;
				if (hitCount == 5){
					life_index--;
					hitCount = 0;
				}
				if (life_index == 0){
					PlaySound("sound9\\backGround_2.WAV", NULL, SND_ASYNC);
					backgroundNo = 0;
					imgIndex = 0;



					pointx = point;
					int i = 2;
					while (i >= 0){
						scoreShow[i] = point % 10 + '0';
						point = point / 10;
						i--;
					}
				}
			}
			if (point >= 50){
				mciSendString("play music//complete.wav", NULL, 0, NULL);
				iShowBMP2(xaxis23, 0, "score//level2.bmp", 0);
				while (xaxis23 <= -xaxis23){
					xaxis23 = xaxis23 - 5;
				}
				backgroundNo = 1;
				k11 = score_i;
				j11 = score_j;
				i11 = score_k;
			}
		}
		else if (!pause9){
			iShowBMP2(100, 25, "otherIcon9\\pause.bmp", 0);
		}
		//-------------------------------------------------END Of LIFE LEVEL-----------------------------------------
		break;


		//:::::::::::::::::::::::::::::::::::: END :::::::::::::::::::::::::::::::::::::::::::::::::

		//::::::::::::::::::::::::::::::::::::Game Background Mark 3::::::::::::::::::::::::::::::::
		
	case 3:
		//scr = 1;
		
		int k;
		for (k = 0; k < backGroundslice; k++){
			iShowBMP(position[k], 0, img[k]);
		}
		iShowBMP2(obstracle_x, obstracle_y, "Obstracle9\\1.bmp", 0);
		iShowBMP2(obstracle_x2 + 63, 0, "Obstracle9\\block.bmp", 0);
		iShowBMP2(obstracle_x1, obstracle_y1, "Obstracle9\\3.bmp", 0);
		iShowBMP2(coin_x, coin_y, coin9[coin_index], 0);
		iShowBMP2(0, 570, life9[life_index], 0);
		iShowBMP2(0, 630, score[score_i], 0);
		iShowBMP2(50, 630, score[score_j], 0);
		iShowBMP2(100, 630, score[score_k], 0);
		if (pause9){
			indexSpreed++;

		}
		if (indexSpreed == indexSpreedRange && pause9){ //indexSpreedRange 5-10 best
			imgIndex++;
			obstracle_x -= obstracle_rate;                    // 60 is perfect with background. 
			obstracle_x1 -= obstracle_rate;
			obstracle_x2 -= obstracle_rate;
			coin_x -= obstracle_rate;

			coin_index++;
			if (coin_index == 4)
				coin_index = 0;

			indexSpreed = 0;
			if (imgIndex == 47)
				imgIndex = 0;
			if (obstracle_x <= 0){
				scr = 1;
				obstracle_x = 1200;
				obstracle_count++;
			}

			if (obstracle_x1 <= 0){
				obstracle_x1 = 1200;
				obstracle_x2 = 1200;
				coin_x = 1225;
			}
			if (obstracle_count <= 2){
				obstracle_y1 += 2;
				obstracle_y += 2;
				coin_y += 2;
			}
			else{
				obstracle_y = 400;
				obstracle_y1 = 100;
				obstracle_count = 0;
				coin_y = 300;

			}
			if (point >= 20){                      //abstracle rate will increase after point 50
				obstracle_rate = 50;
			}
			if (point >= 30){                      //game change after 80 point

				backgroundNo = 2;
			}
			
			
			if (player_x >= obstracle_x  && player_x <= obstracle_x + 150 && player_y >= obstracle_y1 + 180 && player_y + 83 <= obstracle_y){
				if (scr == 1){
					scr = 0;
					mciSendString("play music//coin.wav", NULL, 0, NULL);
				}
				score_k++;
				if (score_k == 9){
					score_j++;
					score_k = 0;
				}
				if (score_j == 9){
					score_i++;
					score_j = 0;
				}
				point = score_i * 100 + score_j * 10 + score_k;
				coin_x = -10;
			}


			
			if (player_x >= obstracle_x  && player_x <= obstracle_x + 150 && (player_y <= obstracle_y1 + 180 || player_y + 83 >= obstracle_y)){
				musicOn = false;
				mciSendString("play music//blast.wav", NULL, 0, NULL);
				//PlaySound("sound9\\crash.WAV", NULL, SND_ASYNC);
				iShowBMP2(player_x, player_y, fire9[fire_index], 0);
				fire_index++;
				life_index--;
				if (life_index == 0){
					backgroundNo = 0;
					imgIndex = 0;


					pointx = point;
					int i = 2;
					while (i >= 0){
						scoreShow[i] = point % 10 + '0';
						point = point / 10;
						i--;
					}
				}
			}
		}
		else if (!pause9){
			iShowBMP2(100, 25, "otherIcon9\\pause.bmp", 0);
		}

		iShowBMP2(player_x, player_y, player[player_count], 0);
		player_count++;
		if (player_count == 7)
			player_count = 0;

		break;
		//:::::::::::::::::::::::::::::::::::::::::::END:::::::::::::::::::::::::::::::::::::::::::::::

		//::::::::::::::::::::::::::::::::::::Game Over Background::::::::::::::::::::::::::::::::
	case 0:        // Save Score after game Over---------------------------------------
		iSetColor(146, 13, 208);
		iShowBMP(0, 0, gameOver[imgIndex]);
		if (loadScore > pointx){
			iShowBMP2(500, 300, "otherIcon9\\score.bmp", 0);
			iShowBMP2(500, 200, score[score_i], 0);
			iShowBMP2(600, 200, score[score_j], 0);
			iShowBMP2(700, 200, score[score_k], 0);
			FILE *fs;
			fs = fopen("score.txt", "r+");
			if (fs == NULL)
			{
				//cout << "File not found!" << endl;
			}
			int i = 3;
			arr[3] = pointx;
			int temp;
			for (int i = 1; i<4; ++i)
			for (int j = 0; j<i; ++j)
			if (arr[j]>arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

			while (i>0){
				fprintf(fs, "%d ", arr[i--]);
				//cout << i << " " << endl;
			}

			//fprintf(fs, "%d", pointx);
			fclose(fs);
		}
		else{
			iShowBMP2(500, 300, "otherIcon9\\hi_score.bmp", 0);
			iShowBMP2(500, 200, score[score_i], 0);
			iShowBMP2(600, 200, score[score_j], 0);
			iShowBMP2(700, 200, score[score_k], 0);
			FILE *fs;
			fs = fopen("score.txt", "r+");
			if (fs == NULL)
			{
				//cout << "File not found!" << endl;
			}
			int i = 3;
			arr[3] = pointx;
			int temp;
			for (int i = 1; i<4; ++i)             ////bubble sorting ---------------------------------------------------------------
			for (int j = 0; j<i; ++j)
			if (arr[j]>arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

			while (i>0){
				fprintf(fs, "%d ", arr[i--]);
				//cout << i << " " << endl;
			}

			//fprintf(fs, "%d", pointx);
			fclose(fs);

		}
		imgIndex++;
		if (imgIndex == 27)
			imgIndex = 0;

		break;
		//:::::::::::::::::::::::::::::::::::::::::::END:::::::::::::::::::::::::::::::::::::::::::::::
	case 4:
		flag105();
		flag0();

		flag2();

		flag6();

		flag5();

		

		
		break;
		//:::::::::::::::::::::::::::::::::::::::::::END:::::::::::::::::::::::::::::::::::::::::::::::



	}


}

void change(){
	for (i = 0; i < slices; i++){
		imageposition[i] -= width;
		if (imageposition[i] < 0){
			imageposition[i] = (width * slices) - width;
		}

	}



}


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


int cucu = 0;
void iMouseMove(int mx, int my)
{
	printf("x=%d y=%d\n", mx, my);
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	mousePoint_x = mx;
	mousePoint_y = my;
}

void iMouse(int button, int state, int mx, int my)
{


	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (countu == 1){
			cucu = 1;
			bool bip = true;
			if ((mx >= 689 && mx <= 866) && (my >= 54 && my <= 125)){
				if (bip){
					bip = false;
					//PlaySound("music//bip.WAV", NULL, SND_SYNC);
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}

				flag = 0;
				countu = 0;
				backgroundNo = 4;

			}

		}
		if (mm == 0){

			bool bip = true;


			if ((mx >= 163 && mx <= 427) && (my >= 436 && my <= 498)){
				if (bip){
					bip = false;
					//PlaySound("music//bip.WAV", NULL, SND_SYNC);
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = 1;
				if (one == 1){
					one = 0;
					mciSendString("play music//start.wav", NULL, 0, NULL);
				}

				if (cucu == 1){
					temp();
					temp2();
					scorecount = 0;
					cucu = 0;
				}

				backgroundNo = 3;
			}
			if ((mx >= 155 && mx <= 441) && (my >= 168 && my <= 228)){
				if (bip){
					bip = false;
					//			PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = 5; // about triggo
			}

			if ((mx >= 175 && mx <= 415) && (my >= 347 && my <= 408)){
				if (bip){
					bip = false;
					//		PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = 6;
			}
			if ((mx >= 244 && mx <= 346) && (my >= 82 && my <= 142)){
				if (bip){
					bip = false;
					//					PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}

				flag = -1;
			}
			if ((mx >= 169 && mx <= 418) && (my >= 259 && my <= 320)){
				if (bip){
					bip = false;
					//					PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = 105;
				//flag = -1;
			}

		}
		if (nn == 0){
			bool bip = true;

			if ((mx >= 0 && mx <= 161) && (my >= 653 && my <= 699)){
				if (bip){
					bip = false;
					//					PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = 0;
			}


		}
		if (exit1 == 1){
			bool bip = true;

			if ((mx >= 326 && mx <= 479) && (my >= 270 && my <= 383)){
				if (bip){
					bip = false;
					//PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = -2;
			}
			if ((mx >= 621 && mx <= 774) && (my >= 270 && my <= 382)){
				if (bip){
					bip = false;
					//					PlaySound("music//bip.WAV", NULL, SND_SYNC );
					mciSendString("play music//bip.wav", NULL, 0, NULL);
					flagmusic = 0;
				}
				flag = 0;
				exit1 = 0;
			}



		}
		//printf("x=%d y=%d\n", mx, my);

	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'm' || key == 'M'){
		if (backgroundNo == 3 || backgroundNo == 2){
			if (musicOn){
				musicOn = false;
				PlaySound(0, 0, 0);
			}
			else{
				musicOn = true;
				PlaySound("sound9\\backGround.WAV", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		else{
			if (music){
				music = false;
				PlaySound("music//music.WAV", NULL, SND_LOOP | SND_ASYNC);
			}
			else
			{
				music = true;
				PlaySound(0, 0, 0);
			}
		}
	}
	if ((key == 'w' || key == 'W') && pause9)
		player_y = player_y + 10;
	if ((key == 's' || key == 'S') && pause9)
		player_y = player_y - 10;
	if (key == 'p' || key == 'P'){
		if (pause9)
			pause9 = false;
		iPauseTimer(index);
		iPauseTimer(index1);
		pause = 1;
	}
	if (key == 'r' || key == 'R'){
		if (!pause9)
			pause9 = true;
		iResumeTimer(index);
		iResumeTimer(index1);
		pause = 0;
	}

	if ((key == 'b' || key == 'B') && fireKey){
		fire_y = player_y + 30;
		fire_x = player_x + 30;
		fire_rate = 0;
		fireKey = false;
	}


}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{
		if (xplane < 1115)
		{
			xplane = xplane + 20;

		}
		else
			xplane = 1115;


	}
	if (key == GLUT_KEY_LEFT)
	{
		if (xplane > 0){
			xplane = xplane - 20;

		}
		else
		{
			xplane = 0;
		}

	}

	if (key == GLUT_KEY_UP)
	{
		if (backgroundNo == 1){
			if (yplane < 630){
				yplane = yplane + 20;

			}
			else{
				yplane = 630;
			}
		}
		else{
			if (pause9 && player_y<630)
				player_y = player_y + 20;
			
			

		}



	}

	if (key == GLUT_KEY_DOWN)
	{
		if (backgroundNo == 1){
			if (yplane > 0){

				yplane = yplane - 20;

			}
			else{
				yplane = 0;
			}
		}
		else{
			if (pause9 && player_y>10) 
				player_y = player_y - 20;

			

		}
	}
	if (key == GLUT_KEY_HOME)
	{

	}

}



int main()
{
	backGroundPossition();
	iSetTimer(200, backGroundChange);
	imageposfunction();

	//	bullet1();

	//iSetTimer(500, bullet);
	index = iSetTimer(200, change);
	readScore();
	///srand((unsigned)time(NULL));
	iInitialize(frame_width, frame_height, "TriGGo");
	///updated see the documentations
	//if (musicOn){
		//PlaySound("sound9\\backGround.WAV", NULL, SND_LOOP | SND_ASYNC);
	//}
	if (true){
		musicflag = false;
		PlaySound("music//beginning.WAV", NULL, SND_LOOP | SND_ASYNC);
		flagmusic = 0;

	}
	iStart();
	return 0;
}