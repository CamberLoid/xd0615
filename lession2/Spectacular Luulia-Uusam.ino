void setup() {
    // put your setup code here, to run once:
    for(int i=0; i<8;i++)
        pinMode(i, OUTPUT);
}
void loop() {
    // put your main code here, to run repeatedly:
    for(int i=0; i<2; i++){
        for(int j=0;j<8;j+=2)
            digitalWrite(i+j, HIGH);
        delay(500);
        for(int j=0;j<8;j+=2)
            digitalWrite(i+j, LOW);
        delay(500);
    }
}