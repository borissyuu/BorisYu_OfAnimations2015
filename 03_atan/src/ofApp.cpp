#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    //ofNoFill();
    
    for (int i = 0; i < 100; i++) {
        customTriangles xeno;
        xeno.setup();
        xenoList.push_back(xeno);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    
    xenoList[0].update(ofGetMouseX(), ofGetMouseY());

    for (int i = 1; i < xenoList.size(); i++) {
        xenoList[i].update(xenoList[i-1].mousePos.x, xenoList[i-1].mousePos.y);
    
        //myTriangles.update(mousePos.x, mousePos.y);
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < xenoList.size(); i++) {

    xenoList[i].draw();
        
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
