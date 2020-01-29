 #define BAUD 115200

 #define MAXLEN 18
 int pins[MAXLEN] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
 #define DELAY 10
 
 void setup() {
   // put your setup code here, to run once:
   for(int i=0;i<MAXLEN;i++) {
     pinMode(pins[i],INPUT_PULLUP);
     digitalRead(pins[i]); // 読み捨て
   }
   Serial.begin(BAUD);
 }
 
 void loop() {
   // put your main code here, to run repeatedly:
   int i;
   for(i=0;i<MAXLEN;i++) {
     int data = digitalRead(pins[i]);
     Serial.print(data+i*3+2);
     Serial.print(",");
   }
     Serial.println("*");
     delay(DELAY);
 }
