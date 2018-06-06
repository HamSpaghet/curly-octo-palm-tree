int orientationsensor(){

  
  lsm.read();
   graden = (int)lsm.magData.x * 0.1 * 36 / 42 + 60;  
  Serial.print("  \t");
  Serial.print("Mag X: "); Serial.print((int)lsm.magData.x);     
  Serial.print("\t"); 
  Serial.print("Graden: ");
  Serial.print(graden); 


  return graden;
}


int orientatiecalibratie(){
  
  rijden(4);
  
  miniprev = (int)lsm.magData.x;
  if(mini > miniprev){
    mini = miniprev;
  }
  Serial.print("\t");
  Serial.print(mini);
  Serial.print("\t");
  maxiprev = (int)lsm.magData.x;
  if(maxi < maxiprev){
    maxi = maxiprev;
  }
  Serial.print(maxi);
  Serial.println("");
  
}

