/*heartbeat
 * 
 * output the amount of seconds the program started
 * 
 */
 
 unsigned long time;
 int n = 0;

 void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
 }

 void loop() {
  time = millis();
  
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  Serial.print(n);
  Serial.println(" sec has elapsed");
  Serial.print("Milliseconds: ");
  Serial.println(time);
  
  n++;
  
 }

