//
//  Object.cpp
//  zenoEffect
//
//  Created by Mischa Abakumova on 4/2/16.
//
//

#include "Object.hpp"

Object::Object(){

    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    
    catchUpSpeed = 0.1;
    

}

void Object::draw(){
    ofDrawRectangle(pos.x, pos.y, 50, 50);
}

void Object::zeno(float speedX, float speedY){
    pos.x = catchUpSpeed * speedX + (1 - catchUpSpeed)*pos.x;
    pos.y = catchUpSpeed * speedY + (1 - catchUpSpeed)*pos.y;

}