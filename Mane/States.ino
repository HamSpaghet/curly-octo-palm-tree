void automatic(){
avleft, avright, avrightS, avleftS
int objectleft = ; //Plantje a/d linkerzijde van de AGV
int objectright = ; //Plantje a/d rechterzijde van de AGV
int tedichtbij = ; //zeer kleine afstand tot object voor de AGV
int kafstand = ; //kleine afstand tot object voor de AGV
int vafstand = ; //lange afstand tot object voor de AGV

  if(avleftS < objectleft || avrightS < objectright){ //Plantje a/d linker- of rechterzijde van de AGV gedetecteerd
    rijden(0);
  }

  if(avleft < tedichtbij || avright < tedichtbij){ //Zeer korte afstand tot object. -> stoppen
    rijden(0);
  }

  if((avleft => tedichtbij && avleft < kafstand) || (avright => tedichtbij && avright < kafstand)){ //Kleine afstand tot object -> afremmen om afstand iets te vergroten
    rijden(5);
  }

  if((avleft => kafstand && avleft < vafstand) || (avright => kafstand && avright < vafstand){ //Goede afstand tot object voor de AGV. AGV hoeft niet sneller of langzamer.
  rijden(1);
  }

  if(avleft >= vafstand || avright >= vafstand){ //Afstand tot object is groot. De AGV moet versnellen om het object bij te houden.
    rijden();
  }
}

