#include "Flea.h"
Flea::Flea()
{

}
void Flea::setup()
{
	vy = 5;
	width = 20;
	height = 20;
	x = 10 + rand() % (1000 - 10 + 1);
	y = 0;
	fleaImage.load("../../images/flea.png");
}
void Flea::update()
{
	y = y + vy;
}
void Flea::draw()
{
	ofSetColor(255, 255, 255);
	fleaImage.draw(x, y, width, height);
}