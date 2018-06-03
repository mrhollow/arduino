#include <avr/eeprom.h>


void
setup()
{
    Serial.begin(9600);
    //int i1 = 123;
    int i2 = 0;
    //eeprom_write_block(&i1, 0, sizeof(int));
    eeprom_read_block(&i2, 0, sizeof(int));
    Serial.println(i2);
}

void
loop()
{
}
