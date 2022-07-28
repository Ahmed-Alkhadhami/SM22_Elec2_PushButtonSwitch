# Electric Task 2 : Designing an on/off Push Button

<img src="https://user-images.githubusercontent.com/107868473/181055277-cda14dbe-c895-45e0-b35a-bda8054a3d4f.png" width=35% height=35%>

We can accomplish designing a push button switch that controls the on/off state in many ways, using an Arduino to control the process is the most practical and easy to use method. which is depending on using entirely a simple equipment, and the backbone is programming/coding.

<br/>

## Component List :
* Arduino UNO
* 2 Resistor (1 kΩ)
* Push Button
* LED  

<br/>
<br/>

## Circuit Diagram
![image](https://user-images.githubusercontent.com/107868473/180777943-7801a025-976f-4226-bdb3-5d80d0e5ab58.png)


<br/>
<br/>


## Idea Of The Code :
### General :
The main idea is that The code :
* Will save a Boolean state (false=low) at a variable called **lightToggle** and send it to the LED , which will indicates the state of the LED initially (will change with every press).
* Will compare between the previous state of the button , and the instant state, if they were the same , then the button is not pressed . Otherwise , the two states will vary resulting for the **lightToggle** to change to the opposite state (whether it was ON or OFF).  

<br/>

### Explaining The Code :
1 - Pins  
Connecting the LED to pin 12 & Push button to pin 4.
```bash
int ledPin = 12;
int butPin = 4;
```

2 - Variables  
Giving the Boolean "false = zero = low" values to 3 variables as default (can be either FALSE or TRUE, will have the same results).  
- **button_state** : is the present status of the button , which is TRUE only when it's pressed  
- **last_button_state** : is the last known status of the button.  
- **lightToggle** : the variable that indicates the status of the LED.

```bash
bool button_state = false;
bool last_button_state = false;

bool lightToggle = false;
```


3 - Initializing  
- Initializing status of each used pins whether it's IN or OUT.  
- Starting the serial communication to see the input value changes on the screen.

```bash
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butPin, INPUT);
  
  Serial.begin(9600);
}
```


4 - Main Code / Loop
- Assigning the last known value of the button , to the variable **last_button_state** , so it stays updated all the time.  
- Updating the value of the variable **button_state** by reading the PushButton signal (an input value from pin 4) and assigning it .  
- Comparing between between the two variables **button_state** &  **last_button_state** and deciding what to do depending on the output. the results can be either of two situations:  
a. They have the same value : don't do/change anything.  
b. They have different values : change the status of the LED (**lightToggle**) , so if the LED was ON , this will make it goes OFF and vice versa.  
- sending/assigning the **lightToggle** value to the LED .  

```bash
void loop()
{
  last_button_state = button_state;
  button_state = digitalRead(butPin);
 Serial.println(button_state, last_button_state);
  
  if (button_state && !last_button_state){ //Button just button_state
    lightToggle = !lightToggle;
  } 
  
  digitalWrite(ledPin, lightToggle);
}
```


<br/>
<br/>

## More Information
Push Button diagram  
![Push-button-Pinout](https://user-images.githubusercontent.com/107868473/180780878-b579ffa5-b229-417e-9d24-66cdb6199e6d.gif)

<br/>
<br/>

## Online Simulation link (testing) :
[**Wokwi**](https://wokwi.com/projects/338154709936243283)  
 

https://user-images.githubusercontent.com/107868473/181051676-99168938-6fec-453b-b254-3e8ae78ac946.mp4


  
<br/>
<br/>
<br/>
<br/>






---
This is the submission for week 2 tasks of the Electric path at Smart Method training of 2022.
