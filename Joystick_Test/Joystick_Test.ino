#define JS_V_PIN A1
#define JS_H_PIN A2
int JS_V, JS_H;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  JS_V = analogRead(JS_V_PIN);
  JS_H = analogRead(JS_H_PIN);
  Serial.print("JS_V: ");
  Serial.println(JS_V);
  Serial.print("JS_H: ");
  Serial.println(JS_H);
  delay(333);
}
