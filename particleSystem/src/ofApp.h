#pragma once

#include "ofMain.h"
#include "Params.hpp"
#include "particle.hpp"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //Particle p; //ot create just one instance of the class
    float time;
    float time0;
    
    //to create many particles
    vector<Particle> p;
    float bornRate;
    float bornCount;
//    
    ofxFloatSlider rotateGui;
    ofxFloatSlider forceGui;
    ofxFloatSlider spinGui;
    ofxFloatSlider frictionGui;
    ofxFloatSlider velocityGui;
    ofxPanel gui;

};
