//
//  Play.h
//  rekosou
//
//  Created by 小林　伸 on 2014/09/06.
//
//

#ifndef __rekosou__Play__
#define __rekosou__Play__

#include "cocos2d.h"
USING_NS_CC;

class Play: public Scene{
public:
    bool init() override;
    ~Play();
    void update(float deltaTime) override;
};

#endif /* defined(__rekosou__Play__) */
