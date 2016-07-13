####"Let me in!" is the result of the 6-week physical computing workshop by Fabian Morón Zirfas at the University of Applied Sciences Potsdam.

This DIY-project solves a daily problem at a reasonable price.

**The Problem:**

I have a cat that often goes outside in the garden and when it comes back, the window is often closed. Sometimes this happens when I'm in another room or listening to loud music, so I can't hear it meowing.

**The Solution:**

A device that notifies me when my cat is waiting outside the window.

![Let_me_in](/IMG_9407.JPG)
![Let_me_in](/IMG_9410.JPG)

The hardware consists of a motion sensor that detects if the cat is on the windowsill (INPUT). The sensor sends the values (true or false) to the particleboard where the code runs. The board has a wireless connection in order to send a message to my phone every time that detects movement (OUTPUT).

This is possible through the use of an IFTTT recipe.

 
What is IFTTT?

IFTTT is a free web-based service that allows users to create chains of simple conditional statements, called "recipes", which are triggered based on changes to other web services.

 
How does it work?

I created a recipe that connects the particleboard with my phone.
If the input is false IFTTT will not send me an SMS. If the input is true then a message is sent.



####See the video -----> https://youtu.be/IDC_40A-rBQ


Below you will find some more information about how is it made.


**Hardware:**

![Let_me_in](/IMG_9412.JPG)
![Let_me_in](/circuitPIR_bb.png)
![Let_me_in](/circuitPIR_schem.png)


Motion Sensor http://www.seeedstudio.com/wiki/PIR_Motion_sensor_module ca.10€

Photonboard https://store.particle.io/ 24€

Cable and Breadboard ca.15€ https://www.conrad.de/de/steckplatinen-o2512070.html

Small box 3€

**Software:**

To run the code in the particle board. https://build.particle.io/

IFFT allows you to easily create a conditional statement between the Input and the Output. https://ifttt.com/recipes

Code: https://github.com/lpaubielsa/Let_me_in/blob/master/motionsensorcat.js


Thanks and don't forget your cat outside!
 
 

