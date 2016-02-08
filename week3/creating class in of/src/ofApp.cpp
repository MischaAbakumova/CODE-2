#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    Mischa.smell = "good";
    Mischa.height = 11;
    Mischa.name = "Misch";
    Joe.height = 22;
    Mischa.r = 255;
    Mischa.g = 0;
    Mischa.b = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    cout << "Mischa smell:" << Mischa.smell<< endl;
    cout << "Mischa height:" << Mischa.height<< endl;
    cout << "Mischa name:" << Mischa.name<< endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    Mischa.draw(ofGetWidth()/2, ofGetHeight()/2);
    Joe.draw(ofGetWidth()/2-2*Joe.height, ofGetHeight()/2);

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
