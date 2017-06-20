int OutPin = 13;  // PWM Pin For Output
int Usage = 10;
int DELAY = 1000;
String Serialval;
void setup() {
Serial.begin(115200);
}

void loop() {
if(Serial.available() > 1)
{
 Serialval = Serial.parseInt();
 Usage = Serialval.toInt() ;
 Serial.println(Usage);
}
Visualize(3,(Usage/10));
}

void Visualize(int StartPin,int ndata)
{
  delay(500);

if(ndata==0)
 {
/* analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);
*/
}
else if(ndata==1)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

}
else if(ndata==2)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

}
else if(ndata==3)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

}
else if(ndata==4)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

}
else if(ndata==5)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

analogWrite(StartPin+4,255);

}
else if(ndata==6)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

analogWrite(StartPin+4,255);

analogWrite(StartPin+5,255);

}
else if(ndata==7)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

analogWrite(StartPin+4,255);

analogWrite(StartPin+5,255);

analogWrite(StartPin+6,255);

}
else if(ndata==8)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

analogWrite(StartPin+4,255);

analogWrite(StartPin+5,255);

analogWrite(StartPin+6,255);

analogWrite(StartPin+7,255);

}
else if(ndata==9)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

analogWrite(StartPin+4,255);

analogWrite(StartPin+5,255);

analogWrite(StartPin+6,255);

analogWrite(StartPin+7,255);

analogWrite(StartPin+8,255);

}
else if(ndata==10)
 {
  analogWrite(StartPin+0,0);

analogWrite(StartPin+1,0);

analogWrite(StartPin+2,0);

analogWrite(StartPin+3,0);

analogWrite(StartPin+4,0);

analogWrite(StartPin+5,0);

analogWrite(StartPin+6,0);

analogWrite(StartPin+7,0);

analogWrite(StartPin+8,0);

analogWrite(StartPin+9,0);
analogWrite(StartPin+0,255);

analogWrite(StartPin+1,255);

analogWrite(StartPin+2,255);

analogWrite(StartPin+3,255);

analogWrite(StartPin+4,255);

analogWrite(StartPin+5,255);

analogWrite(StartPin+6,255);

analogWrite(StartPin+7,255);

analogWrite(StartPin+8,255);

analogWrite(StartPin+9,255);

}
}

