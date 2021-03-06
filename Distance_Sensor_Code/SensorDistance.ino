  
  int SensorDistance(int trigPin, int echoPin){
  // Sets the trigPin on HIGH state for 10 micro seconds
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);
   
  digitalWrite(trigPin, LOW);
    
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;
  
  return(distance);
  }
