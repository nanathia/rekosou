//
//  TitleStart.h
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#ifndef __rekosou__TitleStart__
#define __rekosou__TitleStart__

#include "cocos2d.h"
USING_NS_CC;

class TextureManager;

class TitleStart: public Layer{
    TextureManager* m_tex;
    const Rect m_rect;
public:
    ~TitleStart();
    bool init() override;
    void update(float deltaTime) override;
    bool onTouchBegan(Touch *pTouch, Event *pEvent) override;
};

#endif /* defined(__rekosou__TitleStart__) */
