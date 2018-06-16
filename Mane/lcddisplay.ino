
void lcddisplaysetup(){

  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
    
}

int lcddisplay(int data){
  
  lcd.setCursor(0,1);
  lcd.print(data);
  return 0;
}

