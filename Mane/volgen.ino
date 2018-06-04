
void volgen(){
      dir = avleft - avright; 

      if(avfront > 15 && avfront < 25 /*&& avleft < 70 && avright < 70*/)              //forward
        rijden(1);
      else 
      if(avfront <= 10)   //back
       rijden(2);
      else
      if(dir < -10) //left
        rijden(3);
      else
      if(dir > 10)   //right  
        rijden(4);
      else rijden(0);
}

