//
//  Entity.h
//  gamelib
//
//  Created by Carl Phillips on 24/10/2018.
//
//

#include "Entity.h"

USING_NS_CC;

int Entity::currentID = 0;
int Entity::entitySize = 0;

Entity::Entity() {
	Entity::currentID++;
	Entity::entitySize++;

	id = Entity::currentID; // use this count value for this entity's unique ID
	pos = Point(0, 0);
	oldPos = Point(0, 0);
	vel = Point(0, 0);
	cyc = 0;
	seq = 0.0;
	bFlip = false;
	angle = 0.0;
	vAngle = 0.0;
	scaleX = 1.0;
	scaleY = 1.0;
	status = true;
	state = 0;
	name = "";
	type = "";
	size = Size(64, 64);
}

Entity::~Entity()
{
	if (Entity::entitySize > 0) {
		Entity::entitySize--;
	}
}

void Entity::spawn(Vec2 P) {
	pos = P;
	Entity::entitySize++;
	Entity::currentID++;
	id = Entity::currentID; // use this count value for this entity's unique ID
//	cocos2d::log("Entity::spawn()...");
}

Entity* Entity::create(Vec2 P) {
	Entity* pEntity = new Entity();
	pEntity->spawn(P);
	return pEntity;
}

void Entity::init(void) {
}

void Entity::deinit(void) {
	// TODO: add your own code in derived class
}

void Entity::process(void) {
	// TODO: add your own code in derived class
}

void Entity::draw(void) {
	// TODO: add your own code in derived class
}