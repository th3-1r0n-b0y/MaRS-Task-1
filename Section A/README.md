TASK -1
Section A

Question 1
The millis() function returns the time passed since the simulation has started.
The program continuously checks time passed using millis() and toggles each LED respectively according to their interval.

Question 2
The potentiometer value (0–1023) is read and divided into ranges to select different RGB colors. Each range sets the RGB LED to a specific color using analogWrite(). The same potentiometer values also control how long the delay is between the blinking for the LED.

Question 3
The code creates a reaction time game using a button and an LED.After a random delay (1–5 seconds), the LED turns ON to signal the user.
At the start of the program, the time since the simulation started is taken by using the millis() function. And then it wait tills a button press is registered and then again notes down the time form millis(). The difference in both the values is the reaction time. The system then waits for another button press to restart the test.
