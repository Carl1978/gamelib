//
//  EntityManager.h
//  gamelib
//
//  Created by Carl Phillips on 24/10/2018.
//
//

#include "EntityManager.h"
#include "Entity.h"

USING_NS_CC;

EntityManager::EntityManager(Scene* parent) {
	cocos2d::log("EntityManager::EntityManager");
    pParent = parent;
    cyc = 0;
    seq = 0.0;
}

EntityManager::~EntityManager()
{
	cocos2d::log("EntityManager::~EntityManager");
}

void EntityManager::init(void) {
	cyc = 0;
	seq = 0.0f;
}

void EntityManager::spawn(void) {
    
}

void EntityManager::deinit(void) {
	removeAllEntities();
}

void EntityManager::process(void) {
	Entity* pEntity = nullptr;
	for (int i = 0; i < pEntityList.size(); i++) {
		pEntity = pEntityList[i];
		if (pEntity && pEntity->status) {
			pEntity->process();
		}
	}

	cyc++;
	seq++;
}

void EntityManager::draw(void) {
    
}

void EntityManager::addEntity(Entity* pEntity) {
	if (pEntity) {
		pEntityList.push_back(pEntity);
	}
}

void EntityManager::removeAllEntities() {
	Entity* pEntity = nullptr;
	for (int i = 0; i < pEntityList.size(); i++) {
		pEntity = pEntityList[i];
		if (pEntity) {
			if (pEntity->pSprite) {
				pParent->removeChild(pEntity->pSprite);
			}
			delete pEntity;
			pEntity = nullptr;
		}
	}
}


