#pragma once
#include "ofMain.h"
class Flea :public ofRectangle
{
public:
	int vy;
	ofImage fleaImage;

	Flea();
	void setup();
	void update();
	void draw();
};
