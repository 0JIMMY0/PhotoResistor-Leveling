/* Not finished yet
 * Not solved
 */

int q = 6;
int w = 2;
int e = 3;
int r = 4;
int t = 5;

int ANALOG=0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  
pinMode(q,OUTPUT);
pinMode(w,OUTPUT);
pinMode(e,OUTPUT);
pinMode(r,OUTPUT);
pinMode(t,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(ANALOG);
  if(val>=200) digitalWrite(q,HIGH);
  if(val>=400) digitalWrite(w,HIGH);
  if(val>=600) digitalWrite(e,HIGH);
  if(val>=800) digitalWrite(r,HIGH);
  if(val>=1000) digitalWrite(t,HIGH);
  if(val<=200) digitalWrite(q,LOW);
  if(val<=400) digitalWrite(w,LOW);
  if(val<=600) digitalWrite(e,LOW);
  if(val<=800) digitalWrite(r,LOW);
  if(val<=1000) digitalWrite(t,LOW);

 
  
  //Lector
  Serial.print ("Value is:");
  Serial.println (val);
  delay(5000);

}
