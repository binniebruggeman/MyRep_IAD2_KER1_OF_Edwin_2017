#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(drawGrid.set("Grid", false));
    gui.add(useLight.set("light", false));
    
    light.setDirectional();
    light.setPosition(-200, -200, -200);
    light.lookAt(ofVec3f(0,0,0), ofVec3f(0,0,0));
    light.setDiffuseColor(ofColor::white);
    light.enable();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDisableLighting(); //Zorgt ervoor dat gui niet donker wordt als je licht aan en uit zet
    gui.draw();
    
    
    ofEnableDepthTest();
    
    cam.begin();
    
    ofSetColor(ofColor::yellow);
    ofDrawSphere(0, 0, 0, 100);
    
    ofSetColor(ofColor::blue);
    ofDrawSphere(100, 0, 0, 50);
    
     if(drawGrid) ofDrawGrid(200);
    
    if (useLight) {
        ofEnableLighting();
    } else{
        ofDisableLighting();
    }
    cam.end();
    ofEnableDepthTest();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
   

}

