
int knob(){

  if(statepin == LOW)
  {
    if(state != 1 || state != 2)
      state = 1;
    else state = 0;
  }else 
  if(followpin == LOW)
  {
    if(state != 1 || state != 2)
      state = 2;
    else state = 0;
  }
  delay(4);
  
  return state;
}

