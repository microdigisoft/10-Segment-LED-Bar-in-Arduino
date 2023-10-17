const int sensorPin = 0;    // this is the sensor pin for the photoresistor, which inputs to Analog (A0)
int lightLevel;             // this is the level of light as read by the photoresistor

int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


const int pct_10 = 2;      // pin 2 is connected to the first LED of the bargraph (10%)
const int pct_20 = 3;      // pin 3 is connected to the second LED of the bargraph (20%)
const int pct_30 = 4;      // pin 4 is connected to the third LED of the bargraph (30%)
const int pct_40 = 5;      // pin 5 is connected to the fourth LED of the bargraph (40%)
const int pct_50 = 6;      // pin 6 is connected to the fifth LED of the bargraph (50%)
const int pct_60 = 7;      // pin 7 is connected to the sixth LED of the bargraph (60%)
const int pct_70 = 8;     // pin 8 is connected to the seventh LED of the bargraph (70%)
const int pct_80 = 9;     // pin 9 is connected to the eighth LED of the bargraph (80%)
const int pct_90 = 10;    // pin 10 is connected to the ninth LED of the bargraph (90%)
const int pct_100 = 11;   // pin 10 is connected to the tenth LED of the bargraph (100%)


void setup() {

  pinMode(pct_10, OUTPUT);    // pin 2 is connected to the first LED of the bargraph (10%)
  pinMode(pct_20, OUTPUT);    // pin 3 is connected to the first LED of the bargraph (20%)
  pinMode(pct_30, OUTPUT);    // pin 4 is connected to the first LED of the bargraph (30%)
  pinMode(pct_40, OUTPUT);    // pin 5 is connected to the first LED of the bargraph (40%)
  pinMode(pct_50, OUTPUT);    // pin 6 is connected to the first LED of the bargraph (50%)
  pinMode(pct_60, OUTPUT);    // pin 7 is connected to the first LED of the bargraph (60%)
  pinMode(pct_70, OUTPUT);    // pin 8 is connected to the first LED of the bargraph (70%)
  pinMode(pct_80, OUTPUT);    // pin 9 is connected to the first LED of the bargraph (80%)
  pinMode(pct_90, OUTPUT);    // pin 10 is connected to the first LED of the bargraph (90%)
  pinMode(pct_100, OUTPUT);  // pin 11 is connected to the first LED of the bargraph (100%)
}

void loop() {


  lightLevel = analogRead(sensorPin);  // this is used to measure the voltage emitted by the photoresistor


  if (lightLevel >= 1000)
  {
    digitalWrite(pct_10, HIGH);     // display only 10% of the bar graph
    digitalWrite(pct_20, LOW);     // turn LED OFF
    digitalWrite(pct_30, LOW);     // turn LED OFF
    digitalWrite(pct_40, LOW);     // turn LED OFF
    digitalWrite(pct_50, LOW);     // turn LED OFF
    digitalWrite(pct_60, LOW);     // turn LED OFF
    digitalWrite(pct_70, LOW);     // turn LED OFF
    digitalWrite(pct_80, LOW);     // turn LED OFF
    digitalWrite(pct_90, LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 900)
  { digitalWrite(pct_10,  HIGH);     // display 20% of the bar graph
    digitalWrite(pct_20,  HIGH);     // turn LED ON
    digitalWrite(pct_30,  LOW);     // turn LED OFF
    digitalWrite(pct_40,  LOW);     // turn LED OFF
    digitalWrite(pct_50,  LOW);     // turn LED OFF
    digitalWrite(pct_60,  LOW);     // turn LED OFF
    digitalWrite(pct_70,  LOW);     // turn LED OFF
    digitalWrite(pct_80,  LOW);     // turn LED OFF
    digitalWrite(pct_90,  LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 800)
  { digitalWrite(pct_10, HIGH);     // display 30% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, LOW);     // turn LED OFF
    digitalWrite(pct_50, LOW);     // turn LED OFF
    digitalWrite(pct_60, LOW);     // turn LED OFF
    digitalWrite(pct_70, LOW);     // turn LED OFF
    digitalWrite(pct_80, LOW);     // turn LED OFF
    digitalWrite(pct_90, LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 700)
  { digitalWrite(pct_10, HIGH);     // display 40% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, LOW);     // turn LED OFF
    digitalWrite(pct_60, LOW);     // turn LED OFF
    digitalWrite(pct_70, LOW);     // turn LED OFF
    digitalWrite(pct_80, LOW);     // turn LED OFF
    digitalWrite(pct_90, LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 600)
  { digitalWrite(pct_10, HIGH);     // display 50% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, HIGH);     // turn LED ON
    digitalWrite(pct_60, LOW);     // turn LED OFF
    digitalWrite(pct_70, LOW);     // turn LED OFF
    digitalWrite(pct_80, LOW);     // turn LED OFF
    digitalWrite(pct_90, LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 500)
  { digitalWrite(pct_10, HIGH);     // display 60% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, HIGH);     // turn LED ON
    digitalWrite(pct_60, HIGH);     // turn LED ON
    digitalWrite(pct_70,  LOW);     // turn LED OFF
    digitalWrite(pct_80,  LOW);     // turn LED OFF
    digitalWrite(pct_90,  LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 400)
  { digitalWrite(pct_10, HIGH);     // display 70% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, HIGH);     // turn LED ON
    digitalWrite(pct_60, HIGH);     // turn LED ON
    digitalWrite(pct_70, HIGH);     // turn LED ON
    digitalWrite(pct_80,  LOW);     // turn LED OFF
    digitalWrite(pct_90,  LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 300)
  { digitalWrite(pct_10, HIGH);     // display 80% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, HIGH);     // turn LED ON
    digitalWrite(pct_60, HIGH);     // turn LED ON
    digitalWrite(pct_70, HIGH);     // turn LED ON
    digitalWrite(pct_80, HIGH);     // turn LED ON
    digitalWrite(pct_90,  LOW);     // turn LED OFF
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else if (lightLevel >= 200)
  { digitalWrite(pct_10, HIGH);     // display 90% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, HIGH);     // turn LED ON
    digitalWrite(pct_60, HIGH);     // turn LED ON
    digitalWrite(pct_70, HIGH);     // turn LED ON
    digitalWrite(pct_80, HIGH);     // turn LED ON
    digitalWrite(pct_90, HIGH);     // turn LED ON
    digitalWrite(pct_100, LOW);
  }   // turn LED OFF

  else
  {
    digitalWrite(pct_10, HIGH);     // display 10% of the bar graph
    digitalWrite(pct_20, HIGH);     // turn LED ON
    digitalWrite(pct_30, HIGH);     // turn LED ON
    digitalWrite(pct_40, HIGH);     // turn LED ON
    digitalWrite(pct_50, HIGH);     // turn LED ON
    digitalWrite(pct_60, HIGH);     // turn LED ON
    digitalWrite(pct_70, HIGH);     // turn LED ON
    digitalWrite(pct_80, HIGH);     // turn LED ON
    digitalWrite(pct_90, HIGH);     // turn LED ON
    digitalWrite(pct_100, HIGH);
  }   // turn LED OFF
}
