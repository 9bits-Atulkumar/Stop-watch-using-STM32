/*
 * HC-SR04 example sketch
 *
 * https://create.arduino.cc/projecthub/Isaac100/getting-started-with-the-hc-sr04-ultrasonic-sensor-036380
 *
 * by Isaac100
 */

//const int trigPin = 9;
//const int echoPin = 10;

float duration, distance;

int counter=0;
int counter2=0;

void setup() {
  pinMode(PB8, OUTPUT);
  pinMode(PB9, INPUT);
  pinMode(PA4,OUTPUT);
  pinMode(PA15,OUTPUT);
  pinMode(PA0, OUTPUT);
  pinMode(PA1,  OUTPUT);
  pinMode(PA2, OUTPUT);
  pinMode(PA3, OUTPUT);
  pinMode(PA4, OUTPUT);
  pinMode(PA5,  OUTPUT);
  pinMode(PA6, OUTPUT);
  pinMode(PB0,OUTPUT);
  pinMode(PB1,OUTPUT);
  pinMode(PB7,OUTPUT);
  pinMode(PB3, OUTPUT);
  pinMode(PB4, OUTPUT);
  pinMode(PB5,OUTPUT);
  pinMode(PB6,OUTPUT);
   digitalWrite(PA0,LOW);
   digitalWrite(PA1,LOW);
   digitalWrite(PA2,LOW);
   digitalWrite(PA3,LOW);
   digitalWrite(PA4,LOW);
   digitalWrite(PA5,LOW);
   digitalWrite(PA6,HIGH);
   digitalWrite(PB0,LOW);
   digitalWrite(PB1,LOW);
   digitalWrite(PB7,LOW);
   digitalWrite(PB3,LOW);
   digitalWrite(PB4,LOW);
   digitalWrite(PB5,LOW);
   digitalWrite(PB6,HIGH);
  
}

void loop() {

  led_off();
  ultra_sonic();
  if (distance <= 20)
    {
      led_on();
      while(1)
      {
        ultra_sonic();
        if (distance <= 40)
           {
            break;
           }
        counter=counter+1;
        delay(1000);
       
        
        if(counter==600)
           {
             
             dis_play(1);
           }
        if(counter==1200)
           { 
             
             dis_play(2);
           }
         if(counter==1800)
           { 
             
             dis_play(3);
           }
          if(counter==2400)
           { 
             
             dis_play(4);
           }
          if(counter==3000)
           { 
             
             dis_play(5);
           }
           if(counter==3600)
           {
             counter=0;
             dis_play(0);
             counter2=counter2+1;
             dis_play2(counter2);
           }
           

    }
  }

}


void ultra_sonic()
{
   digitalWrite(PB8, LOW);
  delayMicroseconds(2);
   digitalWrite(PB8, HIGH);
  delayMicroseconds(10);
  digitalWrite(PB8, LOW);
  duration = pulseIn(PB9, HIGH);
  distance = (duration*.0343)/2;
  delay(50);
  
  }

void led_on()
{ 
   
       digitalWrite(PA15,HIGH);
}

void led_off()
{ 
   
       digitalWrite(PA15,HIGH);
       delay(100);
       digitalWrite(PA15,LOW);
       delay(100);
}



void dis_play(int min)
{
   
if(min==0)
{ 
  digitalWrite(PA0,LOW);
   digitalWrite(PA1,LOW);
   digitalWrite(PA2,LOW);
   digitalWrite(PA3,LOW);
   digitalWrite(PA4,LOW);
   digitalWrite(PA5,LOW);
   digitalWrite(PA6,HIGH);
  }
  
   if (min==1)
   {
     digitalWrite(PA0,HIGH);
     digitalWrite(PA1,LOW);
     digitalWrite(PA2,LOW);
     digitalWrite(PA3,HIGH);
     digitalWrite(PA4,HIGH);
     digitalWrite(PA5,HIGH);
     digitalWrite(PA6,HIGH);
  
    }
  if (min==2)
   {
        digitalWrite(PA0,LOW);
        digitalWrite(PA1,LOW);
        digitalWrite(PA2,HIGH);
        digitalWrite(PA3,LOW);
        digitalWrite(PA4,LOW);
        digitalWrite(PA5,HIGH);
        digitalWrite(PA6,LOW);
     
    }
   if (min==3)
   {
      digitalWrite(PA0,LOW);
      digitalWrite(PA1,LOW);
      digitalWrite(PA2,LOW);
      digitalWrite(PA3,LOW);
      digitalWrite(PA4,HIGH);
      digitalWrite(PA5,HIGH);
      digitalWrite(PA6,LOW);

    }

   if (min==4)
   {
      digitalWrite(PA0,HIGH);
      digitalWrite(PA1,LOW);
      digitalWrite(PA2,LOW);
      digitalWrite(PA3,HIGH);
      digitalWrite(PA4,HIGH);
      digitalWrite(PA5,LOW);
      digitalWrite(PA6,LOW);
   
    }

    if (min==5)
   {
     digitalWrite(PA0,LOW);
     digitalWrite(PA1,HIGH);
     digitalWrite(PA2,LOW);
     digitalWrite(PA3,LOW);
     digitalWrite(PA4,HIGH);
     digitalWrite(PA5,LOW);
     digitalWrite(PA6,LOW);
    
    }
}
void dis_play2(int hr)
{
   
   if (hr==1)
   {
     digitalWrite(PB0,HIGH);
     digitalWrite(PB1,LOW);
     digitalWrite(PB7,LOW);
     digitalWrite(PB3,HIGH);
     digitalWrite(PB4,HIGH);
     digitalWrite(PB5,HIGH);
     digitalWrite(PB6,HIGH);
  
    }
  if (hr==2)
   {
        digitalWrite(PB0,LOW);
        digitalWrite(PB1,LOW);
        digitalWrite(PB7,HIGH);
        digitalWrite(PB3,LOW);
        digitalWrite(PB4,LOW);
        digitalWrite(PB5,HIGH);
        digitalWrite(PB6,LOW);
     
    }
   if (hr==3)
   {
      digitalWrite(PB0,LOW);
      digitalWrite(PB1,LOW);
      digitalWrite(PB7,LOW);
      digitalWrite(PB3,LOW);
      digitalWrite(PB4,HIGH);
      digitalWrite(PB5,HIGH);
      digitalWrite(PB6,LOW);

    }

   if (hr==4)
   {
      digitalWrite(PB0,HIGH);
      digitalWrite(PB1,LOW);
      digitalWrite(PB7,LOW);
      digitalWrite(PB3,HIGH);
      digitalWrite(PB4,HIGH);
      digitalWrite(PB5,LOW);
      digitalWrite(PB6,LOW);
   
    }

    if (hr==5)
   {
     digitalWrite(PB0,LOW);
     digitalWrite(PB1,HIGH);
     digitalWrite(PB7,LOW);
     digitalWrite(PB3,LOW);
     digitalWrite(PB4,HIGH);
     digitalWrite(PB5,LOW);
     digitalWrite(PB6,LOW);
   }

    if (hr==6)
   {
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,HIGH);
    digitalWrite(PB7,LOW);
    digitalWrite(PB3,LOW);
    digitalWrite(PB4,LOW);
    digitalWrite(PB5,LOW);
    digitalWrite(PB6,LOW);
    
    }
     if (hr==7)
   {
     digitalWrite(PB0,LOW);
     digitalWrite(PB1,LOW);
     digitalWrite(PB7,LOW);
     digitalWrite(PB3,HIGH);
     digitalWrite(PB4,HIGH);
    digitalWrite(PB5,HIGH);
    digitalWrite(PB6,HIGH);
   }
    if (hr==8)
   {
     digitalWrite(PB0,LOW);
  digitalWrite(PB1,LOW);
  digitalWrite(PB7,LOW);
  digitalWrite(PB3,LOW);
  digitalWrite(PB4,LOW);
  digitalWrite(PB5,LOW);
  digitalWrite(PB6,LOW);
   }

    if (hr==9)
   {
    digitalWrite(PB0,LOW);
    digitalWrite(PB1,LOW);
     digitalWrite(PB7,LOW);
     digitalWrite(PB3,LOW);
     digitalWrite(PB4,HIGH);
     digitalWrite(PB5,LOW);
     digitalWrite(PB6,LOW);
   }

   
}
