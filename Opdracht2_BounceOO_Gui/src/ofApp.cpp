#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {
    
    
    parameters.setName("settings");
    parameters.add(ballGroup.ballParameters);
    gui.setup(parameters);
    
   
//        gui.add(count.setup("count",50,0,200));
//        gui.add(speedX.setup("speedX",20,0,200));
//        gui.add(speedY.setup("speedY",20,0,200));
        gui.loadFromFile("settings.xml");
    font.load( OF_TTF_SANS,9,true,true);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update() {
    for (int i=0; i<balls.size(); i++) {
        balls[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
      gui.draw();
    
    for (int i=0; i<balls.size(); i++) {
        balls[i].draw();
    }
    
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    
    if (key == ' '){
        Ball newBall;
        newBall.setup();
        balls.push_back(newBall);
    } else if (key == 'd'){
        balls.erase(balls.begin () );
    }
    
}

//--------------------------------------------------------------
void ofApp::exit() {
    gui.saveToFile("settings.xml");
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
    
}
