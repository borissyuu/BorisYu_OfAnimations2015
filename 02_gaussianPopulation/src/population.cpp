//
//  population.cpp
//  02_gaussianPopulation
//
//  Created by Sin Lung Boris Yu on 2015-02-16.
//
//

#include "population.h"

void population::setup(ofVec2f _pos, int _i){
    pos.set(100, 100);
    speed = 0.90 + 0.10 + _i;
}

void population::update(ofVec2f _finalPos){
    _finalPos.set(ofGetMouseX(), ofGetMouseY());
    //can play around with numbers as long as numbers add up to 1
}

void population::draw(float _x){
    pos.x = _x;
    ofSetColor(255);
    ofCircle(pos, 10);
}