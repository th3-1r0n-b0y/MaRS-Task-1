The project is a password based door lock system using a servo motor and a keypad. If the user enters the correct password, the servo rotates(Unlocking). The lock can be reset by typing 1. If the wrong password is typed, The buzzer goes off for a second indicating that the password is incorrect. If the wrong password is typed 3 times then project has a buffer time of 10 seconds during which the user can't attempt again. This project was chosen to demonstrate a potential way to lock your door for security. And also because I forget my keys inside the room all the time.


Components used & roles:

Keypad (4x4): Used to enter the password.
Servo motor: Acts as the lock.
Buzzer : Indicates wrong password.
Arduino: Controls the entire system and processes logic.


Challenges faced & solutions :

i) The keypad.getKey() took '\0' and printed it too many times as the code is looping. Fixed by checking whether a character was entered.
ii) There was no way to clear the character entered by mistake. Thsi is important as there are only 3 attempts before the 10s buffer. Therefore, if the character '*' the whole password was cleared.
