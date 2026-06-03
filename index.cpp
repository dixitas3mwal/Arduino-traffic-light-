const int redLight = 8;
const int yellowLight = 9;
const int greenLight = 10;

void setup()
{
    pinMode(redLight, OUTPUT);
    pinMode(yellowLight, OUTPUT);
    pinMode(greenLight, OUTPUT);
}

void loop()
{
    // GREEN ON
    digitalWrite(greenLight, HIGH);
    digitalWrite(yellowLight, LOW);
    digitalWrite(redLight, LOW);

    delay(5000);

    // YELLOW ON
    digitalWrite(greenLight, LOW);
    digitalWrite(yellowLight, HIGH);
    digitalWrite(redLight, LOW);

    delay(2000);

    // RED ON
    digitalWrite(greenLight, LOW);
    digitalWrite(yellowLight, LOW);
    digitalWrite(redLight, HIGH);

    delay(5000);
}
