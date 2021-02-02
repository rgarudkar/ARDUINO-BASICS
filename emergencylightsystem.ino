int motionPin=0;
int lightPin=1;
int ledPin=9;

//DISTANCE VARIABLES
int lastDist=0;
int currentDist=0;

//THRESHOLD FOR MOVEMENT
int thresh = 200;

void setup()
{
  pinMode(ledPin,OUTPUT);
}

void loop
{
  //READ THE SENSOR
  int lightVal= analogRead(lightPin);
  currentDist= analogRead(motionPin);
  
  if((currentDist>lastDist + thresh || currentDist<lastDist - thresh) && lightVal<800)
  {
    digitalWrite(ledPin,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
  lastDist=currentDist
      
}
