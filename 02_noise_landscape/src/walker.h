//
//  walker.h
//  noise_landscape
//
//  Created by Sin Lung Boris Yu on 2015-02-16.
//
//

#pragma once
#include "ofMain.h"

class walker {
public:
    
    void setup();
    void update();
    void draw();
    
    ofVec2f pos;
};