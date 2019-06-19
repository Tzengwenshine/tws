/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 19 Jun 2019 12:18:07 GMT
 */

#include <LRemote.h>

LRemoteCircleButton circle1;
LRemoteButton button1;

void setup()
{
  LRemote.setName("Tzeng 7697");
  LRemote.setOrientation(RC_LANDSCAPE);
  LRemote.setGrid(7, 5);
    circle1.setPos(0, 2);
    circle1.setSize(1, 1);
    circle1.setText("A");
    circle1.setColor(RC_ORANGE);
    LRemote.addControl(circle1);

    button1.setPos(2, 2);
    button1.setText("◀");
    button1.setSize(1, 1);
    button1.setColor(RC_YELLOW);
    LRemote.addControl(button1);

    button1.setPos(3, 1);
    button1.setText("▲");
    button1.setSize(1, 1);
    button1.setColor(RC_YELLOW);
    LRemote.addControl(button1);

    button1.setPos(3, 3);
    button1.setText("▼");
    button1.setSize(1, 1);
    button1.setColor(RC_YELLOW);
    LRemote.addControl(button1);

    button1.setPos(4, 2);
    button1.setText("▶");
    button1.setSize(1, 1);
    button1.setColor(RC_YELLOW);
    LRemote.addControl(button1);

    circle1.setPos(6, 2);
    circle1.setSize(1, 1);
    circle1.setText("B");
    circle1.setColor(RC_BLUE);
    LRemote.addControl(circle1);
  LRemote.begin();
}


void loop()
{

}
