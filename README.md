# Arduino Wakeup Curtain
An automatic curtain that wakes you up in the morning. The curtain opens gradually over the course of 15 minutes, to ensure a gentle wakeup. The curtain rolls for a set amount of seconds every minute and then pauses, this is repeated 15 times, once a minute.

![The curtain](https://github.com/nicolaielhoj/Wakeup-Curtain/blob/master/DSC09540LR.png)

# Step 1: Build the circuit

![Schematics](https://raw.githubusercontent.com/erhanalankus/Arduino-Wake-Up-Light/master/schematics_.jpg)

# Step 2: Fit the servo in the laser cut box, and attach servo to curtain

- Laser cut the box and assemble it 
- Fit the servo in it with the moving arm sticking out of the box. 
- Screw the 3d printed joint to the servo, and fit the joint inside the cylinder that the curtain rolls around.
- Mount the curtain to the wall

![joint+servo+box](https://github.com/nicolaielhoj/Wakeup-Curtain/blob/master/box%2Bservo.png)

# Step 3: Upload code

Go to line 27, and set the how many second the curtain should roll up every minute, depending on how tall the window is. 

# Step 4: Using the device

Connect the board via USB adapter to the timer that is connected to an electrical outlet. You can now set the start time on the timer to 15 minutes before you want to be out of bed. When the time is up, the curtain gradually starts to roll up, and are all the way up after 15 minutes, letting in natural light from the outside

![timer setup](https://github.com/nicolaielhoj/Wakeup-Curtain/blob/master/timer.jpg)


