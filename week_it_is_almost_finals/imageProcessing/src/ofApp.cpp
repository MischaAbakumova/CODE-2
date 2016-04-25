#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.load("cats9.png");    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //draw the image
    myImage.draw(0,0);
//    count = 0;
    

    ofColor currentCol = myImage.getColor(ofGetMouseX(), ofGetMouseY());
    red = currentCol.r;
    green = currentCol.g;
    blue = currentCol.b;

    
    int width = myImage.getWidth();
    int height = myImage.getHeight();
    
    for(int i = 0; i < width; i++){
        for(int j = 0; j < height; j++){
                //checks all pixels color values
            ofColor pixColor = myImage.getColor(i,j);
             checkRed = pixColor.r;
             checkBlue = pixColor.b;
             checkGreen = pixColor.g;
             samePixelPosX = width;
             samePixelPosY = height;
            
            
            if(red == checkRed && green == checkGreen && blue == checkBlue){
                //cout << "1" << endl;
               // count++;
                //ofSetColor(checkRed,checkGreen,checkBlue);
                ofDrawLine(i,j,samePixelPosX,samePixelPosY);
                ofSetColor(checkRed,checkGreen,checkBlue);
            }
        }
    }
    cout << "count :"<<count << endl;
    ofSetBackgroundColor(currentCol);
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
