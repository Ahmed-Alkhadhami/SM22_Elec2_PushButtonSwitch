int ledPin = 12;
int butPin = 4;

bool button_state = false;
bool last_button_state = false;

bool lightToggle = false;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  last_button_state = button_state;
  button_state = digitalRead(butPin);
  Serial.println(button_state, last_button_state);
  
  if (button_state && !last_button_state){ //Button just button_state
    lightToggle = !lightToggle;
  } 
  
  digitalWrite(ledPin, lightToggle);
}
