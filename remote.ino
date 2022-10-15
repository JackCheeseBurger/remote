int button = 7; int buttonState = 0; int hor = 0; int vert = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  //buttonState = digitalRead(button);
  hor = analogRead(A1);
  vert = analogRead(A0);
  if(vert > 600){
    Serial.write(1);
    }
  if(vert < 400){
    Serial.write(3);
    }
  if(hor < 400){
    Serial.write(4);
    }
  if(hor > 600){
    Serial.write(2);
    }
  if(hor > 400 && hor < 600 && vert > 400 && vert < 600){
    Serial.write(0);
    }
  
}
