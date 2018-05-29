#include <Wire.h>
#include <SPI.h>
#include <Adafruit_LSM9DS0.h>
#include <Adafruit_Sensor.h>  // not used in this demo but required!
 

  // IIC
  Adafruit_LSM9DS0 lsm = Adafruit_LSM9DS0();

  // Goal = Making Ultrasonic sensor working
  // defines pins numbers
  const int Ltrig = 6;  //L = left
  const int Lecho = 7;
  const int Rtrig = 9;  //R = Right
  const int Recho = 10;
  const int LStrig = 0; //LS stands for Left side
  const int LSecho = 0;
  const int RStrig = 0; //RS stands for Right side
  const int RSecho = 0;

  const int LmotorF = 0;  //F = Forward
  const int LmotorB = 0;  //B = Backward
  const int RmotorF = 0;  
  const int RmotorB = 0;
/*  //LED RED
  int LEDR = 23;
  //LED GREEN
  int LEDG = 22;
  //LED ORANGE
  int LEDO = 24;
  // defines variables
*/
  int Ldistance;
  int Rdistance;
  int LSdistance;
  int RSdistance;

  long duration;
  int distance;

  int rij = 0;      // STOP = 0   VOORUIT = 1    ACHTERUIT = 2    LINKS = 3   RECHTS = 4

void setup() {
  
  #ifndef ESP8266
  while (!Serial);     // will pause Zero, Leonardo, etc until serial console opens
  #endif
  
  pinMode(Ltrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(Lecho, INPUT); // Sets the echoPin as an Input
  pinMode(Rtrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(Recho, INPUT);
  pinMode(LStrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(LSecho, INPUT);
  pinMode(RStrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(RSecho, INPUT);


  Serial.begin(9600); // Starts the serial communication
  
}

void loop(){  
  // Clears the trigPin
  Ldistance = sensordistance(Ltrig, Lecho);
  
  Rdistance = sensordistance(Rtrig, Recho);

  LSdistance = sensordistance(LStrig, LSecho);

  RSdistance = sensordistance(RStrig, RSecho);
  
  Displaydistancesensor(Ldistance, Rdistance, RSdistance, LSdistance);

  
  rijden(1);

  rijden(0);

  rijden(2);

  rijden(0);
  
  Serial.println("");
}
  

