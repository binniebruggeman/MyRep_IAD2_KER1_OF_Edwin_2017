#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    ofEasyCam cam;
    ofLight light;
    ofVideoGrabber grabber;
    
    ofIcoSpherePrimitive sphere1, sphere2, sphere3, sphere4;
		
};
