#define ms 100  //1-255
#define slowms 60
void rijden(int rij){

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
      
    case 5:                   //SLOW FORWARD
    
      analogWrite(RmotorF, slowms);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorF, slowms);
      analogWrite(LmotorB, 0);
      Serial.print("\t\t STATE: FORWARD SLOW");
      break;
  }

  return;
}

