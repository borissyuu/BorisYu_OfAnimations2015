//
//  CustomTriangle.h
//  Point_A_Point_B
//
//  Created by Sin Lung Boris Yu on 2015-02-08.
//
//

#pragma once

#include "ofMain.h"

class customTriangle {
public:
    customTriangle();
    void setup(ofVec2f _initPos, ofVec2f _finalPos);
    void update(float pct);
    void draw();
    void setNewPosition(ofVec2f _newPos);
    
private:
    ofVec2f initPos, finalPos, currentPos;
    float pct;
    
};