#include<LiquidCrystal.h>
const int rs=2,en=3,d4=4,d5=5,d6=6,d7=7;

LiquidCrystal lcd(rs ,en ,d4 ,d5 ,d6 ,d7 );
int button=10,buttonstate,flag=0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin()9600;
 
  Serial.print("Scoreboard");
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    buttonstate=digitalRead(button);
    if (buttonstate==HIGH)
       { flag++;
        delay(1000); }  
        
        Serial.print(flag);
}
