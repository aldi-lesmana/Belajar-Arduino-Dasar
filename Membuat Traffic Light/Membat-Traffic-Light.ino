int Lampu_Merah   = 8;
int Lampu_Kuning  = 9;
int Lampu_Hijau   = 10;

void setup() {
pinMode(Lampu_Merah, OUTPUT);
pinMode(Lampu_Kuning, OUTPUT);
pinMode(Lampu_Hijau, OUTPUT);
}

void loop() {
digitalWrite(Lampu_Merah, HIGH);
digitalWrite(Lampu_Kuning, LOW);
digitalWrite(Lampu_Hijau, LOW);
delay(3000);

digitalWrite(Lampu_Merah, LOW);
digitalWrite(Lampu_Kuning, HIGH);
digitalWrite(Lampu_Hijau, LOW);
delay(1000);

digitalWrite(Lampu_Merah, LOW);
digitalWrite(Lampu_Kuning, LOW);
digitalWrite(Lampu_Hijau, HIGH);
delay(3000);

}
