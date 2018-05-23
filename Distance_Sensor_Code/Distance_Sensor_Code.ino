 #define seconde 1800

  // Goal = Making Ultrasonic sensor working
  // defines pins numbers
  const int trigPin = 6;
  const int echoPin = 7;

  //LED RED
  int LEDR = 23;
  //LED GREEN
  int LEDG = 22;
  //LED ORANGE
  int LEDO = 24;
  // defines variables
  long duration1;
  int distance1;
  long duration;
  int distance;
  
void setup() {
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  
}

void loop(){  
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  // Sets the trigPin on HIGH state for 10 micro seconds
  delayMicroseconds(2);
    
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);
   
  digitalWrite(trigPin, LOW);
    
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculating the distance
  distance = duration*0.034/2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  led(distance);
  
}


