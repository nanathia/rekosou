//
//  TitleStart.cpp
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#include "TitleStart.h"
#include "TextureManager.h"
#include "Rec.h"

TitleStart::TitleStart():
m_rect(Rect(0.5, 0.1, 0.3, 0.05)){
    
}

TitleStart::~TitleStart(){
    delete m_tex;
}

bool TitleStart::init(){
//    this->scheduleUpdate();
    m_tex = new TextureManager;
    m_tex->add("titleRec.png", 0);
    m_tex->trueCreateSprite(0, this, Rect(0.0, 0.0, 1.0, 1.0), m_rect);
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = CC_CALLBACK_2(Layer::onTouchBegan, this);
    listener->onTouchEnded = CC_CALLBACK_2(Layer::onTouchEnded, this);
    this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    return true;
}

void TitleStart::update(float deltaTime){
    
}

bool TitleStart::onTouchBegan(Touch *pTouch, Event *pEvent){
    Vec2 vec = pTouch->getLocation();
    Size win = Director::getInstance()->getWinSize();
    Rect _rect = m_rect;
    _rect.origin.x -= _rect.size.width/2.0;
    _rect.origin.y -= _rect.size.height/2.0;
    if(_rect.containsPoint(Vec2(vec.x/win.width, vec.y/win.height))){
        Director::getInstance()->replaceScene(new Rec());
    }
    return true;
}
