#define nt_A4 440
#define nt_Bb4 466
#define nt_C5 523
#define nt_D5 587
#define nt_Eb5 622
#define nt_E5 659
#define nt_F5 698
#define nt_G5 784
#define nt_A5 880
#define nt_Bb5 932
int notes[] = {nt_A4, nt_Bb4, nt_C5, nt_D5, nt_Eb5, nt_E5, nt_F5, nt_G5, nt_A5, nt_Bb5};
void setup() {
    for(int i = 2; i<12; i++) {
        pinMode(i,INPUT_PULLUP);
    }
    pinMode(13,OUTPUT);
    digitalWrite(13,1);
}

void loop() {
    noTone(12);
    for(int i = 0; i<10;i++) {
        while (!digitalRead(i+2)) {
            tone(12,notes[i]);
        }
    }
}