//
//  customCircles.h
//  03_BeautifulHarmony
//
//  Created by Sin Lung Boris Yu on 2015-02-19.
//
//

#pragma once
#include "ofMain.h"

#define NUMCIRCLES 20

class customCircle {
public:
    void setup(float _offset);
    void update();
    void draw();
    
    float size;
    float lineWidth;
    float offset;
    
};