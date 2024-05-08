#define Buzzer 32
#define LED 13
#define Flame 15
#define Board 2
#define Relay 5
void setup(){
    Serial.begin(9600);
    pinMode(Buzzer, OUTPUT);
    pinMode(LED,OUTPUT);
    pinMode(Flame,INPUT);
    pinMode(Relay,OUTPUT); 
    pinMode(Board,OUTPUT); 
}
void loop(){
  int flame_sensor=digitalRead(Flame);
  Serial.println(flame_sensor);
  if(flame_sensor==0){
  digitalWrite(Relay, HIGH);
  digitalWrite(LED, LOW);
  digitalWrite(Buzzer, HIGH);
  Serial.println("Fire detected");
  delay(1000);
 digitalWrite(Board, LOW);
  delay(1000);
  digitalWrite(Board, HIGH);
   delay(1000);
 }
 else{
    digitalWrite(LED, HIGH);
    digitalWrite(Relay,LOW); 
    digitalWrite(Buzzer,LOW);
 }
}