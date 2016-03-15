//
//  Brunch.hpp
//  Project1
//
//  Created by Mischa Abakumova on 3/14/16.
//
//

#ifndef Brunch_hpp
#define Brunch_hpp

#include <stdio.h>
#include "ofMain.h"
#endif /* Brunch_hpp */

class Brunch : public ofBaseApp {
public:
    
    //methods
    void setup( float xPos, float yPos,
               float length,
               float maxSegments,
               float segmentsSinceStart,
               float angle,
               ofColor color);

    bool split; // flip state1 and state2
    
    
//    void drawBrunch();
//    void nextBrunch();
};