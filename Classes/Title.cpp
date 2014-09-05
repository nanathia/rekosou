//
//  Title.cpp
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#include "Title.h"
#include "TitleBGI.h"
#include "TitleStart.h"

bool Title::init(){
    TitleBGI* bgi = new TitleBGI;
    TitleStart* start = new TitleStart;
    bgi->init();
    start->init();
    this->addChild(bgi);
    this->addChild(start);
    this->scheduleUpdate();
//    auto listener = EventListenerTouchOneByOne::create();
//    listener->onTouchBegan = CC_CALLBACK_2(Layer::onTouchBegan, this);
//    listener->onTouchEnded = CC_CALLBACK_2(Layer::onTouchEnded, this);
//    this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    return true;
}

void Title::update(float deltaTime){
    
}

//bool Title::onTouchBegan(Touch *pTouch, Event *pEvent){
//    int i = 0;
//    return true;
//}
