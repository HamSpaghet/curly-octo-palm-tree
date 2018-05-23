 #define seconde 1800

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

  //LED RED
  int LEDR = 23;
  //LED GREEN
  int LEDG = 22;
  //LED ORANGE
  int LEDO = 24;
  // defines variables

  int Ldistance;
  int Rdistance;
  int LSdistance;
  int RSdistance;

  long duration;
  int distance;
  
void setup() {
  
  pinMode(Ltrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(Lecho, INPUT); // Sets the echoPin as an Input
  pinMode(Rtrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(Recho, INPUT);
  pinMode(LStrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(LSecho, INPUT);
  pinMode(RStrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(RSecho, INPUT);

  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDO, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
  
}

void loop(){  
  // Clears the trigPin
  Ldistance = SensorDistance(Ltrig, Lecho);

  Rdistance = SensorDistance(Rtrig, Recho);
  
  Serial.print("LEFT SIDE: ");
  Serial.print(Ldistance);
  Serial.print("  RIGHT SIDE: ");
  Serial.print(Rdistance);
  Serial.println("");
  
  led(distance);
  
}
