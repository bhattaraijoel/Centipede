#include "Player.h"
Player::Player()
{
	
}
void Player::setup()
{
	playerImage.load("../../images/player.jpg");
	x=ofGetWidth()/2;
	y=ofGetHeight() / 1.125;
	width=10;
	height=20;
}
void Player::update()
{

}
void Player::draw()
{
	ofSetColor(255, 255, 255);
	playerImage.draw(x,y,width,height);
}