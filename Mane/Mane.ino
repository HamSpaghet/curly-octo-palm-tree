#include <Wire.h>
#include <SPI.h>

#include <Adafruit_LSM9DS0.h>
#include <Adafruit_Sensor.h>

#include <LCD.h>
#include <LiquidCrystal_I2C.h>

//---------------USED FOR DISPLAY-----------------------//
  #define I2C_ADDR    0x27 // <<----- Add your address here.  Find it from I2C Scanner
  #define BACKLIGHT_PIN     3
  #define En_pin  2
  #define Rw_pin  1
  #define Rs_pin  0
  #define D4_pin  4
  #define D5_pin  5
  #define D6_pin  6
  #define D7_pin  7
//-------------------------------------------------------//

  // IIC
  Adafruit_LSM9DS0 lsm = Adafruit_LSM9DS0();
  LiquidCrystal_I2C  lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);
  
  // defines pins numbers
  const int Ltrig = 50;  //L = left
  const int Lecho = 52;
  const int LStrig = 42; //LS stands for Left side
  const int LSecho = 44;
  const int RStrig = 48; //RS stands for Right side
  const int RSecho = 46;
  const int Rtrig = 38;  //R = Right
  const int Recho = 40;

  const int LmotorF = 2;  //F = Forward
  const int LmotorB = 3;  //B = Backward
  const int RmotorF = 4;  
  const int RmotorB = 5;

  const int statepin = 53;
  const int followpin = 51;

  const int RIR = 36;
  const int LIR = 34;
  
  const int LED = 0;

  int RBms;
  int LBms;
  int RFms;
  int LFms;
  int ms;
  int msmax = 250;
  int msav = msmax / 5;

  int Ldistance;
  int Rdistance;
  int LSdistance;
  int RSdistance;
  
  //--AVERAGE DISTANCE
  int avfront = 20;
  int avleft = 20;
  int avleftS = 20;
  int avright = 20;
  int avrightS = 20;
  
  int graden;
  long duration;
  int distance;

  int state = 1;  // stop = 0    start automatic = 1    start follow = 2
  int rij = 0;      // STOP = 0   FORWARD = 1    BACK = 2    LEFT = 3   RIGHT = 4
  int ridestate;
  int insright = 0;
  int insleft = 0;
  int dir;
  
  int miniprev = 0;
  int mini;
  int maxiprev = 0;
  int maxi;
void setupSensor()
{
  
  // 2.) Set the magnetometer sensitivity
  //lsm.setupMag(lsm.LSM9DS0_MAGGAIN_2GAUSS);
  //lsm.setupMag(lsm.LSM9DS0_MAGGAIN_4GAUSS);
  lsm.setupMag(lsm.LSM9DS0_MAGGAIN_8GAUSS);
  //lsm.setupMag(lsm.LSM9DS0_MAGGAIN_12GAUSS);

}

void setup() {

  /*-----------------SETUP ORIENTATIONSENSOR-----------------*/
  #ifndef ESP8266
  #endif
  Serial.println("LSM raw read demo");
  if (!lsm.begin())
  {
    Serial.println("Oops ... unable to initialize the LSM9DS0. Check your wiring!");
    while (1);
  }
  Serial.println("Found LSM9DS0 9DOF");
  Serial.println("");
  Serial.println("");

  /* ----------------pinmodes--------------------*/
  pinmodes();

  lcddisplaysetup();

  Serial.begin(9600); // Starts the serial communication
  
}

void usual(){

  sensordistancecombined();
  
  distancemath();

  Displaydistancesensor(avleft, avright, avrightS, avleftS);
 // Displaydistancesensor(Ldistance, Rdistance, RSdistance, LSdistance);
 
  orientationsensor();

  state = knob();

  switch(state){

    case 0:
      rijden(0);
    break;

    case 1:  //automatico
                
      rijden(1);
      break;
    case 2:  //volgen
    
      volgen();
      break;
  }
}

void loop(){  

  //  orientatiecalibratie();
    usual();

 /* graden = orientationsensor();
  lcddisplay(graden);
*/
  Serial.println("");
}



