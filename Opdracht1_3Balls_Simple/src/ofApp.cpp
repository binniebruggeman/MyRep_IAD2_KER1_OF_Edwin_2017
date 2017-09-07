#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //Ball 1
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    
    speedX = ofRandom(-1, 10);
    speedY = ofRandom(-1, 10);
    
    radius = ofRandom(10, 30);
    
    //moved this bit of "random color setting" here instead of in the draw function, so that the color won't flikker and stays the same once it's set.
    color = ofColor(ofRandom(0, 255),
                    ofRandom(0, 255),
                    ofRandom(0, 255)
                    );
    
    //Ball 2
    x_2= ofRandom(0, ofGetWidth());
    y_2 = ofRandom(0, ofGetHeight());
    
    speedX_2 = 5;
    speedY_2 = 10;
    
    radius_2 = ofRandom(40, 60);
    
    //Ball 3
    x_3 = ofRandom(0, ofGetWidth());
    y_3 = ofRandom(0, ofGetHeight());
    
    speedX_3 = 15;
    speedY_3 = 15;
    
    radius_3 = ofRandom(70, 90);
    
    color = ofColor(ofRandom(0, 255),
                    ofRandom(0, 255),
                    ofRandom(0, 255)
                    );
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //Ball 1
    if (x<0){
        x = 0;
        speedX = -speedX; //ball goes the other direction
    } else if (x > ofGetWidth()){
        x = ofGetWidth();
        speedX = -speedX;
    }
    
    if (y<0){
        y = 0;
        speedY = -speedY; //
    } else if (y > ofGetHeight()){
        y = ofGetHeight();
        speedY = -speedY;
    }
    
    x = x + speedX; //this does the same as below, just written a different way
    y += speedY;    //this does the same as above, just written a different way
    
    //Ball 2
    if (x_2<0){
        x_2 = 0;
        speedX_2 = -speedX_2;
    } else if (x_2 > ofGetWidth()){
        x_2 = ofGetWidth();
        speedX_2 = -speedX_2;
    }
    
    if (y_2<0){
        y_2 = 0;
        speedY_2 = -speedY_2;
    } else if (y_2 > ofGetHeight()){
        y_2 = ofGetHeight();
        speedY_2 = -speedY_2;
    }
    
    x_2 = x + speedX_2;
    y_2 += speedY_2;
    
    
    //Ball 3
    if (x_3<0){
        x_3 = 0;
        speedX_3 = -speedX_3;
    } else if (x_3 > ofGetWidth()){
        x_3 = ofGetWidth();
        speedX_3 = -speedX_3;
    }
    
    if (y_3<0){
        y_3 = 0;
        speedY_3 = -speedY_3;
    } else if (y_3 > ofGetHeight()){
        y_3 = ofGetHeight();
        speedY_3 = -speedY_3;
    }
    
    x_3 = x_3 + speedX_3;
    y_3 += speedY_3;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //Ball 1
    ofSetColor(color); //I defined color in setup, so that the random color will stay the same and won't flikker through all colors continuously
    ofDrawCircle(x, y, radius);
    
    //Ball 2
    ofSetColor(ofColor(ofRandom(0, 255))); //continuesly flikkering in black and white
    ofDrawCircle(x_2, y_2, radius_2);
    
    //Ball 3
    ofSetColor(ofRandom(0, 255), //continuously flikkering in different colors
               ofRandom(0, 255),
               ofRandom(0, 255)
               );;
    ofDrawCircle(x_3, y_3, radius_3);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}
