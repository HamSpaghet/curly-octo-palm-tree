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

  Serial.print("\t ROTATIONSPEED: ");
  Serial.print(ms);
    
  switch(rij){

    case 0:                   //STOP
      

      RFms = 0;
      LFms = 0;
      LBms = 0;
      RBms = 0;

      Serial.print("\t\t STATE: STOP");
      break;
      
    case 1:                   //FORWARD

      RBms = 0;
      LBms = 0;
      RFms = ms;
      LFms = ms;
      Serial.print("\t\t STATE: FORWARD");
    break;
      
    case 2:                   //BACKWARDS

      RFms = 0;
      LFms = 0;
      RBms = ms;
      LBms = ms;
      Serial.print("\t\t STATE: BACK");
    break;
      
    case 3:                   //LEFT

      RBms = 0;
      LFms = 0;
      RFms = ms;
      LBms = ms;
      Serial.print("\t\t STATE: LEFT");
    break;
      
    case 4:                   //RIGHT

       RFms = 0;
       LBms = 0;
       RBms = ms;
       LFms = ms;
       Serial.print("\t\t STATE: RIGHT");
    break;
  }
  
      analogWrite(RmotorF, RFms);
      analogWrite(RmotorB, RBms);
      analogWrite(LmotorF, LFms);
      analogWrite(LmotorB, LBms);
  
  return;
}



