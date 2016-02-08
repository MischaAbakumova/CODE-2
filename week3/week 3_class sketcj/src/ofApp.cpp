#include "ofApp.h"



void ofApp::drawWord(string word){
    ofDrawBitmapString(word, ofGetWidth()/2, ofGetHeight()/2);
}

//--------------------------------------------------------------
void ofApp::setup(){
    phrase = "Hello World";
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/2;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(255, 0, 0);
    //ofDrawBitmapString("hello world", ofGetWidth()/2, ofGetHeight()/2);
    ofDrawBitmapString(phrase, position.x, position.y);
    drawWord(phrase);

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
