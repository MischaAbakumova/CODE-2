//
//  person.hpp
//  creating class in of
//
//  Created by Mischa Abakumova on 2/8/16.
//
//

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#include <ofMain.h>

#endif /* person_hpp */

class person {
public:
    
    //properties
    int height;
    //ofColor fur;
    int r, g, b;
    string smell;
    string name;
    
    //methods
    void walk();
    void sleep();
    void talk();
    void eat();
    void draw(float xPos, float yPos);
};
