//
//  TitleBGI.cpp
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#include "TitleBGI.h"
#include "TextureManager.h"

TitleBGI::~TitleBGI(){
    delete m_tex;
    m_tex = 0;
}
bool TitleBGI::init(){
    m_tex = new TextureManager;
    m_tex->add("titleBGI.png", 0);
    m_tex->add(" titleName.png", 1);
    m_tex->trueCreateSprite(0, this, Rect(0, 0, 1, 1), Rect(0.5, 0.5, 1, 1));
    m_tex->trueCreateSprite(1, this, Rect(0, 0, 1, 1), Rect(0.5, 0.75, 0.3, 0.1));
    this->scheduleUpdate();
    return true;
}
void TitleBGI::update(float deltaTime){
    
}