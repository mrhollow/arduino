const int inputPin = 5;
const int ledPin = 13;
int ledValue = LOW;

void
setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(inputPin, INPUT_PULLUP);
}

void
loop()
{
    if (digitalRead(inputPin) == LOW) {
        ledValue = !ledValue;
        digitalWrite(ledPin, ledValue);
    }
}
