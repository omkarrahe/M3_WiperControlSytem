# Introduction
Wiper is an essential component that is used to wipe raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots. The wiper itself has about six parts called pressure points or claws that are small arms under the wiper

The existing system uses a control stalk to activate the wiper and the process of pulling up the wiper is difficult.r needs to switch on and off the control stalk and it will reduce the driver’s concentration during the driving. Thus, this system is proposed to solve all these problems. The concept of this wiper system is similar to other conventional wipers, yet this system will be upgraded to an automatic control system by using a controller.When water hits a dedicated sensor located on the windscreen, it triggers the wiper motor to move. is not detected by sensor, the wiper will automatically stop. This will help the driver to give more concentration and reduce the car accident probability.

In this project, there were two innovations reviewed as the literature review. The two were designed with different concepts and operating mechanism however with same objective of working principle of the car wiper. The rain sensor was a highly versatile device for automatic wiping of vehicle windscreen when it is wet due to moisture, raindrops or even mud. It worked by reflecting harmonious light beams within the windscreen. When raindrops fall onto the windscreen, this harmony light is disturbed and creating a drop in the light beam intensity. The system then activated the wipers to be operated in full automatic mode. It has a response time of 0.1 seconds. It allowed for a quick reaction when it is a sudden splashes of water that will make the driver totally ‘blinds’ when the situation happened. With the automatic wiper, the driver can avert the risk of an accident. The automatic wiper is important during heavy traffic, e.g. in town, city, school zone and other public places. A driver may be subjected to many distractions with bad weather, dangerous road conditions and fatigue. The Rain Sensor reduced the driver’s burden by making driving more comfortable. Trailing a wet car is no longer a nuisance as detection of even 0.005 milliliters of water is possible.
# Component and Supplies
###### STM32F407 Discovery Board \n
###### Push Button
###### LEDs
###### Resistors
###### Power Supply

# Advantages

###### It is quite simple to use.
###### Less energy is consumed.
###### Simple to install.

# Disadvantages

######  Driver Attention is required

# 4W & H (WHO,WHAT,WHEN,WHERE,HOW)
# WHAT
The operational speed of a vehicle wiper is controlled by a wiper speed control mechanism based on rain conditions.
# WHY
To keep the windscreen clean enough to give adequate view at all times.
# WHEN
The windshield wipers remove rain and snow from the windshield, while the headlights improve visibility at night.
# WHO
A wiper speed control system for an automobile manages the wiper's functioning speed in response to weather conditions.
# HOW
You can adjust the speed of the car wiper system according to the rainfall
# Where
In general, car wipers are controlled by the stalk on the right side of the steering wheel.
# HIGH LEVEL REQUIREMENTS
![13may](https://user-images.githubusercontent.com/101009668/168475616-a0502fd4-0d28-4aba-92c0-59fa540d3293.png)
# LOW LEVEL REQUIREMENTS
![13may2](https://user-images.githubusercontent.com/101009668/168475756-aa1df655-254d-49a8-8657-199ce0d8fb05.png)
# SWOT ANALYSIS
## STRENGTH
###### Low Budget
###### Good Reputation
###### High Bargaining Power Supliers
###### Big Influence on the Market
# WEAKNESS
###### Structural Inertia
###### High Transaction Cost

###### Week Focus on Process Innovations
# OPPRONUTIES
###### Emerging New Markets
###### Technological Development
###### Demand for Saver Equipments
# THREATS
###### Highly REgulated Industry
###### Ethical Pressure
###### Econimical Crisis

# Exploring STM32F407 Discovery Board
![899](https://user-images.githubusercontent.com/101009668/168473628-f64ac463-7e94-488f-8313-9b8e89b194a1.png)
###### This project gives almost all the basic information needed to get started with STM32F407 Discovery Board and also development of driver code.

###### Hardware Used : STM32F4 DISCOVERY kit, for more information visit: STM32F4 DISCOVERY
###### Software Tool : STM32cubeIDE, for more information visit: STM32CubeIDE
###### For installation of STM32CubeIDE refer Youtube
###### Note : As this microcontroller has many advanced features and the main aim of this project is to get all basic insights, during the driver development only the required functionalities are added and other advanced functionality is not added. I may update the driver and other functionality in the future.
###### Please find the STM32F4 Discovery User Manual,STM32F4xxx Reference Manual (RM0090) and other related documents inside a folder called Documents. I will be referring to these documents for information such as block diagrams, register details ect.

 # Overview of STM32F407VGT6 Microcontroller
 ![stm32f40x_block_diagram](https://user-images.githubusercontent.com/101009668/168476204-ccba3a39-bcf6-481f-89a4-453aafdad227.png)

###### The STM32F407 Discovery board uses STM32F407VGT6 Microcontroller which has ARM Cortex-M4F Processor, which is capable of running upto 168Mhz. This MCU has many peripherals such as GPIO ports, TIMERS, ADCs, DACs, Flash Memory, SRAM, SPI, UART ect. The processor and peripherals talk via BUS-Interface. There are three busses available

###### I-BUS (Instruction Bus) D-BUS (Data Bus) S-BUS (System Bus) I-BUS This bus connects the Instruction bus of the Cortex®-M4 with FPU(Floating point unit) core to the BusMatrix. This bus is used by the core to fetch instructions. The target of this bus is a memory containing code (internal Flash memory/SRAM or external memories through the FSMC/FMC).

###### D-BUS This bus connects the databus of the Cortex®-M4 with FPU to the 64-Kbyte CCM data RAM to the BusMatrix. This bus is used by the core for literal load and debug access. The target of this bus is a memory containing code or data (internal Flash memory or external memories through the FSMC/FMC).

###### S-BUS This bus connects the system bus of the Cortex®-M4 with FPU core to a BusMatrix. This bus is used to access data located in a peripheral or in SRAM. Instructions may also be fetched on this bus (less efficient than ICode). The targets of this bus are the internal SRAM1, SRAM2 and SRAM3, the AHB1 peripherals including the APB peripherals, the AHB2 peripherals and the external memories through the FSMC/FMC.

###### So instructions and data use I-bus and D-bus respectively, All the other peripheral uses System bus. The Cortex-M4 processor contains three external Advanced High-performance Bus (AHB)-Lite bus interface and one Advanced Peripheral Bus (APB) interface. The GPIOs are connected to AHB1 bus which has a maximum speed of 150Mhz and is divided into two buses as APB1 and APB2. APB1 runs at 42Mhz(max) and APB2 runs at 82Mhz(max). The different peripherals such as SPI, UART, TIMERs, ADCs, DACs, etc are connected to either APB1/APB2 buses. And the AHB2(168Mhz max) is connected to Camera and USB OTG interfaces, AHB3 is connected to External memory controller.
# OUTPUT IMAGES
# When We not start our Wiper System
![899](https://user-images.githubusercontent.com/101009668/168473628-f64ac463-7e94-488f-8313-9b8e89b194a1.png)
# When we have pressed push button for 2 second
![898](https://user-images.githubusercontent.com/101009668/168473645-f9396ebb-7cdf-486c-bff2-f913250caaf9.png)
# When we have pressed one more time
## All colour LED Start Blinking at the rate of 1Hz
![897](https://user-images.githubusercontent.com/101009668/168473676-276b2012-2f7d-4fff-a441-b283f1c433db.png)
# When we have pressed one more time
## All colour LED Start Blinking at the rate of
# 4Hz
![897](https://user-images.githubusercontent.com/101009668/168473676-276b2012-2f7d-4fff-a441-b283f1c433db.png)

# When we have pressed one more time
## All colour LED Start Blinking at the rate of 
# 8Hz
![897](https://user-images.githubusercontent.com/101009668/168473676-276b2012-2f7d-4fff-a441-b283f1c433db.png)
# When we have pressed push button for 2 second
## RED LED STOP BLINKING
![899](https://user-images.githubusercontent.com/101009668/168473628-f64ac463-7e94-488f-8313-9b8e89b194a1.png)


