#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);
    
    arduino.connect("/dev/cu.usbmodemFA141");
    arduino.sendFirmwareVersionRequest();
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    arduino.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    arduino.sendDigital(11, ARD_HIGH); //zet pin aan
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    arduino.sendDigital(11, ARD_LOW); //zet pin uit
}

void ofApp::setupArduino(const int& version){
ofLog() << "Arduino firmware found " << arduino.getFirmwareName()
    << arduino.getMajorFirmwareVersion()
    << arduino.getMinorFirmwareVersion() << endl;
    
    arduino.sendDigitalPinMode(11, ARD_OUTPUT);
    arduino.sendDigitalPinMode(12, ARD_INPUT);
arduino.sendAnalogPinReporting(0, ARD_ANALOG);
arduino.sendDigitalPinMode(1, ARD_ANALOG);
    
    

    ofAddListener
})
