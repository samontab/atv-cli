#include <lircprotocol.h>

bool stopRepeatingFlag = false;
unsigned int index1 = 0;//id

int main(int argc, char* argv[])
{
  LIRCProtocol *lp = new LIRCProtocol(
    index1,
    560, 560,
    560, 1680,
    110000, true);

  lp->setHeaderPair(9000, 4500);
  lp->setTrailerPulse(560);
  lp->setRepeatPair(9000, 2250);

  lp->setPreData(0x77e1, 16);
  lp->setPostData(0xc5, 8);

  lp->addKey(Menu_Key, 0x40, 8);
  lp->addKey(Up_Key, 0xD0, 8);
  lp->addKey(Down_Key, 0xB0, 8);
  lp->addKey(Left_Key, 0x10, 8);
  lp->addKey(Right_Key, 0xE0, 8);
  lp->addKey(Select_Key, 0x20, 8);


  std::string button = "";
  if(argc > 1)
    button = std::string(argv[1]);

  if(button == "up")
    lp->startSendingCommand(index1, Up_Key);
  else if(button == "down")
    lp->startSendingCommand(index1, Down_Key);
  else if(button == "left")
    lp->startSendingCommand(index1, Left_Key);
  else if(button == "right")
    lp->startSendingCommand(index1, Right_Key);
  else if(button == "menu")
    lp->startSendingCommand(index1, Menu_Key);
  else if(button == "select")
    lp->startSendingCommand(index1, Select_Key);
  else
  {
    std::cout << "Usage: " << argv[0] << " [button]" << std::endl;
    std::cout << "[button]: up, down, left, right, menu, select" << std::endl;
    return 0;
  }

  return 0;
}
