int objeto = 0;
int sensor = 7;
int buz =8; 

void setup() {
  pinMode(sensor, INPUT);
  pinMode(buz, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  objeto = digitalRead(sensor);
  if (objeto == 0) {
    Serial.println("There's no object here");
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
  } else {
    Serial.println("Object found");
    delay(1000);
  }
}
