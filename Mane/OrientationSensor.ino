int orientationsensor(){

  
  lsm.read();
   graden = (int)lsm.magData.x * 0.1 * 36 / 42 + 60;  
  Serial.print("Mag X: "); Serial.print((int)lsm.magData.x);     
  Serial.print("\t"); 
  Serial.print("Graden: ");
  Serial.print(graden); 


  return graden;
}
