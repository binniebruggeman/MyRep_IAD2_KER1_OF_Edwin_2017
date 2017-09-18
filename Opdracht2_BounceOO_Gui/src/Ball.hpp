#pragma once

#include "ofMain.h"
#include "ofParameterGroup.h"
#include "ofParameter.h"
#include "ofxGui.h"

class Ball {
    
public:
    
    Ball();
    
    void setup();
    void update();
    void draw();
    
    // variables
    float x;
    float y;
    ofColor color;
    
    //float speedY;
    //float speedX;
    //int radius;
    
    ofParameterGroup ballParameters;
    ofParameter<float> speedX;
    ofParameter<float> speedY;
    ofParameter<int> radius;
    
private:
    
};
