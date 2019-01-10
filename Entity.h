//
//  Entity.h
//  gamelib
//
//  Created by Carl Phillips on 24/10/2018.
//
//

#ifndef __gamelib__Entity__
#define __gamelib__Entity__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class Entity {
public:
	// keep tack of the currentID of last entity spawned (always a unique nummber,  just keeps incremented annd will wrap eventually?!)
	static int currentID;
	// Keep track of total # of entity currently spawned
	static int entitySize;
    char status;
    int state;
	int id;
	std::string name;
	std::string type;
    int cyc;
    float seq;
    
    Sprite* pSprite;
    Sprite* pSpriteCurrent;
    
    Point pos;
    Point vel;
    Point gravity;
    Point oldPos;
	Size size;
    bool bFlip;
    float angle;
	float vAngle;
	float scaleX;
	float scaleY;
    
    Entity();
    ~Entity();
	void spawn(Vec2 P = Vec2::ZERO);
	static Entity* create(Vec2 P = Vec2::ZERO);
    virtual void init(void);
    virtual void deinit(void);
    virtual void process(void);
    virtual void draw(void);
};

#endif /* defined(__gamelib__Entity__) */
