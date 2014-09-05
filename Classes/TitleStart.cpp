//
//  TitleStart.cpp
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#include "TitleStart.h"
#include "TextureManager.h"

TitleStart::~TitleStart(){
    delete m_tex;
}

bool TitleStart::init(){
    this->scheduleUpdate();
    m_tex = new TextureManager;
    m_tex->trueCreateSprite(0, this, Rect(), Rect());
    return true;
}

void TitleStart::update(float deltaTime){
    
}

bool TitleStart::onTouchBegan(Touch *pTouch, Event *pEvent){
    
    return true;
}
