//
//  Entity.h
//  gamelib
//
//  Created by Carl Phillips on 24/10/2018.
//
//

#ifndef __gamelib__EntityManager__
#define __gamelib__EntityManager__

#include <iostream>
#include "cocos2d.h"
#include "Entity.h"

USING_NS_CC;

class EntityManager {
public:
    Scene* pParent;

	std::vector<Entity*> pEntityList;
    
    char status;
    char state;
    int cyc;
    float seq;
    
    Sprite *pSprite;
    Sprite *pSpriteCurrent;
    
    EntityManager(Scene *parent);
    ~EntityManager();
    void init(void);
    void spawn(void);
    void deinit(void);
    void process(void);
    void draw(void);
	void addEntity(Entity* pEntity);
	void removeAllEntities();
};


#endif /* defined(__ChatBox__EntityManager__) */
