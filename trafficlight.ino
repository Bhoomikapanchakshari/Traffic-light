#define ROAD_ONE 7
#define ROAD_TWO 6
#define ROAD_THREE 5

void setup(){
  pinMode(ROAD_ONE,OUTPUT);
  pinMode(ROAD_TWO,OUTPUT);
  pinMode(ROAD_THREE,OUTPUT);
}
void loop(){
  digitalWrite(ROAD_ONE,HIGH);
  digitalWrite(ROAD_TWO,LOW);
  digitalWrite(ROAD_THREE,LOW);
  delay(9000);
  digitalWrite(ROAD_ONE,LOW);
  digitalWrite(ROAD_TWO,HIGH);
  digitalWrite(ROAD_THREE,LOW);
  delay(9000);
  digitalWrite(ROAD_ONE,LOW);
  digitalWrite(ROAD_TWO,LOW);
  digitalWrite(ROAD_THREE,HIGH);
  delay(9000);
}
