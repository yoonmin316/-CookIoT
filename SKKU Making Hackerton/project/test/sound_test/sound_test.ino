#define sound 2
void setup() {
  Serial.begin(115200);
}

void loop() {
  float val = analogRead(sound);
  Serial.println(val);
  delay(50);
}
