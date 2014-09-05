//
//  GameMain.h
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#ifndef __rekosou__GameMain__
#define __rekosou__GameMain__

#include "cocos2d.h"
USING_NS_CC;

class GameMain: public Scene{
public:
    GameMain();
    ~GameMain();
    bool init() override;
    void update(float deltaTime) override;
};

#endif /* defined(__rekosou__GameMain__) */
