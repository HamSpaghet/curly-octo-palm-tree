
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

  avfront = ((Ldistance + Rdistance)*2 + avfront)/5;
  avleft = (Ldistance + avleft*2)/3;
  avleftS = (LSdistance + avleftS*2)/3;
  avright = (Rdistance + avright*2)/3;
  avrightS = (RSdistance + avrightS*2)/3;
  
}

