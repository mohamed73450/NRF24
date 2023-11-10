#include <RF24.h>
#include <NRF24L01.h>

RF24 radio(PA0, PA1); // CE, CSN

void setup() {
    radio.begin();
    radio.powerUp();
    radio.setAutoAck(false);
    radio.setPALevel(RF24_PA_HIGH);
    radio.setDataRate(RF24_2MBPS);
    radio.stopListening();
    radio.setChannel(80);
}

void loop() {
    byte text = 255; //just some random string
    radio.writeFast(&text, sizeof(text));
}
