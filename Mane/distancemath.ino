
void distancemath(){

  if(Ldistance > 200){
     Ldistance = 200;
  }
  if(Rdistance > 200){
     Rdistance = 200;
  }
  if(LSdistance > 200){
     LSdistance = 200;
  }
  if(RSdistance > 200){
     RSdistance = 200;
  }

  avfront = (Ldistance + Rdistance + avfront)/3;
  avleft = (Ldistance + avleft)/2;
  avleftS = (LSdistance + avleftS)/2;
  avright = (Rdistance + avright)/2;
  avrightS = (RSdistance + avrightS)/2;
  
}

