#include <SPI.h>
#include <mcp2515.h>
#define CS 53

struct can_frame canMsg;
MCP2515 mcp2515(CS);


void setup() {
  pinMode(4, OUTPUT);

  Serial.begin(115200);
  
  mcp2515.reset();
  mcp2515.setBitrate(CAN_125KBPS, MCP_8MHZ);
  mcp2515.setNormalMode();
  
  Serial.println("------- CAN Read ----------");
  Serial.println("ID  DLC   DATA");
}

void loop() {
  if (mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && anMsg.can_id == 0x0F6) {
    Serial.print("ID: ");
    Serial.println(canMsg.can_id, HEX); // print ID
    Serial.print("DLC: "); 
    Serial.println(canMsg.can_dlc, HEX); // print DLC
    Serial.println("DATA: ");
    
    for (int i = 0; i<canMsg.can_dlc; i++)  {  // print the data
      Serial.print(canMsg.data[i],HEX);
      Serial.print(" ");
    }

    Serial.println(); 

    if(canMsg.data[0] == 1){
      digitalWrite(4, HIGH);
    }else{
      digitalWrite(4, LOW);
    }     
  }
}
