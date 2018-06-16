
int knob(){

  if(digitalRead(statepin) == LOW)
  {
    if(state != 1 || state != 2)
      state = 1;
    else state = 0;
  }else 
  if(digitalRead(followpin) == LOW)
  {
    if(state != 1 || state != 2)
      state = 2;
    else state = 0;
  }
  delay(4);
  
  return state;
}

