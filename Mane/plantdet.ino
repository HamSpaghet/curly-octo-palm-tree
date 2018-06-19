
void plantdet(){

  if(avleftP >= LSdistance)
    leftmath = avleftP - LSdistance;
  else
    leftmath = LSdistance - avleftP;
    
  if(avrightP >= RSdistance)
    rightmath = avrightP - RSdistance;
  else
    rightmath = RSdistance - avrightP;
      
    //if(leftmath > 10 && rightmath > 10 && stopped == 0){
      if((LSdistance <= 5 || RSdistance <= 5) && stopped == 0){
        
        rijden(0);
        lcd.setCursor(0,0);
        lcd.print("PLANT DETECTED");
        delay(1000);
        stopped = 1;
        
      }
    

  if(stopped == 1)
    stoptimer++;

  if(stoptimer >= 12){
    stoptimer = 0;
    stopped = 0;
  }

  
}

