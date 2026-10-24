volatile int counterA = 0;
volatile int counterB = 0;
int directionA = 0; // Ranges from -5 to 5
int directionB = 0; // Ranges from -5 to 5

//unsigned int pulsesPerRevolution = 600; // Encoder specification
unsigned long previousMillis = 0;
const unsigned long interval = 100; // Update interval in milliseconds (0.1 second)

// Define thresholds for 5 levels
const int threshold1 = 10;  // Minimum pulses for level 1
const int threshold2 = 20; // Minimum pulses for level 2
const int threshold3 = 30; // Minimum pulses for level 2
const int threshold4 = 40; // Minimum pulses for level 2
const int threshold5 = 50; // Minimum pulses for level 2

void setup() {
    Serial.begin(74880); // Start the serial communication at 9600 baud rate
    pinMode(2, INPUT_PULLUP); // Internal pullup input pin 2
    pinMode(3, INPUT_PULLUP); // Internal pullup input pin 3
    pinMode(18, INPUT_PULLUP); // Internal pullup input pin 18
    pinMode(19, INPUT_PULLUP); // Internal pullup input pin 19

    // Setting up interrupts
    attachInterrupt(digitalPinToInterrupt(2), ai0, RISING);
    attachInterrupt(digitalPinToInterrupt(3), ai1, RISING);
    attachInterrupt(digitalPinToInterrupt(18), ai2, RISING);
    attachInterrupt(digitalPinToInterrupt(19), ai3, RISING);
}

void loop() {
    unsigned long currentMillis = millis();
    
    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;

        // Map counterA to levels 
        directionA = mapToLevels(counterA);

        // Map counterB to levels 
        directionB = mapToLevels(counterB);

        // Send the data to the serial port
        String data = String(directionA) + "," + String(directionB);
        Serial.println(data);

        // Reset the counters for the next interval
        counterA = 0;
        counterB = 0;
    }
}

// Function to map encoder count to levels 
int mapToLevels(int count) {
    if (count >= threshold5) {
        return 5; // Forward 5
    }if (count >= threshold4) {
        return 4; // Forward 4
    }if (count >= threshold3) {
        return 3; // Forward 3
    }if (count >= threshold2) {
        return 2; // Forward 2
    } if (count >= threshold1) {
        return 1; // Forward 1
    } else if (count <= -threshold5) {
        return -5; // Backward 5
    } else if (count <= -threshold4) {
        return -4; // Backward 4
    } else if (count <= -threshold3) {
        return -3; // Backward 3
    } else if (count <= -threshold2) {
        return -2; // Backward 2
    } else if (count <= -threshold1) {
        return -1; // Backward 1
    } else {
        return 0; // Stationary
    }
}

void ai0() {
    if (digitalRead(3) == LOW) {
        counterA++;
    } else {
        counterA--;
    }
}

void ai1() {
    if (digitalRead(2) == LOW) {
        counterA--;
    } else {
        counterA++;
    }
}

void ai2() {
    if (digitalRead(19) == LOW) {
        counterB--;
    } else {
        counterB++;
    }
}

void ai3() {
    if (digitalRead(18) == LOW) {
        counterB++;
    } else {
        counterB--;
    }
}