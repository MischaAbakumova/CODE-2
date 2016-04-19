//
//  Params.hpp
//  particleSystem
//
//  Created by Mischa Abakumova on 4/11/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>
#include "ofMain.h"


class Params{
public:
    
    void setup();
    ofPoint eCenter; //center of the emiter
    float eRad; //the size of the emiter
    float velRad; //bound of the velocity
    float lifeTime;  //max lifetime
    float time; //time since it was born
    float rotate;
    float force;
    float spin;
    float friction;
    
};

#endif /* Params_hpp */
