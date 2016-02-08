//
//  person.cpp
//  creating class in of
//
//  Created by Mischa Abakumova on 2/8/16.
//
//

#include "person.hpp"
#include "ofMain.h"


void person::walk(){

}
void person::sleep(){
    cout <<"I'm sleeping"<< endl; //use cout when u want to print smth into console
    
}
void person::talk(){
    
    cout <<"I'm talking"<< endl;
    
}
void person::eat(){
    cout <<"I'm eating"<< endl;
}

void person::draw(float xPos, float yPos){
    cout <<"I'm drawing"<< endl;
    ofDrawEllipse(xPos, yPos, height, height);
    ofSetColor(r, g, b);
    ofFill();
    
}