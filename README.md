Arduino Text Writing Sketch
============================
An arduino sketch that sends a looping message to a MAX7219 LED Matrix display module. Because of the high speed at which the message prints to the matrix, it can be used as a tool for long exposure photography.


##Setting Up the Arduino and MAX7219 Matrix

###Components you'll need:
  * Arduino Uno board
  * 5 jumper wires (female/male)
  * MAX7219 Red Dot Matrix Display Module
  * Arduino USB cable

![Alt text](https://cloud.githubusercontent.com/assets/6833837/5483412/634e4080-863f-11e4-860d-e28800a4d49c.jpg)


###Connecting the Components

1. LED matrix connections to arduino:
  * VCC to 5V
  * GND to GND
  * DIN to Digital 2
  * CS to Digital 4
  * CLK to Digital 3

2. Connect the USB cable from the arduino to your computer.

![Alt text](https://cloud.githubusercontent.com/assets/6833837/5483413/6be773ec-863f-11e4-8484-44e0983e2c5b.jpg)


###Setting up the Arduino Sketch

1. Download the Arduino software if you have not already: http://arduino.cc/en/Main/Software

2. Download and uncompress a ZIP file of this repo.

3. Look for the **libraries** folder inside the folder where you installed the Arduino software. Make sure you close all the open windows of Arduino IDE when you do this.

4. Copy the uncompressed repo folder, delete the README.md file within, and place it inside the libraries folder.

5. Open the Arduino software again. Go to **File > Examples > Arduino_LED_matrix_sketch**

6. Under the **Tools** menu make sure the correct Board and Serial Port are selected.

7. Verify and upload the sketch to your arduino to see the text print to your LED Matrix!

8. Experiment with long exposure photography by moving the matrix to write messages in your photos.
