
void volgen(){
      dir = avleft - avright; 

      if(avfront > 15 && avfront < 30 && dir < 10 && dir > -10)              //forward
        rijden(1);
      else 
      if(avfront <= 10)   //back
       rijden(2);
      else
      if(dir < -10) //left
        if(Ldistance < 30 || Rdistance < 30)
          rijden(5);
        else rijden(0);
      else
      if(dir > 10)   //right  
        if(Ldistance < 30 || Rdistance < 30)
          rijden(6);
        else rijden(0);
      else rijden(0);
      
    lcd.setCursor(0,0);
    lcd.print("STATE: FOLLOW   ");
}

