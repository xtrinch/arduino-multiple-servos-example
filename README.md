# arduino-multiple-servos-example

Example with three SG90 hobby servo motors, all controlled with one potentiometer. PWM outputs to motors connected to pin 3, 5, 6.

How the motors should be controlled:

<img src='https://github.com/xtrinch/arduino-multiple-servos-example/blob/master/dutycycle.png'>

Arduino library for controlling servos splits them into channels on the same timer, which is very evident from the following:

<img src='https://github.com/xtrinch/arduino-multiple-servos-example/blob/master/logicdata.png'>
Image from logic analyzer
