//
//  Brunch.cpp
//  Project1
//
//  Created by Mischa Abakumova on 3/14/16.
//
//

#include "Brunch.hpp"

void Brunch::setup(float xPos,
                   float yPos,
                   float length,
                   float maxSegments,
                   float segmentsSinceStart,
                   float angle,
                   ofColor color
                  // float timesSplit
                   ){    
    
    //2. check if it splits  Responsible for the vertical growth
    float minLength = 5;
    if(length > minLength){
        split = true;
    } else {
        split = false;
        
    }
    
    //3. draw the branches
    
    ofSetColor(color);
    ofDrawLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle));
    ofDrawEllipse(xPos + length*cos(angle), yPos + length*sin(angle), 15, 15);
    
    
    
    //4. update the variables
    xPos += length*cos(angle);  //cos(-PI/2) == 0;
    yPos += length*sin(angle); //sin(-PI/2) == -1;
    length *= 0.9; //shrinks the line length
    segmentsSinceStart++;
   // timesSplit ++;

    
    //5. recursion
 
 //need while loop to stop this branch bananza
    //while (timesSplit < 11) {
    
    if(segmentsSinceStart <= maxSegments){
        if(!split){
            
            //create one branch
            Brunch subBranch;
            subBranch.setup(xPos, yPos,  length,
                            maxSegments,
                            segmentsSinceStart,
                            angle,
                            color);
        }
        else {
            //create two branches
            
            Brunch subBranch1;
            
            float angle1 = angle + ofRandom(-PI/6, PI/6);
            subBranch1.setup(xPos, yPos, length,
                             maxSegments,
                             segmentsSinceStart,
                             angle1,
                             color);
            Brunch subBranch2;
            float angle2 = angle - ofRandom(-PI/6, PI/6);
            subBranch2.setup(xPos, yPos, length,
                             maxSegments,
                             segmentsSinceStart,
                             angle2,
                             color =ofColor(0, 0, 255));
            
            }
        }
                    cout << "segmentStart:"<<segmentsSinceStart<<endl;
    }
//}
