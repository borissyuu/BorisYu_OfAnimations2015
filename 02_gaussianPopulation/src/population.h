//
//  population.h
//  02_gaussianPopulation
//
//  Created by Sin Lung Boris Yu on 2015-02-16.
//
//

#pragma once
#include "ofMain.h"


class population {
public:
    void setup(ofVec2f _pos, int _i);
    void update(ofVec2f _finalPos);
    void draw(float _x);
    
    float ofxGaussian();
    float x;
    
    ofPoint pos;
    
private:
    ofVec2f finalPos, dir;
    int speed;

};