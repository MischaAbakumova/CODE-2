#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(FALSE);
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
   //ofEnableBlendMode(OF_BLENDMODE_SCREEN);
    cats.load("cats9.png");
    widthIm=cats.getWidth()*0.3;
    xPos=0;
    yPos=0;

}

//--------------------------------------------------------------
void ofApp::update(){
    theta+=20;

}

//--------------------------------------------------------------
void ofApp::draw(){
    widthIm *= 0.9;
    //part1. rotating the image
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    for(int i = 0; i < 5; i++){
//        ofPushMatrix();
//        ofRotate(theta);
//        cats.draw(xPos,yPos, widthIm);
//        //xPos += widthIm+10;
//        cout<<"xPos: "<<xPos<<endl;
//        //cout<<"yPos: "<<yPos<<endl;
//        ofPopMatrix();
//    }
    
    //part2. dif orientation and size
    
    for(int i = 0; i<5; i++){
        xPos = i+100;
        ofPushMatrix();
        ofTranslate(xPos, 0);
        //ofScale(0.9,0.9,0);
        //cats.getPixels();
        ofSetColor(0,163, 237, 80);
        cats.draw(0, 0, widthIm);

        //ofRotate(theta);
        
        //cats.draw(0, 0, widthIm);
        ofPopMatrix();

    }
    if (yPos<1000) {
        yPos +=100;
       // cats.rotate90(1);
        
    }
           // yPos +=100;
            cout<<"xPos: "<<xPos<<endl;
            cout<<"yPos: "<<yPos<<endl;
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
