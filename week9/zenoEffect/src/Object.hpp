//
//  Object.hpp
//  zenoEffect
//
//  Created by Mischa Abakumova on 4/2/16.
//
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>
#include "ofMain.h"


class Object{
public:
    
    float catchUpSpeed;
    ofPoint pos;
    
    Object();
    
    void draw();
    void zeno(float speedX, float speedY);
    

};
#endif /* Object_hpp */
