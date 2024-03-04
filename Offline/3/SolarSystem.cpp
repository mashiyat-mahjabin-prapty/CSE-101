# include "iGraphics.h"
# include "gl.h"

int sunX, sunY, sunR;
int planetMajorAxisLen[] = {210, 235, 260, 285, 320, 345, 370, 395, 420, 445};
int planetMinorAxisLen[] ={130, 155, 180, 205, 235, 260, 285, 310, 335};
int planetRadius[] = {12, 13, 15, 14, 20, 18, 16, 15, 8};
int planetSweepAngle[] = {10,20,70,50,30,60,90,70,35};
int planetDelSweepAngle[] = {5, 3, 4, 5, 1, 4, 5, 3, 2};
int m=0, l=0;
int satelliteR, satelliteSweepAngle[] = {5, 2};
int satellite_majoraxis[] = {20, 30};
int satellite_minoraxis[] = {5, 10};


void drawStar(int x, int y, int r) {

        iSetColor(rand()%256, rand()%256, 0);
        iFilledCircle(x, y, r);
}

void drawOrbit(int x, int y, int a, int b) {
    iSetColor(255, 255, 255);
    iEllipse(x, y, a, b);
}

void drawPlanet(int p, int x, int y, int orbitA, int orbitB, int planetR, int sweepAngle) {
    double pi = acos(-1);
    double sweepRadian = sweepAngle * pi / 180;
    int planetX = x + orbitA * cos(sweepRadian);
    int planetY = y + orbitB * sin(sweepRadian);

    if(p == 0)
        iSetColor(125, 125, 125);
    else if(p == 1)
        iSetColor(256, 125, 125);
    else if(p == 2)
        iSetColor(0, 256, 256);
    else if(p == 3)
        iSetColor(256, 0, 0);
    else if(p == 4)
        iSetColor(200, 125, 0);
    else if(p == 5)
        iSetColor(200, 125, 125);
    else if(p == 6)
        iSetColor(150, 125, 50);
    else if(p == 7)
        iSetColor(0, 50, 256);
    else if(p == 8)
        iSetColor(0, 20, 200);

    iFilledCircle(planetX, planetY, planetR);
}

void drawSatellite(
    int x,
    int y,
    int planetOrbitA,
    int planetOrbitB,
    int planetSweepAngle,
    int sat_majoraxis,
    int sat_minoraxis,
    int satelliteR,
    int satSweepAngle) {
    double pi = 2*acos(0);
    double planetSweepRadian = planetSweepAngle * pi / 180;
    double satelliteSweepRadian = satSweepAngle * pi / 180;

    int planetX = x + planetOrbitA * cos(planetSweepRadian);
    int planetY = y + planetOrbitB * sin(planetSweepRadian);

    int satelliteX = planetX + sat_majoraxis * cos(satelliteSweepRadian);
    int satelliteY = planetY + sat_minoraxis * sin(satelliteSweepRadian);

    if(l == 0)
    iEllipse(planetX, planetY, sat_majoraxis, sat_minoraxis);

    iSetColor(80, 80, 80);
    iFilledCircle(satelliteX, satelliteY, satelliteR);
}

void drawAsteroid(int i, int j, int major, int minor, int rad, int angle)
{
    double pi = acos(-1);
    double sweepRadian = angle * pi / 180;
    int asterX = i + major * cos(sweepRadian);
    int asterY = j + minor * sin(sweepRadian);
    iSetColor(255, 255, 255);
    iFilledCircle(asterX, asterY, rad);

}

void iDraw()
{
    double centerX, centerY;
	int i,j;

	iClear();

    iShowBMP(0, 0, "space.bmp");

	drawStar(sunX, sunY, sunR);

	for (i = 0; i < 9; i++) {
        centerX = sunX + sqrt(pow(planetMajorAxisLen[i], 2) - pow(planetMinorAxisLen[i], 2));
        centerY = sunY;
        if(m == 0){
                drawOrbit(centerX, centerY, planetMajorAxisLen[i], planetMinorAxisLen[i]);
        }

        drawPlanet(
            i,
            centerX,
            centerY,
            planetMajorAxisLen[i],
            planetMinorAxisLen[i],
            planetRadius[i],
            planetSweepAngle[i]
            );
        if (i == 2) {
            drawSatellite(
                centerX,
                centerY,
                planetMajorAxisLen[i],
                planetMinorAxisLen[i],
                planetSweepAngle[i],
                satellite_majoraxis[0],
                satellite_minoraxis[0],
                satelliteR,
                satelliteSweepAngle[0]
                );
        }
        if(i == 3){
                for(j=0;j<2;j++){
                   drawSatellite(
                centerX,
                centerY,
                planetMajorAxisLen[i],
                planetMinorAxisLen[i],
                planetSweepAngle[i],
                satellite_majoraxis[j],
                satellite_minoraxis[j],
                satelliteR,
                satelliteSweepAngle[j]
                );
            }
        }
	}

	centerX = sunX + sqrt(pow(300, 2) - pow(220, 2));
    centerY = sunY;
    int sweepangle = 5;
	for(i = 0; i < 1000; i++){
        drawAsteroid(centerX, centerY, 300, 220, 3, sweepangle);
        sweepangle+=4;
	}
	iSetColor(255, 255, 255);
	iText(10, 10, "Press p for pause, r for resume, END for exit.");

	iText(920, 650, "Press arrows for navigation");
	iText(920, 10, "Click the mouse for zoom in or out");
	iSetColor(255, 0, 255);
	iText(920, 680, "Press o or s and see the magic!");
}


void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
    int i;
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		sunR*=2;
		sunX*=2;
		sunY*=2;
		for(i = 0; i < 9; i++){
            planetMajorAxisLen[i]*=2;
            planetMinorAxisLen[i]*=2;
            planetRadius[i]*=2;
            planetSweepAngle[i]*=2;
            planetDelSweepAngle[i]*=2;
            if(i == 2 || i == 3){
                satelliteR+=2;
                satelliteSweepAngle[i]*=2;
                satellite_majoraxis[i]*=2;
                satellite_minoraxis[i]*=2;
            }

		}
	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		sunR/=2;
		sunX/=2;
		sunY/=2;
		for(i = 0; i < 9; i++){
            planetMajorAxisLen[i]/=2;
            planetMinorAxisLen[i]/=2;
            planetRadius[i]/=2;
            planetSweepAngle[i]/=2;
            planetDelSweepAngle[i]/=2;
            if(i == 2 || i == 3){
                satelliteR-=2;
                satelliteSweepAngle[i]/=2;
                satellite_majoraxis[i]/=2;
                satellite_minoraxis[i]/=2;
            }
        }
	}
}

void iKeyboard(unsigned char key)
{
	if(key == 'p' || key == 'P')
		iPauseTimer(0);
	if(key == 'r' || key == 'R')
		iResumeTimer(0);
	if(key == 'o' == key == 'O')
        m = 1;
    if(key == 'b' || key == 'B')
        m = 0;
    if(key == 's' || key == 'S')
        l = 1;
    if(key == 'd' || key == 'D')
        l = 0;
}

void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
		exit(0);

    if(key == GLUT_KEY_UP && sunY != 500)
        sunY+=2;

    if(key == GLUT_KEY_DOWN && sunY != 350)
        sunY-=10;

    if(key == GLUT_KEY_RIGHT && sunX != 630)
        sunX+=10;

    if(key == GLUT_KEY_LEFT && sunX != 370)
        sunX-=10;
}

void movePlanets(){
    int dSatelliteSweepAngle = 10;
    int i, j;

    for (i = 0; i < 9; i++) {
        planetSweepAngle[i] = (planetSweepAngle[i] + planetDelSweepAngle[i])%360;
        if(i == 2)
        satelliteSweepAngle[0] = (satelliteSweepAngle[0] + dSatelliteSweepAngle)%360;
        if(i == 3){
            for(j = 0; j < 2; j++)
              satelliteSweepAngle[j] = (satelliteSweepAngle[j] + dSatelliteSweepAngle)%360;
        }
    }
}

int main()
{
    const int CX_MAX = 1300;
    const int CY_MAX = 700;

    sunX = 400;
    sunY = 350;
    sunR = 35;
    satelliteR = 5;

	iSetTimer(50, movePlanets);
	iInitialize(CX_MAX, CY_MAX, "Solar system!");

    return 0;
}

