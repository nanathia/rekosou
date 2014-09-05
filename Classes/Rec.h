//
//  Rec.h
//  rekosou
//
//  Created by 小林　伸 on 2014/09/06.
//
//

#ifndef __rekosou__Rec__
#define __rekosou__Rec__

#include "cocos2d.h"
USING_NS_CC;

class Rec: public Scene{
public:
    bool init() override;
    ~Rec();
    void update(float deltaTime) override;
};

#endif /* defined(__rekosou__Rec__) */
