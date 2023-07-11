#pragma once
#include "ofMain.h"
class Tree :public ofRectangle
{
public:
	ofImage hp4,hp3,hp2, hp1;
	int hitpoints;

	Tree();
	void setup();
	void update();
	void draw();
};
