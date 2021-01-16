

  int   bcdpins0 = 10;
  int   bcdpins1 = 8;
  int   bcdpins2 = 6; 
  int   bcdpins3 = 5;
  

void setup()
{
   digitalWrite (bcdpins0,OUTPUT);
       digitalWrite (bcdpins1,OUTPUT);
         digitalWrite (bcdpins2,OUTPUT);
           digitalWrite (bcdpins3,OUTPUT);

}

void loop() 
{
  
     digitalWrite (bcdpins0,0);
       digitalWrite (bcdpins1,0);
         digitalWrite (bcdpins2,1);
           digitalWrite (bcdpins3,0);
}

