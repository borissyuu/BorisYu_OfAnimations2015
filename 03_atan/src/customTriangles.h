//
//  customTriangles.h
//  03_atan
//
//  Created by Sin Lung Boris Yu on 2015-02-20.
//
//

#pragma once
#include "ofMain.h"

class customTriangles {
public:
    void setup();
    void update(float _x, float _y);
    void draw();
    
    ofVec2f pos;
    float rot;
    
    ofColor triangleColor;
    ofVec2f mousePos;
};