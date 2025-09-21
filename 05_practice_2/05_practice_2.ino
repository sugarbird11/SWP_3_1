#define gpio 7

int toggle = 0;

void setup() {
  pinMode(gpio, OUTPUT);
  Serial.begin(115200);
  digitalWrite(gpio, toggle);
  delay(1000); // 켜고 1초 기다리기

  for (int i=0;i<=10;i++) {
    toggle = 1-toggle;
    digitalWrite(gpio, toggle);
    delay(100);
  } // 1 0 1 0 1 0 1 0 1 0 1
  
  while (1) {} // infinite loop
}

void loop() {
  // put your main code here, to run repeatedly:
}
