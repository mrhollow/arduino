int i = 0;
int delayT = 100;
void
setup()
{
}

void
loop()
{
    switch(i)
    {
        case 0:
            ++i;
            tone(4, 500);
            break;
        case 1:
            ++i;
            tone(4, 400);
            break;
        case 2:
            ++i;
            tone(4, 500);
            break;
        case 3:
            ++i;
            tone(4, 600);
            break;
        case 4:
            ++i;
            tone(4, 700);
            break;
        case 5:
            ++i;
            tone(4, 800);
            break;
        case 6:
            ++i;
            tone(4, 900);
            break;
        case 7:
            i = 0;
            tone(4, 100, 50);
            break;
        default:
            break;
    }
    delay(delayT);
}
