#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setDeviceID(0);
    grabber.initGrabber(320, 240);
    
    sphere1.setRadius(200);
    sphere1.setPosition(-50,0, 10);
    sphere1.mapTexCoordsFromTexture(grabber.getTexture());
    
    sphere2.setRadius(150);
    sphere2.setPosition(50, 150, 150);
    sphere2.mapTexCoordsFromTexture(grabber.getTexture());
    
    sphere3.setRadius(75);
    sphere3.setPosition(200, 170, 200);
    sphere3.mapTexCoordsFromTexture(grabber.getTexture());
    
    sphere4.setRadius(400);
    sphere4.setPosition(0, 0, 60);
    sphere4.mapTexCoordsFromTexture(grabber.getTexture());
    
    light.setDirectional(); //soort licht, standaard licht
    light.enable();
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::black);
    
    ofEnableDepthTest();
    cam.setVFlip(true);
    cam.begin();
    
    grabber.getTexture().bind();
    
    sphere1.draw();
    sphere2.draw();
    sphere3.draw();
    sphere4.draw();
    
    
    grabber.getTexture().unbind();
    
    cam.end();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

