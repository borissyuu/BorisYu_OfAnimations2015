//
//  customRectangle.h
//  Different_Interpolation
//
//  Created by Sin Lung Boris Yu on 2015-02-08.
//
//

#pragma once

#include "ofMain.h"

class customRectangle {
    
public:
    customRectangle();
    void setup(ofVec2f _initPos);
    void update(float _recSize);
    void draw();
    void setPenner(ofVec2f _newPos, int _totalIter);
    
    void interSize(float myPct);
    float       pct2;
    ofPoint     pos;
    ofPoint		posa;
    ofPoint		posb;
    float       radiusa;
    float       radiusb;
    float       radius;
    
    
    float easeIn (float t,float b , float c, float d);
    float easeOut (float t,float b , float c, float d);
    float easeInOut (float t,float b , float c, float d);
    
    //t == currentIteration
    //b == startValue
    //c == changeInValue
    //d == totalIterations
    
    ofVec2f initPos, currentPos, finalPos;
    int currentIter, totalIter;
    
    
private:
    float pct;
    float posX, posY;
    float recSize;
};