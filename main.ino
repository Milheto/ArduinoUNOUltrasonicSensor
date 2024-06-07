// C++ Code

#define trig 2
#define echo 3 
#define led 13
double distancia = 0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  distancia = pulseIn (echo, HIGH);
  
  
  distancia *= 0.017;

  Serial.print(distancia);
  Serial.println(": CM");
  
  delay(500);


  if(distancia < 8 && distancia > 0)
  {
  	digitalWrite(led,HIGH);
    delay(2000);
  }
  else
  {
  	digitalWrite(led,LOW);
  }
}