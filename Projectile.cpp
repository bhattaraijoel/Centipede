#include "Projectile.h"
Projectile::Projectile() 
{

}
void Projectile::setup() 
{
	vy = -10;
	width = 2;
	height = 10;
}
void Projectile::update()
{
	y = y + vy;
}
void Projectile::draw()
{
	ofSetColor(255, 0, 0);
	ofDrawRectangle(x,y,width,height);
}