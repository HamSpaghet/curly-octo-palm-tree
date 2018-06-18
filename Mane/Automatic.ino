void automatic(){

  if((avleftP - avleftS) < 20 && (avrightP - avrightS) < 20){
    
    avrightP = avrightS;
    avleftP = avleftS;
  }else {
    rijden(0);
    delay(3000);
   }
  
  if(rijdstop >= 20){
    rijden(0);
    lcd.setCursor(0,0);
    lcd.print("ERROR       ");
  }else if(avfront > 20){
    
    if(digitalRead(RIR) == 1 && digitalRead(LIR) == 1 && Ldir == 0){
      
      rijden(1);
      rijdstop = 0;
     
    }else   if(digitalRead(RIR) == 0 && digitalRead(LIR) == 1){ 
      
      rijden(4);
      Ldir = 1;
      rijdstop = 0;
  
    
    }else  if(digitalRead(RIR) == 1 && digitalRead(LIR) == 0){
      
       rijden(3);
       Ldir = 1;
      rijdstop = 0;
  
     
    }else  if(digitalRead(RIR) == 0 && digitalRead(LIR) == 0){ 
      
       rijden(2);
       Ldir = 0;
       rijdstop += 1;
  
       
    }
    
    if(digitalRead(RIR) == 1 && digitalRead(LIR) == 1 && Ldir == 1){
      timer++;
    }else 
    if(Ldir == 1)
      timer = 0;
    
    if(timer >= 2){
      Ldir = 0;
      timer = 0;
    }

  } else{
    rijden(0);
    lcd.setCursor(0,0);
    lcd.print("OBST       ");
  }
  

}

