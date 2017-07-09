/*
  MyBlankLib.h will square any number.
*/

#ifndef HC05Bind_h
#define Hc05Bind_h

/*-----( Import needed libraries )-----*/
#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include "SoftwareSerial.h"

/*-----( Declare Constants and Pin Numbers )-----*/

#define HC05PowerPin 12 //power to HC05
#define HC05AtPin 11 //puts HC05 into command mode

class HC05Bind
{
/*-----( Declare Variables and functions )-----*/
  public:
    HC05Bind();
	bool search();
	bool begin(String pw);
	void comms();
	void gps();
	bool available;
	String NMEAphrase;
	bool fix = false;
	int latDeg;
	float latMin;
	int longDeg;
	float longMin;
	String latSector;
	String longSector;
	String UTC;
	float altitude;
	int tracked;
	String PRNs;
	bool paired = false;
	float DOP;
	

	
    
  private:
	String readHC05();
	void sendAtCommand(String command);
	void setHC05ToCommandMode();
	void writeString(String stringData);
	bool clearPairings();
	bool setToMaster();
	bool setToAnyBT();
	bool setToEnquiry();
	void SppProfile();
	bool setPassword(String pw);
	bool find();
	bool locate();
	String reply;
	bool started = false;
	bool ended = true;
	char c;
	int countChars = 0;
	String phrase;
	String getChecksum(String sentence);
	bool isValid(String sentence);
	int findComma(int nthComa);
	
};

#endif
