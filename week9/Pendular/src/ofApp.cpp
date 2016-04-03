#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    gui.setup();
    gui.add(radiusGui.setup("radius",ofGetWidth()/2,1,14));
    origin.x= 0;
    origin.y = 0;
    ofSetFrameRate(10);
    radius = ofGetWidth()/2;
    angle = PI/4;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    radius = radiusGui;

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofBackground(0, 0, 0);
    ofTranslate((ofGetWidth()/2), 0);
    ballBase.x= origin.x + radius*sin(angle);
    ballBase.y= origin.y + radius*cos(angle);
    ofSetColor(255, 165, 0);
    ofDrawLine(origin.x, origin.y, ballBase.x, ballBase.y); //+++++
    ofDrawEllipse(ballBase.x, ballBase.y, 30, 30);  //+++++
 
    cout << "ballBase.x:" <<ballBase.x<<endl;
    cout << "ballBase.y:" <<ballBase.y<<endl;
    
    sine = sin(ofGetElapsedTimef());
    angle = sine;
    
//    mapX = ofMap(sine, -1, 1, -ofGetWidth()/2+15, ofGetWidth()/2-15);
//    mapY = ofMap(sine, -1, 1, 0, ofGetHeight()/2);
//    cout << "sine" <<sine<<endl;
//    cout << "mapX: " <<mapX<<endl;
//    cout << "mapY: " <<mapY<<endl;
    
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
