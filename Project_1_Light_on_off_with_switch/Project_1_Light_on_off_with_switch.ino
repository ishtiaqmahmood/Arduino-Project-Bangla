// Project: 1 -> Led On/Off with Switch (Arduino UNO)

int led1 = 7;
int led2 = 8;

int switch1 = 9;
int switch2 = 10;

int x1;
int x2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  x1 = digitalRead(switch1);
  Serial.println(x1);
  x2 = digitalRead(switch2);
  Serial.println(x2);
  
  if(x1==0){
    digitalWrite(led1, LOW);
    delay(500);
  } else {
    digitalWrite(led1, HIGH);
    delay(500);
  }

  if(x2==0){
    digitalWrite(led2, LOW);
    delay(500);
  } else {
    digitalWrite(led2, HIGH);
    delay(500);
  }
}
