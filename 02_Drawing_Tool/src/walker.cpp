//
//  walker.cpp
//  02_Drawing_Tool
//
//  Created by Sin Lung Boris Yu on 2015-02-14.
//
//

#include "walker.h"

void walker::setup() {

    pos.set(ofGetWindowSize()/2);

}
void walker::update() {
    
    float xPct = (float)(ofGetMouseX()) / (float)(ofGetWidth());
    float yPct = (float)(ofGetMouseY()) / (float)(ofGetHeight());
    
    int choice = ofRandom(6);
    
    pos.x = xPct * 0.75 * (choice + 0.25);
    pos.y = yPct * 0.75 * (choice + 0.25);
    
    

}

void walker::draw() {
    
    ofRect(pos, 20, 20);
}