# TivaCAN_Library
CAN library for the TI Tiva series of processors.   

API:
  CANClass(uint8_t module, uint32_t baud = 125000);
    Constructor. 
    - module chooses CAN module instance on device (0 or 1)
    - baud sets the CAN module baud rate, defaults to 125kbps

  void begin();
    Initiailize and enable CAN modules.

  void end();
    Deinitialize and disable CAN modules.

  int available();
     Query if CAN messages are available, 
     - returns the number of available messages.  

  int write(const CAN_message_t msg[], size_t count = 1);
     Write one or more CAN messages to the transmit queue.
     - msg reference to one or more CAN messages; 
     - count number of CAN messages to write; 
     - returns the number of CAN messages written.  

  int read(CAN_message_t msg[], size_t count = 1);
    Read one or more CAN messages from the receive queue.
    - msg is reference to one or more CAN messages; 
    - count number of CAN messages to read; 
    - returns the number of CAN messages read. 

  void CANIntHandler();
    CAN interrupt handler, handles internal software rx FIFO.  
