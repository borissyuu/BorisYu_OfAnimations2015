//
//  customRectangle.cpp
//  Multiple_Xenos
//
//  Created by Sin Lung Boris Yu on 2015-02-08.
//
//

#include "customRectangle.h"

void customCircle::setup(ofVec2f _pos, ofColor _color, int _i){
    pos.set(100, 100);
    color = _color;
    speed = 0.90 + 0.10 * _i;
}

void customCircle::update(ofVec2f _finalPos){
    _finalPos.set(ofGetMouseX(), ofGetMouseY());
    //can play around with numbers as long as numbers add up to 1
    
    dir = _finalPos - pos;
    //pos = pos * 0.95 + _finalPos * 0.05;
    pos += dir * speed;
}

void customCircle::draw(){
    ofSetColor(color);
    ofCircle(pos, 30);
}