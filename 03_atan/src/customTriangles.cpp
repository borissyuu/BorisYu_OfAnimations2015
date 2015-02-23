//
//  customTriangles.cpp
//  03_atan
//
//  Created by Sin Lung Boris Yu on 2015-02-20.
//
//

#include "customTriangles.h"

void customTriangles::setup() {
    
    pos.set(0);
    triangleColor.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void customTriangles::update(float _x, float _y) {
    
    mousePos.x = ofGetMouseX();
    mousePos.y = ofGetMouseY();
    
    ofVec2f newPos;
    newPos.set(_x, _y);
    pos = pos * 0.90 + newPos * 0.10;
    
    ofVec2f diff;
    diff = newPos - pos;

    rot = atan2(diff.y, diff.x);
    rot = ofRadToDeg(rot);
    
    
}

void customTriangles::draw() {
 
    float x1 = 0;
    float y1 = -10;
    
    float x2 = 0;
    float y2 = 10;
    
    float x3 = 30;
    float y3 = 0;
    
    ofTranslate(pos);
    ofRotate(rot);
    ofSetColor(triangleColor);
    ofTriangle(x1, y1, x2, y2, x3, y3);
}
