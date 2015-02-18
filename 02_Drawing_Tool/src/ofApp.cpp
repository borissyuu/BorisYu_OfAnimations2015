#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    johnnie.setup();
    
    ofSetBackgroundAuto(false);
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void ofApp::update(){

    
//    float xPct = (float)(mouseX) / (float(ofGetWidth()));
//    float yPct = (float)(mouseY) / (float(ofGetHeight()));
//    
//    int choice = ofRandom(6);
//    
//    if (choice < 3) pos.x++;
//    if (choice == 3) pos.x--;
//    if (choice == 4) pos.y++;
//    if (choice == 5) pos.y--;
    
    johnnie.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    johnnie.draw();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
