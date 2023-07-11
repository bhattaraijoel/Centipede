#include "Tree.h"
Tree::Tree()
{
	
}
void Tree::setup()
{
	hp4.load("../../images/hp4.jpg");
	hp3.load("../../images/hp3.jpg");
	hp2.load("../../images/hp2.jpg");
	hp1.load("../../images/hp1.jpg");
	hitpoints = 4;
	width = 10;
	height = 10;
}
void Tree::update()
{

}
void Tree::draw()
{
	 if (hitpoints == 4) 
	{
		hp4.draw(x, y,width,height);
	}
	else if (hitpoints == 3)
	{
		hp3.draw(x, y,width,height);
	}
	else if (hitpoints == 2)
	{
		hp2.draw(x, y,width,height);
	}
	else if (hitpoints == 1)
	{
		hp1.draw(x, y,width,height);
	}
	else if (hitpoints == 0)
	{
		x = 10000;
	}
	
}