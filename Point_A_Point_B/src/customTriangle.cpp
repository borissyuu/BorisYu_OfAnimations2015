//
//  CustomTriangle.cpp
//  Point_A_Point_B
//
//  Created by Sin Lung Boris Yu on 2015-02-08.
//
//

#include "CustomTriangle.h"

customTriangle::customTriangle() {
    
}

void customTriangle::setup(ofVec2f _initPos, ofVec2f _finalPos) {
    
    initPos = _initPos;
    finalPos = _finalPos;
    
}

void customTriangle::update(float _pct) {
    
    pct = _pct;
    currentPos = initPos * (1 - pct) + finalPos * pct; //why this equation?
}

void customTriangle::draw() {
    
    ofLine(initPos, finalPos);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(currentPos.x, currentPos.y, 20, 20);
    //ofCircle(currentPos, 20);
}

void customTriangle::setNewPosition(ofVec2f _newPos) {
    initPos = currentPos;
    finalPos = _newPos;
}