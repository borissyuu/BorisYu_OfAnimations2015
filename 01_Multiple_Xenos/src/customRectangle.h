//
//  customRectangle.h
//  Multiple_Xenos
//
//  Created by Sin Lung Boris Yu on 2015-02-08.
//
//

#pragma once
#include "ofMain.h"

class customCircle {
public:
    void setup(ofVec2f _pos, ofColor _color, int _i);
    void update(ofVec2f _finalPos);
    void draw();
    
private:
    ofVec2f pos, finalPos, dir;
    float speed;
    ofColor color;
};