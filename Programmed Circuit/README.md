# Programmed Circuit :

This is a example of a curcuit that can be controlled on/off using only one push Button.  
the used components are basic , so the major work is in the code.

## Component List :
* Arduino UNO
* 2 Resistor (1 kΩ)
* push Button
* LED

## Circuit Diagram
![image](https://user-images.githubusercontent.com/107868473/180777943-7801a025-976f-4226-bdb3-5d80d0e5ab58.png)

## More Infomation


## Idea of the code :
the main idea is that The code :
* will save a boolean arbiturary state (false=low) at a variable called **lightToggle** and send it to the LED , which will indicate the state of the LED initialy.
* will caompare between the previous state of the button , and the instant state.
<b>
if the they were the same , then the button is not pressed . Otherwise , the two states weill vary resulting for the **lightToggle** to change to the opposite state (wheather it was ON or OFF)





<b>
  
## Online Simulation link (testing) :
Wokwi : https://wokwi.com/projects/338154709936243283
