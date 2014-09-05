//
//  Title.h
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#ifndef __rekosou__Title__
#define __rekosou__Title__

#include "cocos2d.h"
USING_NS_CC;

class Title: public Scene{
    
public:
    bool init() override;
    void update(float deltaTime) override;
//    bool onTouchBegan(Touch *pTouch, Event *pEvent) override;
};

#endif /* defined(__rekosou__Title__) */
