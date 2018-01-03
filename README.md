# arduino-multiple-servos-example

Example with three SG90 hobby servo motors, all controlled with one potentiometer.

How the motors should be controlled:

<img src='https://github.com/xtrinch/arduino-multiple-servos-example/blob/master/dutycycle.png'>

Arduino library for controlling servos splits them into channels on the same timer, which is very evident from the following:

<img src='https://github.com/xtrinch/arduino-multiple-servos-example/blob/master/logicdata.png'>
Image from logic analyzer
