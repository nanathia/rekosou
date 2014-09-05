//
//  GameMain.cpp
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#include "GameMain.h"
#include "Title.h"


GameMain::GameMain(){
    
}

GameMain::~GameMain(){
    
}

bool GameMain::init(){
    this->scheduleUpdate();
    Title* title = new Title;
    title->init();
    this->addChild(title);
    return true;
}

void GameMain::update(float deltaTime){
    
}