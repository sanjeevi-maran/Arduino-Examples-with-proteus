byte BCD[4] ={13,12,11,10};
byte BCD1[4] ={9,8,7,6};

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
     pinMode (BCD1[d],OUTPUT);
  }
  
}


void bcd ()
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
void loop()
{

  for(int x=0;x<10;x++)
   {
           if(x==0)
            {
               for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],zero[y]);
                 }
              
            }
      
            else if (x==1)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],one[y]);
                 }   
             }
             

              else if (x==2)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],two[y]);
                 }   
             }
             
              else if (x==3)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],three[y]);
                 }   
             }
             
              else if (x==4)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],four[y]);
                 }   
             }
             
              else if (x==5)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],five[y]);
                 }   
             }
             
              else if (x==6)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],six[y]);
                 }   
             }
             
              else if (x==7)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],seven[y]);
                 }   
             }
             
              else if (x==1)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],eight[y]);
                 }   
             }
             
              else if (x==9)
            {
              for(int y=0;y<4;y++)
                 {
                  digitalWrite (BCD1[y],nine[y]);
                 }   
             }
             
       
          bcd();
   }         
}
