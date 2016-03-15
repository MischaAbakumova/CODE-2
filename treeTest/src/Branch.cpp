//
//  Branch.cpp
//  treeTest
//
//  Created by Mischa Abakumova on 3/14/16.
//
//

#include "Branch.hpp"

Branch firstBranch;
Branch secondBranch;

float number;
float depth = 13;
float lengthMultiplied = 0.5;
float theAngle = PI/2.5;


void Branch::setup(float xPos, float yPos, float length, float angle, float tNumber){
    number = tNumber;
    startXPos = xPos;
    startYPos = yPos;
    theta = angle;
    len = length;
    endXPos = startXPos + cos(theta)*len;
    endYPos = startYPos - sin(theta)*len;
    
    if (number < depth) {
        nextBranch();
        
    }    
}

void Branch::drawBranch(){
    float lineWidth = depth;
    
    for(int i=0; i< number; i++){
        lineWidth *= 0.75;
    }
    ofSetLineWidth(lineWidth);
    ofDrawLine(startXPos, startYPos, endXPos, endYPos);
    
    if (firstBranch.len > 2) {
        firstBranch.drawBranch();
    }
    if (secondBranch.len > 2) {
        secondBranch.drawBranch();
    }
    
}

void Branch::nextBranch(){
    firstBranch.setup(endXPos, endYPos, len*lengthMultiplied, theta+theAngle, number+1);
    secondBranch.setup(endXPos, endYPos, len*lengthMultiplied, theta-theAngle, number+1);
}

void Branch::updateBranches(float xPos, float yPos, float length, float angle){
    if (number > 0) {
        startXPos = xPos;
        startYPos = yPos;
        theta = angle;
        len = length;
        endXPos = startXPos + cos(theta)*len;
        endYPos = startYPos - sin(theta)*len;
        
        if (number < depth) {
            firstBranch.updateBranches(endXPos, endYPos, len*lengthMultiplied, theta+theAngle);
            secondBranch.updateBranches(endXPos, endYPos, len*lengthMultiplied, theta-theAngle);
        }
        
        
    }
}