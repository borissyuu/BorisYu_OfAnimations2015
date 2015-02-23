#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(30, 85, 85);
    ofNoFill();
    
    
    for ( float j = 1; j < NUMCIRCLE; j++) {
        
//        offset = j/100;
    
        for (float i = 0; i < 20; i++) {
            customCircle myCirc;
            //offset controls how often the other circles will appear
            myCirc.setup(i/20);
            circleList.push_back(myCirc);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for ( float j = 1; j < NUMCIRCLE; j++) {
    
         for (float i = 0; i < circleList.size(); i++) {
             
             float sinOfTime = sin(ofGetElapsedTimef() + offset);
             size = ofMap(sinOfTime, -1, 1, 10, 500);
             lineWidth = ofMap(sinOfTime, -1, 1, 0.1, 10);
             
             circleList[i].update();
         }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    for ( float j = 1; j < NUMCIRCLE; j++) {

        for (float i = 0; i < circleList.size(); i++) {
            
        ofSetLineWidth(lineWidth);
        //ofCircle(x, y, 50);
            
        circleList[i].draw();
        //}
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
