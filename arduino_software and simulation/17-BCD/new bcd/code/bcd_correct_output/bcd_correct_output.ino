byte BCD[4] ={7,6,5,4};
int zero[4] ={0,0,0,0};
int one[4]  ={1,0,0,0};
int two[4]  ={0,1,0,0};
int three[4]={1,1,0,0};
int four[4] ={0,0,1,0};
int five[4] ={1,0,1,0};
int six[4]  ={0,1,1,0};
int seven[4]={1,1,1,0};
int eight[4]={0,0,0,1};
int nine[4] ={1,0,0,1};

     
void setup()
{
  for(int d=0;d<4;d++)
  {
  pinMode (BCD[d],OUTPUT);
  }
}

void loop()
{
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],zero[y]);
           }
          delay(2000);
          for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],one[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],two[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],three[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],four[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],five[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],six[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],seven[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],eight[y]);
           }
          delay(2000);
           for(int y=0;y<4;y++)
           {
            digitalWrite (BCD[y],nine[y]);
           }
           delay(2000);
          
}
