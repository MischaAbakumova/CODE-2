//
//  particle.hpp
//  particleSystem
//
//  Created by Mischa Abakumova on 4/11/16.
//
//

#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Params.hpp"
#endif /* particle_hpp */

class Particle{
public:
    
    Particle();
    
    //variables
    Params param; //instance of parameters in the class
    ofPoint pos; // position of the particle
    ofPoint vel; // speed of the particle
    float time; // how long the particle has been living
    float lifeTime; //max time the particle can live
    bool life; //checks whether particle is alive or dead
    ofPoint randomPointIncircle(float maxRad); //random point in a circle
    
    void update(float dt);  //depends on the time span
    void setup();
    void draw();


};
