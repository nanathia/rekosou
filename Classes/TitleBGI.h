//
//  TitleBGI.h
//  rekosou
//
//  Created by 小林　伸 on 2014/09/05.
//
//

#ifndef __rekosou__TitleBGI__
#define __rekosou__TitleBGI__

#include "cocos2d.h"
USING_NS_CC;

class TextureManager;

class TitleBGI: public Layer{
    TextureManager* m_tex;
public:
    ~TitleBGI();
    bool init() override;
    void update(float deltaTime) override;
};

#endif /* defined(__rekosou__TitleBGI__) */
