# Stop-watch-using-STM32
INTRODUCTION
-Its a simple stop watch using stm32 bluepill, in which 2, 7 segmwnt display is used to display the time, in pic we can see 1 1, this means 1hr 10 mins, if its shows 1 5, this means 1hr 50 mins is done.To stop the watch just cut the ultra sonic sensor and status led will start blinking, this means counter is paused, to resart again just cut the sensor again, status led will become solid this means counter is counting. To reset the counter just press reset of stm32.  
### Pin configuration 
- Right 7 segment display (Common anode )
   - PA0=A
   - PA1=B
   - PA2=C
   - PA3=D
   - PA4=E
   - PA5=F
   - PA6=G
   - 3.3V to anode
- Left 7 segment display (Common anode )
   - PB0=A
   - PB1=B
   - PB7=C (MY PB2 WAS NOT WORKING IDK WHY,BUT YOU CAN TRY WITH YOURS :) )
   - PB3=D
   - PB4=E
   - PB5=F
   - PB6=G
   -3.3V to anode
- Ultra sonic sensor 
   - Vcc=5v
   - GND =GND
   - Trig=PB8
   - Echo=PB9
-Status led
   - Anode=PA15
   - GND = GND
### Output
   ![pic1](https://user-images.githubusercontent.com/78437677/110235739-ae6a0c80-7f57-11eb-88e8-12a3e388d9bc.jpg)
![pic2](https://user-images.githubusercontent.com/78437677/110235741-b0cc6680-7f57-11eb-855f-61dd0c6f3036.jpg)
![pic3](https://user-images.githubusercontent.com/78437677/110235743-b4f88400-7f57-11eb-93a6-2e8e138f40cd.jpg)
![pic4](https://user-images.githubusercontent.com/78437677/110235744-b88c0b00-7f57-11eb-8a8e-4cf92ed8fa78.jpg)

 
