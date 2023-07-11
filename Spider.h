#pragma once
#include "ofMain.h"
class Spider :public ofRectangle
{
public:
	int vy;
	int vx;
	ofImage spiderImage;

	Spider();
	void setup();
	void update();
	void draw();
};