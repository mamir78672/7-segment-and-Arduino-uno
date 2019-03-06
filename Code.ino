int num_Array[16][7] = {  { 1,1,1,1,1,1,0 },
                          { 0,1,1,0,0,0,0 },
                          { 1,1,0,1,1,0,1 },
                          { 1,1,1,1,0,0,1 },
                          { 0,1,1,0,0,1,1 },
                          { 1,0,1,1,0,1,1 },
                          { 1,0,1,1,1,1,1 },
                          { 1,1,1,0,0,0,0 },
                          { 1,1,1,1,1,1,1 },
                          { 1,1,1,0,0,1,1 },
                          { 1,1,1,0,1,1,1 },
                          { 0,0,1,1,1,1,1 },
                          { 1,0,0,1,1,1,0 },
                          { 0,1,1,1,1,0,1 },
                          { 1,0,0,1,1,1,1 },
                          { 1,0,0,0,1,1,1 },
                        };
void disp_Num(int);
void dispOFF();
void setup() 
{ 
  pinMode(0, OUTPUT);   
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop() 
{ 
  for(int count = 0;count<=15;count++)
  {
    disp_Num(count);
    dispOFF();
  }
  for (int count = 15; count>=0; count--) 
  {
   dispOFF(); 
   disp_Num(count);
  }
  dispOFF();
}  
void disp_Num(int number) 
{
  for (int i=0; i<=6; i++) 
  {
   digitalWrite(i,num_Array[number][i]);
  }
}
void dispOFF()
{
  delay(500);
  for (int i=0; i<=6; i++) 
  {
   digitalWrite(i,LOW);
  }
}

