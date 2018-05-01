# Arduino Wakeup Curtain
An automatic curtain that wakes you up in the morning. The curtain opens gradually over the course of 15 minutes, to ensure a gentle wakeup.

![The curtain](https://github.com/nicolaielhoj/Wakeup-Curtain/blob/master/DSC09540LR.png)

# Step 1: Build the circuit

![Schematics](https://raw.githubusercontent.com/erhanalankus/Arduino-Wake-Up-Light/master/schematics_.jpg)

# Step 2: Fit the servo in the laser cut box, and attach servo to curtain

![joint+servo+box](https://github.com/nicolaielhoj/Wakeup-Curtain/blob/master/box%2Bservo.png)

Before uploading the sketch to your Arduino, change the values at line 93 with the current values for the time and date and uncomment the line. Upload the sketch. Comment out line 93 and upload again. You can see time and date on the serial monitor. The time won't be lost unless you remove the battery from the DS3231 RTC module. I may add the option to edit the time later, pull requests are welcome.

# Step 3: Set the remote

Go to line 148, there you will find what happens for which remote button. Those values most likely won't work with the remote that you are using. Watch this video and you'll learn how to setup your remote: https://youtu.be/ftdJ0R_5NZk The remote is optional.

# Step 4: Using the device

There are three buttons. First two buttons set the alarm, the third button toggles alarm on/off. When the alarm is active, brightness of the lights will increase 1 unit every 7 seconds. Maximum brightness value is 255. Current brightness value is displayed on the top right of the LCD screen. It will take 30 minutes to reach full brightness and after the time stated in the alarmDuration variable(3 hours), the lights will turn off. You can change alarm duration at line 49 and the speed at line 145. Pressing any button will deactivate the alarm.


