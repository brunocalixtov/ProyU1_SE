int w = 8;
int a = 9;
int s = 10;
int d = 11;
int saltar = 12;
int start = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(w, INPUT_PULLUP);
  pinMode(a, INPUT_PULLUP);
  pinMode(s, INPUT_PULLUP);
  pinMode(d, INPUT_PULLUP);
  Serial.begin(9600);
}

int wk;
int ak;
int sk;
int dk;
int saltark;
int startk;

void loop() {
  // put your main code here, to run repeatedly:
   wk = !digitalRead(w);
   ak = !digitalRead(a);
   sk = !digitalRead(s);
   dk = !digitalRead(d);
   saltark = !digitalRead(saltar);
   startk = !digitalRead(start);
   
   
   if(wk == 1){
    Serial.println("w");
    delay(100);
   }
   if(ak == 1){
    Serial.println("a");
    delay(100);
   }
   if(sk == 1){
    Serial.println("s");
    delay(100);
   }
   if(dk == 1){
    Serial.println("d");
    delay(100);
   }
   if(saltark == 1){
    Serial.println("l");
    delay(100);
   }
   if(startk == 1){
    Serial.println("k");
    delay(100);
   }
}
