//
//  particle.cpp
//  particleSystem
//
//  Created by Mischa Abakumova on 4/11/16.
//
//

#include "particle.hpp"
//#include "Params.hpp"
Particle::Particle(){
    life = false;
}

ofPoint Particle::randomPointIncircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, TWO_PI);
    pnt.x = rad*cos(angle);
    pnt.y = rad*sin(angle);
    return pnt;
}

void Particle::setup(){
    pos = param.eCenter + randomPointIncircle(param.eRad);
    vel = randomPointIncircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    life = true;
    
}

void Particle::update(float dt){
    if(life){
        
        
        //rotate vel
        vel.rotate(0, 0, param.rotate*dt);
        ofPoint acc;  //create accelerattion
        ofPoint delta = pos - param.eCenter; //distance between particle $ emitter
        float len = delta.length();  //length to delta
        
        if(ofInRange(len, 0, param.eRad)){
            delta.normalize();  //to get a direction of the vector,normilize it so u don't have to do math
            cout<<"delta: "<<delta<<endl;
            
            //attraction and repolsion
            acc += delta*param.force;
            
            //spinning forces
            acc.x += delta.x*param.spin;
            acc.y += delta.y*param.spin;
        
        }
        
        vel += acc*dt;
        
        //friction
        vel *= (1-param.friction);
        
        //update position
        
        pos += vel*dt;
        
        //update time and check if it should die
        
        time += dt;
        
        if(time >=lifeTime){
            life=false;
        }
    
    }

}

void Particle::draw(){
    if(life){
        float size = ofMap(time, 0, lifeTime, 1, 3);
        ofColor color = ofColor::red;
        float hue = ofMap(time, 0, lifeTime, 128, 255);
        color.setHue(hue);
        ofSetColor(color);
        ofDrawCircle(pos, size);
    }
    
}