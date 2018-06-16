  
  int sensordistance(int trigPin, int echoPin){
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

  void sensordistancecombined(){
    
    Ldistance = sensordistance(Ltrig, Lecho);
    
    Rdistance = sensordistance(Rtrig, Recho);
    
    LSdistance = sensordistance(LStrig, LSecho);
    
    RSdistance = sensordistance(RStrig, RSecho);
  }

