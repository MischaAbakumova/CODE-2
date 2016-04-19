//
//  Params.cpp
//  particleSystem
//
//  Created by Mischa Abakumova on 4/11/16.
//
//

#include "Params.hpp"

void Params::setup(){
    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eRad = 50;
    velRad = 100;
    lifeTime = 1.0;
    rotate = 90;
    
    force = 300;
  //  force = forceGui;
    spin = 10000;
    friction = 0.05;  //some number between 0 and 1
    
}
