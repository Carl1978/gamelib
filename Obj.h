//
//  Obj.h
//  game
//
//  Created by Carl Phillips on 9/1/2019.
//
//

#ifndef __game__Obj__
#define __game__Obj__

#include <iostream>
#include "cocos2d.h"
#include "Entity.h"

USING_NS_CC;

class Obj : public Entity {
public:
	Obj();
    ~Obj();
    void init(void);
	Sprite* spawn(const std::string filename = "HelloWorld.png", Vec2 P = Vec2::ZERO);
	static Obj* Obj::create(const std::string filename = "HelloWorld.png", Vec2 P = Vec2::ZERO);
    void deinit(void);
    void process(void);
    void draw(void);
};

#endif /* defined(__game__Obj__) */
