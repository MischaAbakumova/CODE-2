#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    radius = 1;
    ofSetBackgroundColor(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    angle = ofGetElapsedTimef();  //increment angle based on the time passed
    float expandFactor = angle/radius;  //spacing out the spiral step
    radius += 20/TWO_PI*expandFactor;  //radius grows exponensially
    origin.x = ofGetWidth()/2;
    origin.y = ofGetHeight()/2;
    pos.x = origin.x+radius*cos(angle);
    pos.y = origin.y+radius*sin(angle);
    //ofEnableAlphaBlending();
    ofSetColor(255, 165, 0);
    //ofDisableAlphaBlending();
    ofDrawEllipse(pos.x, pos.y, 30, 30);


//    
   cout<<"angle: "<<angle<<endl;
//  cout<<"dimmer: "<<dimmer<<endl;
//    cout<<"pos.x: "<<pos.x<<endl;
//    cout<<"pos.y: "<<pos.y<<endl;
    cout<<"radius: "<<radius<<endl;
    cout<<"expand: "<<expandFactor<<endl;
    
    

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
