int blue = 3;
int red = 5;
int green = 6;
int red2 = 9;
int green2 = 10;
int blue2 = 11;
int delayTime = 70;
void setup() {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {
  setupRgb(0,0,1023);
  delay(delayTime);
  setupRgb(1023,0,0);
  delay(delayTime);
  setupRgb(0,1023,0);
  delay(delayTime);
}

void setupRgb(int b, int r, int g){
  analogWrite(blue,b);
  analogWrite(red,r);
  analogWrite(green,g);
  analogWrite(blue2,r);
  analogWrite(red2,g);
  analogWrite(green2,b);
}
