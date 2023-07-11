#pragma once
#include "ofMain.h"
class Player :public ofRectangle
{
public:
	ofImage playerImage;

	Player();
	void setup();
	void update();
	void draw();
};
