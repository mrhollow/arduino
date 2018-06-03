const int interruptPin = 2;
const int ledPin = 13;
int period = 500;
bool fast = false;

void goFast();

void
setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(interruptPin, INPUT_PULLUP);
    attachInterrupt(0, goFast, CHANGING);
}

void
loop()
{
    digitalWrite(ledPin, HIGH);
    delay(period);
    digitalWrite(ledPin, LOW);
    delay(period);
}

void
goFast()
{
    if (fast) {
        period = 100;
        fast = false;
    } else {
        period = 500;
        fast = true;
    }
}
