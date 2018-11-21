  int cathode[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1};
  int anode[]={A2,A3,A4,A5};
  int p1[]={A3,A4};
  int p2[]={A2,A5};
  int boundary[]={0,1,2,3,4,11,12,13,A0,A1,8,7};
  int inbound[]={5,6,9,10};
  int spi[]={0,1,2,3,4,11,12,13,A0,A1,8,7,6,5,10,9};
  int z[]={0,1,6,7,2,5,10,9,8,3,4,11,12,13,A0,A1};
  int a[]={0,1,2,3};
  int b[]={A1,8,7,1};
  int c[]={12,13,A0,A1};
  int d[]={3,4,11,12};
void setup() {
  pinMode(0,OUTPUT);
  digitalWrite(0,HIGH);
  pinMode(1,OUTPUT);
  digitalWrite(1,HIGH);
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  pinMode(3,OUTPUT);
  digitalWrite(3,HIGH);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
  pinMode(5,OUTPUT);
  digitalWrite(5,HIGH);
  pinMode(6,OUTPUT);
  digitalWrite(6,HIGH);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
  pinMode(9,OUTPUT);
  digitalWrite(9,HIGH);
  pinMode(10,OUTPUT);
  digitalWrite(10,HIGH);
  pinMode(11,OUTPUT);
  digitalWrite(11,HIGH);
  pinMode(12,OUTPUT);
  digitalWrite(12,HIGH);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  pinMode(A0,OUTPUT);
  digitalWrite(A0,HIGH);
  pinMode(A1,OUTPUT);
  digitalWrite(A1,HIGH);
  pinMode(A2,OUTPUT);
  digitalWrite(A2,LOW);
  pinMode(A3,OUTPUT);
  digitalWrite(A3,LOW);
  pinMode(A4,OUTPUT);
  digitalWrite(A4,LOW);
  pinMode(A5,OUTPUT);
  digitalWrite(A5,LOW);
  }
void loop() {
  for(int k=0;k<5;k++)
  {for(int i=0;i<2;i++)
  {
    digitalWrite(p1[i],HIGH);
  }
  for(int i=0;i<4;i++)
  {
    digitalWrite(inbound[i],LOW);
  }
  delay(200);
  for(int i=0;i<2;i++)
  {
    digitalWrite(p2[i],HIGH);
  }
  for(int i=0;i<12;i++)
  {
    digitalWrite(boundary[i],LOW);
  }
  delay(200);
  for(int i=0;i<2;i++)
  {
    digitalWrite(p2[i],LOW);
  }
  for(int i=0;i<12;i++)
  {
    digitalWrite(boundary[i],HIGH);
  }
  delay(200);
  for(int i=0;i<2;i++)
  {
    digitalWrite(p1[i],LOW);
  }
  for(int i=0;i<4;i++)
  {
    digitalWrite(inbound[i],HIGH);
  }
  delay(200);
  }
  //----------------------------------------Zoomin-----------------------------------------------------
 for(int k=0;k<5;k++)
 { 
  for(int j=0,i=0;i<16;i++)
  { 
    
    if(i==1)
    {
      j+=1;
      delay(80);
    }
    else if(i==4)
    {
      j+=1;
      delay(80);
    }
    else if(i==9)
    {
      j+=1;
      delay(80);
    }
    if(i==15)
    {
      delay(80);
    }
    digitalWrite(anode[j],HIGH);
    digitalWrite(z[i],LOW);
  }
    for(int j=0,i=0;i<16;i++)
  { 
    
    if(i==1)
    {
      j+=1;
      delay(80);
    }
    else if(i==4)
    {
      j+=1;
      delay(80);
    }
    else if(i==9)
    {
      j+=1;
      delay(80);
    }
    digitalWrite(anode[j],LOW);
    digitalWrite(z[i],HIGH);
  }
}
//----------------------------------------------------------------
for(int k=0;k<5;k++)
{
  for(int i=0;i<4;i++)
  {
    digitalWrite(anode[i],HIGH);
  }
  for(int i=0;i<12;i++)
  {
    digitalWrite(boundary[i],LOW);
    delay(40);
  }
  
  for(int i=0;i<12;i++)
  {
    digitalWrite(boundary[i],HIGH);
    delay(40);
  }
  for(int i=0;i<4;i++)
  {
    digitalWrite(anode[i],LOW);
  }
  
}
//--------------------------------------------------------------------------------------------------------
for(int i=0;i<4;i++)
{
  if(i>0)
  {
    for(int j=0;j<16;j++)
  {
    digitalWrite(spi[j],HIGH);
  }
  }
  digitalWrite(anode[i],HIGH);
  for(int j=0;j<16;j++)
  {
    digitalWrite(spi[j],LOW);
    delay(100);
  }
}

//--------------------------------------------------------------------------------------------------------------------
  for(int j=0;j<5;j++)
  {
    for(int i=0;i<4;i++)
  {
    digitalWrite(anode[i],HIGH);
    digitalWrite(a[i],LOW);
    digitalWrite(b[i],LOW);
    digitalWrite(c[i],LOW);
    digitalWrite(d[i],LOW);
    delay(200);
  }
    for(int i=0;i<4;i++)
  {
    digitalWrite(anode[i],LOW);
    digitalWrite(a[i],HIGH);
    digitalWrite(b[i],HIGH);
    digitalWrite(c[i],HIGH);
    digitalWrite(d[i],HIGH);
    delay(200);
  }
  }
  
}

  
