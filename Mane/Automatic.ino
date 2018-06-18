void automatic(){

  if(digitalRead(RIR) == 1 && digitalRead(LIR) == 1){
    rijden(0);
  }else   if(digitalRead(RIR) == 0 && digitalRead(LIR) == 1){ 
    rijden(3);
  }else  if(digitalRead(RIR) == 1 && digitalRead(LIR) == 0){
    rijden(4);
  }else   if(digitalRead(RIR) == 0 && digitalRead(LIR) == 0){ 
    rijden(1);
  }
  
}

