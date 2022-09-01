int blue = 3;
int red = 4;
int green = 5;
void setup() {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  setupRgb(0,0,0);
}

void setupRgb(int b, int r, int g){
  analogWrite(blue,b);
  analogWrite(red,r);
  analogWrite(green,g);
}
