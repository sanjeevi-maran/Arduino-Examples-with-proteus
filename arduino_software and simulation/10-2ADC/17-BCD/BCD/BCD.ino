int BCD[4]={5,6,9,10};
byte bcd[1][1]={{0,0,0,0}};
void setup() 
{
  for(int t=0;t<4;t++)
  {
    pinMode (BCD[4],OUTPUT);
  }

}

void loop()
{
   for(int w=0;w<4;w++)
     {
       digitalWrite (BCD[w],bcd[1][1]);
     }

}
