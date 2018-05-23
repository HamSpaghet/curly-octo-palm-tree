#define dichtbij 20
#define veryclose 10
void led(int distance){

    if(distance > dichtbij){
    digitalWrite(LEDG, LOW);
    digitalWrite(LEDO, LOW);
    digitalWrite(LEDR, HIGH);
  }else if(distance <= dichtbij){
    if(distance >= veryclose){
      digitalWrite(LEDR, LOW);
      digitalWrite(LEDG, LOW);
      digitalWrite(LEDO, HIGH);
    }else{
      digitalWrite(LEDR, LOW);
      digitalWrite(LEDO, LOW);
      digitalWrite(LEDG, HIGH);
    }
  }
  return;
}

