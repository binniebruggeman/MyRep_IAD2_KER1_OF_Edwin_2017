#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //will be saved in a file called settings.xml, which will be made by the qui when you save
    gui.setup("Instellingen", "settings.xml");
    
    //radius.set("Radius", 50, 0, 200);
    //gui.add(radius);
    
    //another, shorter way to write this the above
    gui.add(radius.set("Radius", 50, 0, 200));
    gui.add(speedX.set("Speedx", 20, 0, 200));
    gui.add(speedY.set("SpeedY", 20, 0, 200));
    gui.add(color.set("ofColor",ofColor::white)); //color will start at the color white
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key==' ') {
        ofLog() << "Er is op een spatie gedrukt" << endl;
    } else {
    ofLog() << "Er is op een toets gedrukt" << endl;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
