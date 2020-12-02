/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_gameplay_screen/Screen_gameplayViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen_gameplayViewBase::Screen_gameplayViewBase() :
    buttonCallback(this, &Screen_gameplayViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background_gameplay.setPosition(0, 0, 480, 272);
    background_gameplay.setColor(touchgfx::Color::getColorFrom24BitRGB(199, 199, 199));

    container1.setPosition(53, 55, 375, 200);

    button_00_00.setXY(0, 0);
    button_00_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_00);

    button_00_01.setXY(25, 0);
    button_00_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_01);

    button_00_02.setXY(50, 0);
    button_00_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_02);

    button_00_03.setXY(75, 0);
    button_00_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_03);

    button_00_04.setXY(100, 0);
    button_00_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_04);

    button_00_05.setXY(125, 0);
    button_00_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_05);

    button_00_06.setXY(150, 0);
    button_00_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_06);

    button_00_07.setXY(175, 0);
    button_00_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_07);

    button_00_08.setXY(200, 0);
    button_00_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_08);

    button_00_09.setXY(225, 0);
    button_00_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_09);

    button_00_10.setXY(250, 0);
    button_00_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_10);

    button_00_11.setXY(275, 0);
    button_00_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_11);

    button_00_12.setXY(300, 0);
    button_00_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_12);

    button_00_13.setXY(325, 0);
    button_00_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_13);

    button_00_14.setXY(350, 0);
    button_00_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_00_14);

    button_01_00.setXY(0, 25);
    button_01_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_00);

    button_01_01.setXY(25, 25);
    button_01_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_01);

    button_01_02.setXY(50, 25);
    button_01_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_02);

    button_01_03.setXY(75, 25);
    button_01_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_03);

    button_01_04.setXY(100, 25);
    button_01_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_04);

    button_01_05.setXY(125, 25);
    button_01_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_05);

    button_01_06.setXY(150, 25);
    button_01_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_06);

    button_01_07.setXY(175, 25);
    button_01_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_07);

    button_01_08.setXY(200, 25);
    button_01_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_08);

    button_01_09.setXY(225, 25);
    button_01_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_09);

    button_01_10.setXY(250, 25);
    button_01_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_10);

    button_01_11.setXY(275, 25);
    button_01_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_11);

    button_01_12.setXY(300, 25);
    button_01_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_12);

    button_01_13.setXY(325, 25);
    button_01_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_13);

    button_01_14.setXY(350, 25);
    button_01_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_01_14);

    button_02_00.setXY(0, 50);
    button_02_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_00);

    button_02_01.setXY(25, 50);
    button_02_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_01);

    button_02_02.setXY(50, 50);
    button_02_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_02);

    button_02_03.setXY(75, 50);
    button_02_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_03);

    button_02_04.setXY(100, 50);
    button_02_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_04);

    button_02_05.setXY(125, 50);
    button_02_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_05);

    button_02_06.setXY(150, 50);
    button_02_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_06);

    button_02_07.setXY(175, 50);
    button_02_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_07);

    button_02_08.setXY(200, 50);
    button_02_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_08);

    button_02_09.setXY(225, 50);
    button_02_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_09);

    button_02_10.setXY(250, 50);
    button_02_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_10);

    button_02_11.setXY(275, 50);
    button_02_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_11);

    button_02_12.setXY(300, 50);
    button_02_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_12);

    button_02_13.setXY(325, 50);
    button_02_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_13);

    button_02_14.setXY(350, 50);
    button_02_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_02_14);

    button_03_00.setXY(0, 75);
    button_03_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_00);

    button_03_01.setXY(25, 75);
    button_03_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_01);

    button_03_02.setXY(50, 75);
    button_03_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_02);

    button_03_03.setXY(75, 75);
    button_03_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_03);

    button_03_04.setXY(100, 75);
    button_03_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_04);

    button_03_05.setXY(125, 75);
    button_03_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_05);

    button_03_06.setXY(150, 75);
    button_03_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_06);

    button_03_07.setXY(175, 75);
    button_03_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_07);

    button_03_08.setXY(200, 75);
    button_03_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_08);

    button_03_09.setXY(225, 75);
    button_03_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_09);

    button_03_10.setXY(250, 75);
    button_03_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_10);

    button_03_11.setXY(275, 75);
    button_03_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_11);

    button_03_12.setXY(300, 75);
    button_03_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_12);

    button_03_13.setXY(325, 75);
    button_03_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_13);

    button_03_14.setXY(350, 75);
    button_03_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_03_14);

    button_04_00.setXY(0, 100);
    button_04_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_00);

    button_04_01.setXY(25, 100);
    button_04_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_01);

    button_04_02.setXY(50, 100);
    button_04_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_02);

    button_04_03.setXY(75, 100);
    button_04_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_03);

    button_04_04.setXY(100, 100);
    button_04_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_04);

    button_04_05.setXY(125, 100);
    button_04_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_05);

    button_04_06.setXY(150, 100);
    button_04_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_06);

    button_04_07.setXY(175, 100);
    button_04_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_07);

    button_04_08.setXY(200, 100);
    button_04_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_08);

    button_04_09.setXY(225, 100);
    button_04_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_09);

    button_04_10.setXY(250, 100);
    button_04_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_10);

    button_04_11.setXY(275, 100);
    button_04_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_11);

    button_04_12.setXY(300, 100);
    button_04_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_12);

    button_04_13.setXY(325, 100);
    button_04_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_13);

    button_04_14.setXY(350, 100);
    button_04_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_04_14);

    button_05_00.setXY(0, 125);
    button_05_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_00);

    button_05_01.setXY(25, 125);
    button_05_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_01);

    button_05_02.setXY(50, 125);
    button_05_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_02);

    button_05_03.setXY(75, 125);
    button_05_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_03);

    button_05_04.setXY(100, 125);
    button_05_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_04);

    button_05_05.setXY(125, 125);
    button_05_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_05);

    button_05_06.setXY(150, 125);
    button_05_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_06);

    button_05_07.setXY(175, 125);
    button_05_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_07);

    button_05_08.setXY(200, 125);
    button_05_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_08);

    button_05_09.setXY(225, 125);
    button_05_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_09);

    button_05_10.setXY(250, 125);
    button_05_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_10);

    button_05_11.setXY(275, 125);
    button_05_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_11);

    button_05_12.setXY(300, 125);
    button_05_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_12);

    button_05_13.setXY(325, 125);
    button_05_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_13);

    button_05_14.setXY(350, 125);
    button_05_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_05_14);

    button_06_00.setXY(0, 150);
    button_06_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_00);

    button_06_01.setXY(25, 150);
    button_06_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_01);

    button_06_02.setXY(50, 150);
    button_06_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_02);

    button_06_03.setXY(75, 150);
    button_06_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_03);

    button_06_04.setXY(100, 150);
    button_06_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_04);

    button_06_05.setXY(125, 150);
    button_06_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_05);

    button_06_06.setXY(150, 150);
    button_06_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_06);

    button_06_07.setXY(175, 150);
    button_06_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_07);

    button_06_08.setXY(200, 150);
    button_06_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_08);

    button_06_09.setXY(225, 150);
    button_06_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_09);

    button_06_10.setXY(250, 150);
    button_06_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_10);

    button_06_11.setXY(275, 150);
    button_06_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_11);

    button_06_12.setXY(300, 150);
    button_06_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_12);

    button_06_13.setXY(325, 150);
    button_06_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_13);

    button_06_14.setXY(350, 150);
    button_06_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_06_14);

    button_07_00.setXY(0, 175);
    button_07_00.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_00);

    button_07_01.setXY(25, 175);
    button_07_01.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_01);

    button_07_02.setXY(50, 175);
    button_07_02.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_02);

    button_07_03.setXY(75, 175);
    button_07_03.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_03);

    button_07_04.setXY(100, 175);
    button_07_04.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_04);

    button_07_05.setXY(125, 175);
    button_07_05.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_05);

    button_07_06.setXY(150, 175);
    button_07_06.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_06);

    button_07_07.setXY(175, 175);
    button_07_07.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_07);

    button_07_08.setXY(200, 175);
    button_07_08.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_08);

    button_07_09.setXY(225, 175);
    button_07_09.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_09);

    button_07_10.setXY(250, 175);
    button_07_10.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_10);

    button_07_11.setXY(275, 175);
    button_07_11.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_11);

    button_07_12.setXY(300, 175);
    button_07_12.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_12);

    button_07_13.setXY(325, 175);
    button_07_13.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_13);

    button_07_14.setXY(350, 175);
    button_07_14.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_UNCLICKED_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    container1.add(button_07_14);

    background_timer.setPosition(405, 5, 70, 25);
    background_timer.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    background_timer.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(163, 163, 163));
    background_timer.setBorderSize(1);

    background_mine_num.setPosition(5, 5, 60, 25);
    background_mine_num.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    background_mine_num.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(163, 163, 163));
    background_mine_num.setBorderSize(1);

    text_mime_num.setPosition(18, 5, 35, 25);
    text_mime_num.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    text_mime_num.setLinespacing(0);
    Unicode::snprintf(text_mime_numBuffer, TEXT_MIME_NUM_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID19).getText());
    text_mime_num.setWildcard(text_mime_numBuffer);
    text_mime_num.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    digitalClock.setPosition(405, 5, 70, 25);
    digitalClock.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    digitalClock.setTypedText(touchgfx::TypedText(T_SINGLEUSEID20));
    digitalClock.displayLeadingZeroForHourIndicator(true);
    digitalClock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock.setTime24Hour(0, 0, 0);

    button_leave.setXY(0, 247);
    button_leave.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_11_ID), touchgfx::Bitmap(BITMAP_BTN_BLANK_ID));
    button_leave.setAction(buttonCallback);

    add(__background);
    add(background_gameplay);
    add(container1);
    add(background_timer);
    add(background_mine_num);
    add(text_mime_num);
    add(digitalClock);
    add(button_leave);
}

void Screen_gameplayViewBase::setupScreen()
{

}

void Screen_gameplayViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button_leave)
    {
        //Interaction_button_leave
        //When button_leave clicked change screen to Screen_default
        //Go to Screen_default with screen transition towards West
        application().gotoScreen_defaultScreenSlideTransitionWest();
    }
}
