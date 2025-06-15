// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
  pinMode(5,INPUT_PULLUP);
}

void loop()
{
  if( digitalRead(5)==LOW){
     digitalWrite(2,HIGH);
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     delay(3000);
    
     digitalWrite(2,LOW);
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
     delay(3000);
    
     digitalWrite(2,LOW);
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
     delay(3000);
    
     digitalWrite(2,LOW);
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
   
    
     
     
  }
  
  
}

