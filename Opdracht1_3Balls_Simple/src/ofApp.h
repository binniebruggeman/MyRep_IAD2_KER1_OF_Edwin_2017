#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    
private:    //make it a habbit to make this private, meaning you can only use/call these variables in this particular app
    //Ball 1
    float x;
    float y;
    float speedX;
    float speedY;
    int radius;
    ofColor color;
    
    //Ball 2
    float x_2;
    float y_2;
    float speedX_2;
    float speedY_2;
    int radius_2;
    ofColor color_2;
    
    //Ball 3
    float x_3;
    float y_3;
    float speedX_3;
    float speedY_3;
    int radius_3;
    ofColor color_3;
};
