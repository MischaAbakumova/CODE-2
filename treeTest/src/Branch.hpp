//
//  Branch.hpp
//  treeTest
//
//  Created by Mischa Abakumova on 3/14/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>
#include "ofMain.h"

class Branch : public ofBaseApp{
 public:
    
    //methods
    void setup(float xPos,float yPos,
               float length,
               float angle,
               float tNumber);
    
    void drawBranch();
    void nextBranch();
    void updateBranches(float newXPos, float newYPos, float newLength, float newAngle);
    
    //properties
    
    float startXPos;
    float startYPos;
    float endXPos;
    float endYPos;
    float len;
    float theta;
    
};

#endif /* Branch_hpp */
