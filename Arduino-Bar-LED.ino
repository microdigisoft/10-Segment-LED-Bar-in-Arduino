const int ledPin[10] =  {2, 3, 4, 5, 6, 9, 10, 11}; // the number of the LED pins

int ledState = 0;

void setup() {

  Serial.begin(9600);

  // set the digital pin as output:

  for (int i = 0; i < 10 ; i ++) {

    pinMode(ledPin[i], OUTPUT);

    digitalWrite(ledPin[i], LOW);

  }

  ledState = 1;

  display(ledState);
  delay(100);

}

void loop()

{

  for (int i = 0; i < 9; i++) {

    ledState = ledState << 1;

    display(ledState);

    delay(50);

    Serial.println(ledState, BIN);

  }

  for (int i = 9; i > 0; i--) {

    ledState = ledState >> 1;

    display(ledState);

    delay(50);

    Serial.println(ledState, BIN);

  }

}

void display(int sat) {

  for (int i = 0; i < 10 ; i ++) {

    digitalWrite(ledPin[i], bitRead(ledState, i));

  }
}
