#include "ofApp.h"




//--------------------------------------------------------------
void ofApp::setup(){
   // ofSetBackgroundAuto(false);
    //p.param.setup(); //calls param in the param class
    ofSetBackgroundColor(0, 0, 0);
    time0 = ofGetElapsedTimef();
    bornCount = 0;
    bornRate = 1000;
    
    gui.setup();
    gui.add(forceGui.setup("force", 300, 1, 1000));
    gui.add(frictionGui.setup("friction",0.05, 0, 1));
    gui.add(spinGui.setup("spin", 10000, 100, 10000));
    gui.add(rotateGui.setup("rotate",90, 1, 360));
    gui.add(velocityGui.setup("velocity",100, 1, 300));


}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    float dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    //delete dead particles
    for(int i=0; i<p.size(); i++){
        if (!p[i].life){
            p.erase(p.begin() + i);
        }
     }
    
    bornCount = bornRate*dt;
    
    //born new particles
    if(bornCount >= 1){
        int bornN = int(bornCount);
        for(int i = 0; i< bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);
        }
    }
    
    //create new particle
    
    for (int i = 0; i<p.size(); i++) {
        p[i].update(dt);
        p[i].param.force = forceGui;
        p[i].param.friction = frictionGui;
        p[i].param.spin = spinGui;
        p[i].param.rotate = rotateGui;
        p[i].param.velRad = velocityGui;
    }
    
//    if (!p.life){
//        p.setup();
//    }
//    p.update(dt);

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
   // p.draw();
    for (int i = 0; i<p.size(); i++) {
        p[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
