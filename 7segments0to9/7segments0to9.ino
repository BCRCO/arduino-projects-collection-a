#include "SevSeg.h"   //BCR
SevSeg sevseg; 

void setup(){
    byte ND = 1;
    byte DP[] = {}; 
    byte segmentPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; 
    bool R = true;

    byte HC = COMMON_ANODE; 
    sevseg.begin(HC, ND, DP, segmentPins, R);  
    sevseg.setBrightness(90);  //Max
}

void loop(){
    for(int i = 0; i < 10; i++){
        sevseg.setNumber(i, i%2);
        delay(1500);  //Time
        sevseg.refreshDisplay();  
        }
}
