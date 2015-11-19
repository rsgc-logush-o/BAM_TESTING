int rPin = 17; 
int gPin = 15;
int bPin = 14;

int rVal;
int gVal;
int bVal;



IntervalTimer bamTest;


void setup() {
  
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
Serial.begin(9600);
 bamTest.priority(0);
  bamTest.begin(bamTesting, 1000000);

}

void loop() {
  // put your main code here, to run repeatedly:
bVal = random(0, 255);
rVal = random(0, 255);
gVal = random(0, 255);
Serial.println("r" + rVal);
Serial.println("g" + gVal);
Serial.println("b" + bVal);
delay(1000);
//  for(int i = 0; i < 8; i++)
//  {
//    bVal = i;
//    delay(500);
//    
//  }
//delay(500);
//  for(int i = 7; i > -1; i--)
//  {
//    bVal = i;
//    delay(500);
//    
//  }
//bVal = 7;
}

void bamTesting()
{
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < pow(i, 2); j++)
    {
    digitalWrite(rPin, ((rVal >> i) & 1));
    digitalWrite(gPin, (gVal >> i) & 1);
    digitalWrite(bPin, ((bVal >> i) & 1));
    //delay(1);
    }
//delay(1);
    
  }
}

