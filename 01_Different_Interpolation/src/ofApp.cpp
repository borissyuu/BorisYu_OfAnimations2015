#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetVerticalSync(true);
    
    myRectangle.setup(ofVec2f(0, 500));
    myRectangle.setPenner(ofVec2f(ofGetWindowWidth(), 500), 100);
    
//    myRectangle.posa.x = 50;
//    myRectangle.posa.y = 50;
//    myRectangle.posb.x = 500;
//    myRectangle.posb.y = 500;
//    
//    
//    myRectangle.radiusa = 30;
//    myRectangle.radiusb = 200;
    
    recSize = 50;
    mouseToggle = 0;
    
    myRectangle.interSize(0);	// start at 0 pct
    pct = 0.0;							// a variable we can alter...
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    pct += 0.01;
    
    if (pct > .9) {
        pct = 0.0;
        recSize = 10;
    } else if (pct > 0 && pct < 0.9) {
        recSize += 0.5;
    }
    
    myRectangle.update(recSize);
    
    pct = (float) mouseY / (float) ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myRectangle.draw();
    ofSetColor(255,255,255);
    
    ofDrawBitmapString("mouse height controls interpolation (pct = " + ofToString(pct) + ")", 20, 20);
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

    myRectangle.setPenner(ofVec2f(x, y), 100);
    
    pct = 0.0;
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
