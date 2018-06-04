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
      
      analogWrite(RmotorF, 0);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorF, 0);
      analogWrite(LmotorB, 0);
      Serial.print("\t\t STATE: STOP");
      break;
      
    case 1:                   //FORWARD
    
      analogWrite(RmotorF, ms);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorF, ms);
      analogWrite(LmotorB, 0);
      Serial.print("\t\t STATE: FORWARD");
      break;
      
    case 2:                   //BACKWARDS
    
      analogWrite(RmotorF, 0);
      analogWrite(RmotorB, ms);
      analogWrite(LmotorF, 0);
      analogWrite(LmotorB, ms);
      Serial.print("\t\t STATE: BACK");
      break;
      
    case 3:                   //LEFT
    
      analogWrite(RmotorF, ms);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorB, ms);
      analogWrite(LmotorF, 0);
      Serial.print("\t\t STATE: LEFT");
      break;
      
    case 4:                   //RIGHT
    
      analogWrite(RmotorF, 0);
      analogWrite(RmotorB, ms);
      analogWrite(LmotorB, 0);
      analogWrite(LmotorF, ms);
      Serial.print("\t\t STATE: RIGHT");
      break;
  }

  return;
}



