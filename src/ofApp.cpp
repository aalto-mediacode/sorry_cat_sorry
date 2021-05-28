#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	/*ofDisableAlphaBlending();
	ofEnableDepthTest();
	light.enable();
	light.setPosition(ofVec3f(200, 200, 500));
	light.lookAt(ofVec3f(0, 0, 0));*/

	font.load("DxSitrus-Expanded.otf", 24);

	ofDisableArbTex();
	myVideo.setPixelFormat(OF_PIXELS_BGRA);
	myVideo.load("Kissa GS pieni.mov");
	myVideo.play();
	texture.allocate(myVideo.getWidth(), myVideo.getHeight(), OF_PIXELS_RGBA);
	texture.setTextureWrap(GL_REPEAT, GL_REPEAT);
	texture.setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);


	model.loadModel("muoto.obj");

	cam.setDistance(120);

	
	
}

//--------------------------------------------------------------
void ofApp::update(){

	myVideo.update();

	if (myVideo.isFrameNew()) {
		ofPixels pixels = myVideo.getPixels();
		texture.loadData(pixels);
		
		
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	//ofBackground(255);

	ofColor colorOne(255, 255, 0);
	ofColor colorTwo(50, 200, 0);

	ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);

	ofSetColor(255,50,150);
	font.drawString("I AM SORRY", ofGetWidth() / 2, ofGetHeight() / 2);
	//ofDrawBitmapString("I AM SORRY", ofGetWidth() / 2, ofGetHeight() / 2);


	cam.begin();
	//texture.bind();
	ofSetColor(255, 225, 225);
	myVideo.getTextureReference().bind();
	sphere.draw();
	//model.drawFaces();
	//texture.unbind();
	myVideo.getTextureReference().unbind();
	cam.end();

	

	
	
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
