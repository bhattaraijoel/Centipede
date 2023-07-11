#include "Spider.h"
Spider::Spider()
{
	
}
void Spider::setup() 
{
	vy = -5;
	vx = 5;
	x = 900;
	y = 900;
	width = 25;
	height = 25;
	spiderImage.load("../../images/spider.jpg");


}
void Spider::update()
{
	x = x + vx;
	y = y + vy;
	if (x>975||x<0) {
		vx = vx * -1;
	}
	if (y>975||y<675) {
		vy = vy * -1;
	}
}
void Spider::draw()
{
	spiderImage.draw(x, y, width, height);
}