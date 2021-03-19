int button1 = 2;
// button should be connected to pin 2

void setup() {
  pinMode(button1, INPUT);
  // set pin mode to INPUT
  Serial.begin(9600);
  // start serial
}

void loop() {
  if(digitalRead(button1) == 1){ // check if button is pressed
      Serial.println("button1"); // print to serial
    }
    delay(100); // delay 1/10 of a second
}
