//
//  customRectangle.cpp
//  Different_Interpolation
//
//  Created by Sin Lung Boris Yu on 2015-02-08.
//
//

#include "customRectangle.h"

customRectangle::customRectangle() {
    
}

void customRectangle::setup(ofVec2f _initPos) {
    initPos = _initPos; //why the _
    currentPos = initPos;
    
}

void customRectangle::update(float _recSize) {
    
    if(currentIter < totalIter) {
        pct = easeOut (currentIter, 0.0, 1.0, totalIter);
        currentPos.x = initPos.x * (1-pct) + finalPos.x * pct;
        
        pct = easeIn (currentIter, 0.0, 1.0, totalIter);
        currentPos.y = initPos.y * (1-pct) + finalPos.y * pct;
        
        currentIter++;
    }
    
    recSize = _recSize;
}

void customRectangle::interSize(float myPct) {
    pct2 = myPct;
    
    pos.x = (1-pct) * posa.x + (pct) * posb.x;
    pos.y = (1-pct) * posa.y + (pct) * posb.y;
    
    //radius = (1-pct) * radiusa + (pct) * radiusb;
    
}

void customRectangle::draw() {
    //no set dimensions, do it in ofApp
    ofRect(currentPos.x, currentPos.y, recSize, recSize);
}

void customRectangle::setPenner(ofVec2f _newPos, int _totalIter) {
    currentIter = 0;
    totalIter = _totalIter;
    initPos = currentPos;
    finalPos = _newPos;
}

float customRectangle::easeIn (float t , float b, float c, float d) {
    return -c * (sqrt(1 - (t/=d)*t) - 1) + b;
}

float customRectangle::easeOut (float t , float b, float c, float d) {
    return c * sqrt(1 - (t=t/d-1)*t) + b;
}

float customRectangle::easeInOut (float t , float b, float c, float d) {
    if ((t/=d/2) < 1) return -c/2 * (sqrt(1 - t*t) - 1) + b;
    return c/2 * (sqrt(1 - t*(t-=2)) + 1) + b;
}