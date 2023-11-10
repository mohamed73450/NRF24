#include <C:\Users\mohamed.hisham\Desktop\Flipper-Zero-Development-Toolkit\.submodules\RF24 library\RF24-master\RF24.h>
#include <C:\Users\mohamed.hisham\Desktop\Flipper-Zero-Development-Toolkit\.submodules\RF24 library\RF24-master\NRF24L01.h>

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