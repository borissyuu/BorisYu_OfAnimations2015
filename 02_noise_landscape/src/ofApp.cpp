#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

    
    mult = 0.03;
    noisePixels.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_COLOR);
    
    ofBackground(0);
    ofSetFrameRate(10);
        ofSetBackgroundAuto(false);
    
//    yOffset = 10000.0;
        
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    for(int y = 0; y < ofGetHeight(); y++) {
//        for (int x = 0; x < ofGetWidth(); x++) {
//            float noise = ofNoise(x * mult * ofGetElapsedTimef(), y * mult * ofGetElapsedTimef());
//        }
//    }
   
    
    for(int y = 0; y < ofGetHeight(); y++) {
        for (int x = 0; x < ofGetWidth(); x++) {
    float noiseX = ofNoise(ofGetElapsedTimef() * mult * x);
    float noiseY = ofNoise(ofGetElapsedTimef() * mult * y);

    pos.x = ofMap(noiseX, 0, 1, 0, ofGetWidth());
    pos.y = ofMap(noiseY, 0, 1, 0, ofGetHeight());
            
            }
        }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
  
          ofRect(pos, 10, 10);

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
