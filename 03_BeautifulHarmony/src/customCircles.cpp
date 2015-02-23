//
//  customCircles.cpp
//  03_BeautifulHarmony
//
//  Created by Sin Lung Boris Yu on 2015-02-19.
//
//

#include "customCircles.h"

void customCircle::setup(float _offset) {
    offset = _offset;
}

void customCircle::update() {
    
    //can change the rate of how fast the circle pulses through ofGetElapsedTimef * x
    float sinOfTime = sin(ofGetElapsedTimef() + offset);
    size = ofMap(sinOfTime, -1, 1, 10, 200);
    lineWidth = ofMap(sinOfTime, -1, 1, 0.1, 3);
}

void customCircle::draw() {
    
    for ( float j = 1; j < NUMCIRCLES; j++) {
    
    ofSetLineWidth(lineWidth);
    //ofCircle(ofGetWindowSize()/2, size);
    
    float sinOfTime = sin(ofGetElapsedTimef()*j); // last bubble is moving faster than the rest 15x
    float x = j * 60;
    float y = ofGetHeight()/2 + sinOfTime * 100;
    
    ofCircle(x, y, size);
    
    
    }
}