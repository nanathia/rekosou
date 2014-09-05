//
//  Title.cpp
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#include "Title.h"
#include "TitleBGI.h"

bool Title::init(){
    TitleBGI* bgi = new TitleBGI;
    bgi->init();
    this->addChild(bgi);
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
