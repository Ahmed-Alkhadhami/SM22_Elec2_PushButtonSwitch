# Programmed Circuit :

<img src="https://user-images.githubusercontent.com/107868473/181055277-cda14dbe-c895-45e0-b35a-bda8054a3d4f.png" width=35% height=35%>

This is a example of a circuit that can be controlled on/off using only one push Button.  
the used components are basic , so the major work is in the code.

<br />


## Component List :
* Arduino UNO
* 2 Resistor (1 kΩ)
* push Button
* LED  

<br />


## Circuit Diagram
![image](https://user-images.githubusercontent.com/107868473/180777943-7801a025-976f-4226-bdb3-5d80d0e5ab58.png)


<br />


## More Information
Push Button diagram  
![Push-button-Pinout](https://user-images.githubusercontent.com/107868473/180780878-b579ffa5-b229-417e-9d24-66cdb6199e6d.gif)


<br />


## Idea of the code :
the main idea is that The code :
* will save a Boolean state (false=low) at a variable called **lightToggle** and send it to the LED , which will indicate the state of the LED initially (will change with every press).
* will compare between the previous state of the button , and the instant state.

if the they were the same , then the button is not pressed . Otherwise , the two states will vary resulting for the **lightToggle** to change to the opposite state (whether it was ON or OFF)






<b>
  
## Online Simulation link (testing) :
[**Wokwi**](https://wokwi.com/projects/338154709936243283)  
 

https://user-images.githubusercontent.com/107868473/181051676-99168938-6fec-453b-b254-3e8ae78ac946.mp4


  
