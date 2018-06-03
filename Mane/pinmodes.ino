
void pinmodes(){
  
  pinMode(Ltrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(Lecho, INPUT); // Sets the echoPin as an Input
  pinMode(Rtrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(Recho, INPUT);
  pinMode(LStrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(LSecho, INPUT);
  pinMode(RStrig, OUTPUT); // Sets the trigPin as an Output
  pinMode(RSecho, INPUT);
  pinMode(LmotorF, OUTPUT);
  pinMode(LmotorB, OUTPUT);
  pinMode(RmotorF, OUTPUT);
  pinMode(RmotorB, OUTPUT);
  
  pinMode(followpin, INPUT_PULLUP);
  pinMode(statepin, INPUT_PULLUP);  
  
  pinMode(RIR, INPUT);    //STANDS FOR RIGHT INFRARED
  pinMode(LIR, INPUT);    //STANDS FOR LEFT INFRARED
  lcd.begin (16,2);
  return;
}

