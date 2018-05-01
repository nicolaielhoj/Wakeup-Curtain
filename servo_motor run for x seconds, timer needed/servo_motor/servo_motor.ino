#include <Servo.h>
Servo myservo;  // create servo object to control a servo

unsigned long timer = 0;

void setup() {
  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  myservo.attach(D1);  // attaches the servo on pin 0 to the servo object
  timer = millis();

  Serial.println("setup complete");
}



int state = 1;
int stateCounter = 0;

void loop() {
  if (state == 1 ) //runs until x seconds, runs in loop (fast)
  {
    myservo.write(83); //servo in run position

    if ( millis() - timer > 12000) // runs state 1 until x seconds is reached
    {
      Serial.print("Leaving state: ");
      Serial.println(state);
      stateCounter += 1; //add 1 to statecound
      state = 2; //change state to 2
      timer = millis();
      Serial.print("statecounter ");
      Serial.println(stateCounter);

      if (stateCounter == 15) { //number of times times that the state 1 and 2 should run
        Serial.print("end of cycles");
        state = 0;
      }
    }
  }

  else if (state == 2) // pause for x seconds
  {
    myservo.write(88); //motor in off position
    
    if ( millis() - timer > 48000) // 47800 runs state 2, until x seconds is reached
    {
      Serial.print("Leaving state:");
      Serial.println(state);
      state = 1; //set to state 1
      timer = millis();
    }
  }

  // Go to state 0 = off-state
  else if (state == 0) // pause for x seconds
  {
    myservo.write(89);
  }
}
