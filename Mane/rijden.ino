#define x 100  //1-255

void rijden(int rij){

  switch(rij){

    case 0:                   //STOP
      analogWrite(RmotorF, 0);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorF, 0);
      analogWrite(LmotorB, 0);
      break;
    case 1:                   //FORWARD
      analogWrite(RmotorF, x);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorF, x);
      analogWrite(LmotorB, 0);
        delay 2000;
      break;
    case 2:                   //BACKWARDS
      analogWrite(RmotorF, 0);
      analogWrite(RmotorB, x);
      analogWrite(LmotorF, 0);
      analogWrite(LmotorB, x);
        delay 2000;
      break;
    case 3:                   //LEFT
      analogWrite(RmotorF, x);
      analogWrite(RmotorB, 0);
      analogWrite(LmotorB, x);
      analogWrite(LmotorF, 0);
        delay 2000;
      break;
    case 4:                   //RIGHT
      analogWrite(RmotorF, 0);
      analogWrite(RmotorB, x);
      analogWrite(LmotorB, 0);
      analogWrite(LmotorF, x);
        delay 2000;
      break;
  }

}

