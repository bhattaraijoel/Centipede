#pragma once
#include "ofMain.h"
class Projectile :public ofRectangle
{
public:
	int vy;

	Projectile();
	void setup();
	void update();
	void draw();
};