//YouTube|Tech at Home

int led1=7;
int led2=8;
int led3=9;
int led4=6;

void setup() 
{
          
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(6,OUTPUT); 
}

void loop()
{
  digitalWrite(led1,HIGH);
  delay(5000);
  digitalWrite(led1,LOW);
  delay(000);
  digitalWrite(led2,HIGH);
  delay(000); 

    digitalWrite(led4,HIGH);
  delay(5000);   
  digitalWrite(led2,LOW);
  delay(000);
 digitalWrite(led3,HIGH);
  delay(5000);
  digitalWrite(led3,LOW);
  delay(000); 
  digitalWrite(led4,LOW);
  delay(000);  
 }
 
