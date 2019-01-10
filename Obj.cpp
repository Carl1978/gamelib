//
//  Obj.cpp
//  game
//
//  Created by Carl Phillips on 9/1/2019.
//
//

#include "Obj.h"

USING_NS_CC;

Obj::Obj() : Entity() {
	// TODO:
	cocos2d::log("Obj ctr...");
}

Obj::~Obj()
{
	// TODO:
	cocos2d::log("Obj dtr...");
}

Sprite* Obj::spawn(const std::string filename, Vec2 P) {
	Entity::spawn(P);

	pSprite = Sprite::create(filename);
	pos = P;
	pSprite->setPosition(P);
	type = "Obj";
	cocos2d::log("Obj::spawn()...");
	return pSprite;
}

Obj* Obj::create(const std::string filename, Vec2 P) {
	Obj* pObj = new Obj();
	pObj->spawn(filename, P);
	return pObj;
}

void Obj::init(void) {
	// TODO:
}

void Obj::deinit(void) {
	// TODO:
}

void Obj::process(void) {
	// TODO:
}

void Obj::draw(void) {
	// TODO:
}
