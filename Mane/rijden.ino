void rijden(int rij){
  
  if(ridestate != rij){
    ridestate = rij;
    ms = 0;
  }
  else 
  if(ms < msmax) 
    ms += msav;
  else if(ms > msmax)
    ms = msmax;

  msL = ms - 47;
  Serial.print("\t ROTATIONSPEED: ");
  Serial.print(ms);
    
  switch(rij){

    case 0:                   //STOP
      
      RFms = 0;
      LFms = 0;
      LBms = 0;
      RBms = 0;
      Serial.print("\t\t STATE: STOP");
      lcd.setCursor(0,1);
      lcd.print("RIJSTAND: STOP ");
      break;
      
    case 1:                   //FORWARD

      RBms = 0;
      LBms = 0;
      RFms = ms - 20;
      LFms = msL - 20;
      Serial.print("\t\t STATE: FORWARD");
      lcd.setCursor(0,1);
      lcd.print("RIJSTAND: FORW ");
    break;
      
    case 2:                   //BACKWARDS

      RFms = 0;
      LFms = 0;
      RBms = ms;
      LBms = msL;
      Serial.print("\t\t STATE: BACK");
      lcd.setCursor(0,1);
      lcd.print("RIJSTAND: BACK ");
    break;
      
    case 3:                   //LEFT

      RBms = 0;
      LFms = 0;
      RFms = ms;
      LBms = 0;
      Serial.print("\t\t STATE: LEFT");
      lcd.setCursor(0,1);
      lcd.print("RIJSTAND: LEFT ");
    break;

    case 4:
       RFms = 0;
       LBms = 0;
       RBms = 0;
       LFms = msL;
       Serial.print("\t\t STATE: RIGHT");
        lcd.setCursor(0,1);
        lcd.print("RIJSTAND: RIGHT");
    break;

    case 5:

      RBms = 0;
      LFms = 0;
      RFms = ms;
      LBms = msL;
      Serial.print("\t\t STATE: LEFT");
      lcd.setCursor(0,1);
      lcd.print("RIJSTAND: LEFT ");
    break;
    
    case 6:
       RFms = 0;
       LBms = 0;
       RBms = ms;
       LFms = msL;
       Serial.print("\t\t STATE: RIGHT");
        lcd.setCursor(0,1);
        lcd.print("RIJSTAND: RIGHT");
    break;
  }
      analogWrite(LmotorF, LFms);
      analogWrite(LmotorB, LBms);
      analogWrite(RmotorF, RFms);
      analogWrite(RmotorB, RBms);

   
  return;
}



