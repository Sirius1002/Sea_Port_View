#include <iostream>
#include <gl/glut.h>
#include <windows.h>
#include<mmsystem.h>
#include <math.h>
#include<cstring>
using namespace std;

float move_ship_container = 0.0f;
float move_airplane = 0.0f;
float move_left_car = 0.0f;
float move_left_car_1 = 0.0f;
float move_right_car = 0.0f;
float move_right_car_1 = 0.0f;
float move_cloud = 0.0f;
float move_cloud1 = 0.0f;
float move_rain = 0.0f;
float move_wave = 0.0f;
float move_boat = 0.0f;
float move_boat_1 = 0.0f;
float move_speed_boat = 0.0f;
float angle_1 = 0.0f;
float angle_2 = 0.0f;
float right_angle_1 = 0.0f;
float right_angle_2 = 0.0f;


//DAY START
void water()
{
    //water
    glColor3ub(0, 191, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, -200.0f);
    glVertex2f(200.0f, -200.0f);
    glVertex2f(200.0f, -35.0f);
    glVertex2f(0.0f, -35.0f);
    glEnd();

    //beach
    glColor3ub(245, 222, 179); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, -35.0f);
    glVertex2f(200.0f, -35.0f);
    glVertex2f(200.0f, 25.0f);
    glVertex2f(0.0f, 25.0f);
    glEnd();
}

void beach_bench()
{
    //Bench_1
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(15.0f, 6.0f);
    glVertex2f(20.0f, 6.0f);
    glVertex2f(20.0f, 20.0f);
    glVertex2f(15.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(15.0f, 6.0f);
    glVertex2f(13.0f, -8.0f);
    glVertex2f(18.0f, -8.0f);
    glVertex2f(20.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(14.0f, -8.0f);
    glVertex2f(14.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(17.5f, -8.0f);
    glVertex2f(17.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(19.5f, 6.0f);
    glVertex2f(19.5f, -2.0f);
    glEnd();

    //Bench_2
      //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 6.0f);
    glVertex2f(30.0f, 6.0f);
    glVertex2f(30.0f, 20.0f);
    glVertex2f(25.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 6.0f);
    glVertex2f(23.0f, -8.0f);
    glVertex2f(28.0f, -8.0f);
    glVertex2f(30.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(24.0f, -8.0f);
    glVertex2f(24.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(27.5f, -8.0f);
    glVertex2f(27.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(29.5f, 6.0f);
    glVertex2f(29.5f, -2.0f);
    glEnd();

    //Bench_3
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(65.0f, 6.0f);
    glVertex2f(70.0f, 6.0f);
    glVertex2f(70.0f, 20.0f);
    glVertex2f(65.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(65.0f, 6.0f);
    glVertex2f(63.0f, -8.0f);
    glVertex2f(68.0f, -8.0f);
    glVertex2f(70.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(64.0f, -8.0f);
    glVertex2f(64.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(67.5f, -8.0f);
    glVertex2f(67.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(69.5f, 6.0f);
    glVertex2f(69.5f, -2.0f);
    glEnd();

    //Bench_4
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(75.0f, 6.0f);
    glVertex2f(80.0f, 6.0f);
    glVertex2f(80.0f, 20.0f);
    glVertex2f(75.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(75.0f, 6.0f);
    glVertex2f(73.0f, -8.0f);
    glVertex2f(78.0f, -8.0f);
    glVertex2f(80.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, -8.0f);
    glVertex2f(74.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.5f, -8.0f);
    glVertex2f(77.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(79.5f, 6.0f);
    glVertex2f(79.5f, -2.0f);
    glEnd();

    //Bench_5
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 6.0f);
    glVertex2f(120.0f, 6.0f);
    glVertex2f(120.0f, 20.0f);
    glVertex2f(115.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 6.0f);
    glVertex2f(113.0f, -8.0f);
    glVertex2f(118.0f, -8.0f);
    glVertex2f(120.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(114.0f, -8.0f);
    glVertex2f(114.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(117.5f, -8.0f);
    glVertex2f(117.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(119.5f, 6.0f);
    glVertex2f(119.5f, -2.0f);
    glEnd();

    //Bench_6
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 6.0f);
    glVertex2f(130.0f, 6.0f);
    glVertex2f(130.0f, 20.0f);
    glVertex2f(125.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 6.0f);
    glVertex2f(123.0f, -8.0f);
    glVertex2f(128.0f, -8.0f);
    glVertex2f(130.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(124.0f, -8.0f);
    glVertex2f(124.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(127.5f, -8.0f);
    glVertex2f(127.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(129.5f, 6.0f);
    glVertex2f(129.5f, -2.0f);
    glEnd();

    //Bench_7
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(165.0f, 6.0f);
    glVertex2f(170.0f, 6.0f);
    glVertex2f(170.0f, 20.0f);
    glVertex2f(165.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(165.0f, 6.0f);
    glVertex2f(163.0f, -8.0f);
    glVertex2f(168.0f, -8.0f);
    glVertex2f(170.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(164.0f, -8.0f);
    glVertex2f(164.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(167.5f, -8.0f);
    glVertex2f(167.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(169.5f, 6.0f);
    glVertex2f(169.5f, -2.0f);
    glEnd();

    //Bench_8
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(175.0f, 6.0f);
    glVertex2f(180.0f, 6.0f);
    glVertex2f(180.0f, 20.0f);
    glVertex2f(175.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(175.0f, 6.0f);
    glVertex2f(173.0f, -8.0f);
    glVertex2f(178.0f, -8.0f);
    glVertex2f(180.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(174.0f, -8.0f);
    glVertex2f(174.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(177.5f, -8.0f);
    glVertex2f(177.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(179.5f, 6.0f);
    glVertex2f(179.5f, -2.0f);
    glEnd();
}

void umbrella()
{
    //from left first umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(22.0f, -15.0f);
    glVertex2f(22.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(12.0f, 26.0f);
    glVertex2f(22.0f, 35.0f);
    glVertex2f(22.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(32.0f, 26.0f);
    glVertex2f(22.0f, 35.0f);
    glVertex2f(22.0f, 50.0f);
    glEnd();

    //from left second umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(72.0f, -15.0f);
    glVertex2f(72.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, 26.0f);
    glVertex2f(72.0f, 35.0f);
    glVertex2f(72.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(82.0f, 26.0f);
    glVertex2f(72.0f, 35.0f);
    glVertex2f(72.0f, 50.0f);
    glEnd();

    //from left third umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(122.0f, -15.0f);
    glVertex2f(122.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(112.0f, 26.0f);
    glVertex2f(122.0f, 35.0f);
    glVertex2f(122.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(132.0f, 26.0f);
    glVertex2f(122.0f, 35.0f);
    glVertex2f(122.0f, 50.0f);
    glEnd();

    //from left fourth umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(172.0f, -15.0f);
    glVertex2f(172.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(162.0f, 26.0f);
    glVertex2f(172.0f, 35.0f);
    glVertex2f(172.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(182.0f, 26.0f);
    glVertex2f(172.0f, 35.0f);
    glVertex2f(172.0f, 50.0f);
    glEnd();
}

void wave()
{
    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, move_wave, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-200.0f, -195.0f);
    glVertex2f(300.0f, -195.0f);
    glVertex2f(20.0f, -190.0f);
    glVertex2f(20.0f, -190.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-160.0f, -195.0f);
    glVertex2f(400.0f, -195.0f);
    glVertex2f(20.0f, -190.0f);
    glVertex2f(20.0f, -190.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-100.0f, -170.0f);
    glVertex2f(400.0f, -170.0f);
    glVertex2f(200.0f, -165.0f);
    glVertex2f(160.0f, -165.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-160.0f, -150.0f);
    glVertex2f(240.0f, -150.0f);
    glVertex2f(100.0f, -145.0f);
    glVertex2f(100.0f, -145.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-120.0f, -130.0f);
    glVertex2f(400.0f, -130.0f);
    glVertex2f(100.0f, -125.0f);
    glVertex2f(100.0f, -125.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-180.0f, -120.0f);
    glVertex2f(300.0f, -120.0f);
    glVertex2f(144.0f, -115.0f);
    glVertex2f(130.0f, -115.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-50.0f, -100.0f);
    glVertex2f(350.0f, -100.0f);
    glVertex2f(183.0f, -95.0f);
    glVertex2f(140.0f, -95.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-150.0f, -100.0f);
    glVertex2f(500.0f, -100.0f);
    glVertex2f(60.0f, -95.0f);
    glVertex2f(80.0f, -95.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-166.0f, -80.0f);
    glVertex2f(360.0f, -80.0f);
    glVertex2f(50.0f, -75.0f);
    glVertex2f(40.0f, -75.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-178.0f, -60.0f);
    glVertex2f(380.0f, -60.0f);
    glVertex2f(50.0f, -55.0f);
    glVertex2f(40.0f, -55.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-190.0f, -50.0f);
    glVertex2f(350.0f, -50.0f);
    glVertex2f(48.0f, -45.0f);
    glVertex2f(67.0f, -45.0f);
    glEnd();
    glPopMatrix();
}

void road()
{
    //main structure
    glColor3ub(128, 128, 128); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 25.0f);
    glVertex2f(200.0f, 25.0f);
    glVertex2f(200.0f, 80.0f);
    glVertex2f(0.0f, 80.0f);
    glEnd();

    //road slide lines
    glLineWidth(3.0f);
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 75.0f);
    glVertex2f(200.0f, 75.0f);
    glVertex2f(200.0f, 30.0f);
    glVertex2f(0.0f, 30.0f);
    glEnd();

    //middle dot lines
    glLineWidth(3.0f);
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 52.5f);
    glVertex2f(10.0f, 52.5f);
    glVertex2f(15.0f, 52.5f);
    glVertex2f(20.0f, 52.5f);
    glVertex2f(25.0f, 52.5f);
    glVertex2f(30.0f, 52.5f);
    glVertex2f(35.0f, 52.5f);
    glVertex2f(40.0f, 52.5f);
    glVertex2f(45.0f, 52.5f);
    glVertex2f(50.0f, 52.5f);
    glVertex2f(55.0f, 52.5f);
    glVertex2f(60.0f, 52.5f);
    glVertex2f(65.0f, 52.5f);
    glVertex2f(70.0f, 52.5f);
    glVertex2f(75.0f, 52.5f);
    glVertex2f(80.0f, 52.5f);
    glVertex2f(85.0f, 52.5f);
    glVertex2f(90.0f, 52.5f);
    glVertex2f(95.0f, 52.5f);
    glVertex2f(100.0f, 52.5f);
    glVertex2f(105.0f, 52.5f);
    glVertex2f(110.0f, 52.5f);
    glVertex2f(115.0f, 52.5f);
    glVertex2f(120.0f, 52.5f);
    glVertex2f(125.0f, 52.5f);
    glVertex2f(130.0f, 52.5f);
    glVertex2f(135.0f, 52.5f);
    glVertex2f(140.0f, 52.5f);
    glVertex2f(145.0f, 52.5f);
    glVertex2f(150.0f, 52.5f);
    glVertex2f(155.0f, 52.5f);
    glVertex2f(160.0f, 52.5f);
    glVertex2f(165.0f, 52.5f);
    glVertex2f(170.0f, 52.5f);
    glVertex2f(175.0f, 52.5f);
    glVertex2f(180.0f, 52.5f);
    glVertex2f(185.0f, 52.5f);
    glVertex2f(190.0f, 52.5f);
    glVertex2f(195.0f, 52.5f);
    glVertex2f(200.0f, 52.5f);
    glEnd();
}

void sky()
{
    glColor3ub(135, 240, 250);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 80.0f);
    glVertex2f(200.0f, 80.0f);
    glVertex2f(200.0f, 400.0f);
    glVertex2f(0.0f, 400.0f);
    glEnd();
}

void bench()
{
    //left side 1st bench
    //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(40.0f, 92.0f);
    glVertex2f(48.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(41.0f, 80.0f);
    glVertex2f(41.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(47.0f, 80.0f);
    glVertex2f(47.0f, 92.0f);
    glEnd();

    //left side 2nd bench
    //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(50.0f, 92.0f);
    glVertex2f(58.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(51.0f, 80.0f);
    glVertex2f(51.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(57.0f, 80.0f);
    glVertex2f(57.0f, 92.0f);
    glEnd();

    //right side 1st bench
    //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(172.0f, 92.0f);
    glVertex2f(180.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(173.0f, 80.0f);
    glVertex2f(173.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(179.0f, 80.0f);
    glVertex2f(179.0f, 92.0f);
    glEnd();

    //right side 2nd bench
    //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(182.0f, 92.0f);
    glVertex2f(190.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(183.0f, 80.0f);
    glVertex2f(183.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(189.0f, 80.0f);
    glVertex2f(189.0f, 92.0f);
    glEnd();
}

void lamppost()
{
    //left side lamppost
    //pillar
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, 80.0f);
    glVertex2f(62.0f, 162.5f);
    glEnd();

    //light holder
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, 160.0f);
    glVertex2f(54.0f, 160.0f);
    glEnd();

    //light
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(54.0f, 158.0f);
    glVertex2f(57.0f, 158.0f);
    glEnd();

    //right side lamppost
       //pillar
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(168.0f, 80.0f);
    glVertex2f(168.0f, 162.5f);
    glEnd();

    //light holder
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(168.0f, 160.0f);
    glVertex2f(176.0f, 160.0f);
    glEnd();

    //light
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.0f, 158.0f);
    glVertex2f(173.0f, 158.0f);
    glEnd();
}

void left_car()
{
    //left first car
    //middle body
    glColor3ub(137, 1, 255); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_left_car, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 62.0f);
    glVertex2f(23.0f, 62.0f);
    glVertex2f(23.0f, 79.0f);
    glVertex2f(5.0f, 79.0f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(6.0f, 79.0f);
    glVertex2f(20.0f, 79.0f);
    glVertex2f(17.0f, 97.0f);
    glVertex2f(8.0f, 97.0f);
    glEnd();

    //RIGHT 2D view
    glColor3ub(138, 43, 226); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(20.0f, 79.0f);
    glVertex2f(23.0f, 79.0f);
    glVertex2f(19.0f, 84.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(7.0f, 79.0f);
    glVertex2f(12.5f, 79.0f);
    glVertex2f(12.5f, 93.5f);
    glVertex2f(8.5f, 93.5f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(13.0f, 79.0f);
    glVertex2f(19.0f, 79.0f);
    glVertex2f(17.0f, 93.5f);
    glVertex2f(13.0f, 93.5f);
    glEnd();

    //left back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 70.0f);
    glVertex2f(6.0f, 70.0f);
    glVertex2f(6.0f, 79.0f);
    glVertex2f(5.0f, 79.0f);
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 9.3, y + 62);
    }
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 17, y + 62);
    }
    glEnd();
    glPopMatrix();
}

void left_car_1()
{
    //left first car
    //middle body
    glColor3ub(167, 228, 0); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_left_car_1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(105.0f, 62.0f);
    glVertex2f(123.0f, 62.0f);
    glVertex2f(123.0f, 79.0f);
    glVertex2f(105.0f, 79.0f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(106.0f, 79.0f);
    glVertex2f(120.0f, 79.0f);
    glVertex2f(117.0f, 97.0f);
    glVertex2f(108.0f, 97.0f);
    glEnd();

    //RIGHT 2D view
    glColor3ub(167, 228, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, 79.0f);
    glVertex2f(123.0f, 79.0f);
    glVertex2f(119.0f, 84.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(107.0f, 79.0f);
    glVertex2f(112.5f, 79.0f);
    glVertex2f(112.5f, 93.5f);
    glVertex2f(108.5f, 93.5f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(113.0f, 79.0f);
    glVertex2f(119.0f, 79.0f);
    glVertex2f(117.0f, 93.5f);
    glVertex2f(113.0f, 93.5f);
    glEnd();

    //left back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(105.0f, 70.0f);
    glVertex2f(106.0f, 70.0f);
    glVertex2f(106.0f, 79.0f);
    glVertex2f(105.0f, 79.0f);
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 109.3, y + 62);
    }
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 117, y + 62);
    }
    glEnd();
    glPopMatrix();
}

void right_car()
{
    //right first car
    //middle body
    glColor3ub(6, 47, 255); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_right_car, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.5f, 39.0f);
    glVertex2f(195.0f, 39.0f);
    glVertex2f(195.0f, 58.0f);
    glVertex2f(176.5f, 58.0f);
    glEnd();

    //Left 2d View
    glColor3ub(6, 47, 255); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.5f, 58.0f);
    glVertex2f(180.0f, 58.0f);
    glVertex2f(183.0f, 62.5f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(180.0f, 58.0f);
    glVertex2f(194.0f, 58.0f);
    glVertex2f(192.0f, 78.0f);
    glVertex2f(182.0f, 78.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(181.0f, 57.0f);
    glVertex2f(186.5f, 57.0f);
    glVertex2f(186.5f, 74.0f);
    glVertex2f(182.5f, 74.0f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(187.0f, 57.0f);
    glVertex2f(193.0f, 57.0f);
    glVertex2f(191.5f, 74.0f);
    glVertex2f(187.0f, 74.0f);
    glEnd();

    //Right back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(194.0f, 48.0f);
    glVertex2f(195.0f, 48.0f);
    glVertex2f(195.0f, 57.0f);
    glVertex2f(194.0f, 57.0f);
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 182.5, y + 39);
    }
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.6f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 190.5, y + 39);
    }
    glEnd();
    glPopMatrix();
}

void right_car_1()
{
    //right first car
    //middle body
    glColor3ub(242, 126, 24); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_right_car_1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.5f, 39.0f);
    glVertex2f(95.0f, 39.0f);
    glVertex2f(95.0f, 58.0f);
    glVertex2f(76.5f, 58.0f);
    glEnd();

    //Left 2d View
    glColor3ub(242, 126, 24); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.5f, 58.0f);
    glVertex2f(80.0f, 58.0f);
    glVertex2f(83.0f, 62.5f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 58.0f);
    glVertex2f(94.0f, 58.0f);
    glVertex2f(92.0f, 78.0f);
    glVertex2f(82.0f, 78.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(81.0f, 57.0f);
    glVertex2f(86.5f, 57.0f);
    glVertex2f(86.5f, 74.0f);
    glVertex2f(82.5f, 74.0f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(87.0f, 57.0f);
    glVertex2f(93.0f, 57.0f);
    glVertex2f(91.5f, 74.0f);
    glVertex2f(87.0f, 74.0f);
    glEnd();

    //Right back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(94.0f, 48.0f);
    glVertex2f(95.0f, 48.0f);
    glVertex2f(95.0f, 57.0f);
    glVertex2f(94.0f, 57.0f);
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 82.5, y + 39);
    }
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.6f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 90.5, y + 39);
    }
    glEnd();
    glPopMatrix();
}

void tree()
{
    //right side tree
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 160, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 13.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 182, y + 103.5);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 170, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 12.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 195, y + 85);
    }
    glEnd();

    //left side tree
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 12.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 70, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 60, y + 102);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 46, y + 122);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 40, y + 95);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 55, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 45, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 35, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 18.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25, y + 100);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 15, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(154, 205, 50);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 5, y + 85);
    }
    glEnd();
}

void building_1()
{
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 80.0f);
    glVertex2f(115.0f, 80.0f);
    glVertex2f(115.0f, 330.0f);
    glVertex2f(80.0f, 330.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 80.0f);
    glVertex2f(115.0f, 80.0f);
    glVertex2f(115.0f, 95.0f);
    glVertex2f(78.0f, 95.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 100.0f);
    glVertex2f(115.0f, 100.0f);
    glVertex2f(115.0f, 108.0f);
    glVertex2f(78.0f, 108.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 113.0f);
    glVertex2f(115.0f, 113.0f);
    glVertex2f(115.0f, 121.0f);
    glVertex2f(78.0f, 121.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 126.0f);
    glVertex2f(115.0f, 126.0f);
    glVertex2f(115.0f, 134.0f);
    glVertex2f(78.0f, 134.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 139.0f);
    glVertex2f(115.0f, 139.0f);
    glVertex2f(115.0f, 147.0f);
    glVertex2f(78.0f, 147.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 152.0f);
    glVertex2f(115.0f, 152.0f);
    glVertex2f(115.0f, 160.0f);
    glVertex2f(78.0f, 160.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 165.0f);
    glVertex2f(115.0f, 165.0f);
    glVertex2f(115.0f, 173.0f);
    glVertex2f(78.0f, 173.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 178.0f);
    glVertex2f(115.0f, 178.0f);
    glVertex2f(115.0f, 186.0f);
    glVertex2f(78.0f, 186.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 191.0f);
    glVertex2f(115.0f, 191.0f);
    glVertex2f(115.0f, 199.0f);
    glVertex2f(78.0f, 199.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 204.0f);
    glVertex2f(115.0f, 204.0f);
    glVertex2f(115.0f, 212.0f);
    glVertex2f(78.0f, 212.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 217.0f);
    glVertex2f(115.0f, 217.0f);
    glVertex2f(115.0f, 225.0f);
    glVertex2f(78.0f, 225.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 230.0f);
    glVertex2f(115.0f, 230.0f);
    glVertex2f(115.0f, 238.0f);
    glVertex2f(78.0f, 238.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 243.0f);
    glVertex2f(115.0f, 243.0f);
    glVertex2f(115.0f, 251.0f);
    glVertex2f(78.0f, 251.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 256.0f);
    glVertex2f(115.0f, 256.0f);
    glVertex2f(115.0f, 264.0f);
    glVertex2f(78.0f, 264.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 269.0f);
    glVertex2f(115.0f, 269.0f);
    glVertex2f(115.0f, 277.0f);
    glVertex2f(78.0f, 277.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 282.0f);
    glVertex2f(115.0f, 282.0f);
    glVertex2f(115.0f, 290.0f);
    glVertex2f(78.0f, 290.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 295.0f);
    glVertex2f(115.0f, 295.0f);
    glVertex2f(115.0f, 303.0f);
    glVertex2f(78.0f, 303.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 308.0f);
    glVertex2f(115.0f, 308.0f);
    glVertex2f(115.0f, 316.0f);
    glVertex2f(78.0f, 316.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 321.0f);
    glVertex2f(115.0f, 321.0f);
    glVertex2f(115.0f, 335.0f);
    glVertex2f(78.0f, 335.0f);
    glEnd();

    //shadow
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 80.0f);
    glVertex2f(116.0f, 80.0f);
    glVertex2f(116.0f, 330.0f);
    glVertex2f(115.0f, 335.0f);
    glEnd();
}

void building_2()
{
    glColor3ub(244, 164, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(91.0f, 75.0f);
    glVertex2f(100.0f, 75.0f);
    glVertex2f(100.0f, 370.0f);
    glVertex2f(91.0f, 370.0f);
    glEnd();

    //1st window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(91.5f, 90.0f);
    glVertex2f(93.5f, 90.0f);
    glVertex2f(93.5f, 362.0f);
    glVertex2f(91.5f, 362.0f);
    glEnd();

    //2nd window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(94.5f, 90.0f);
    glVertex2f(96.5f, 90.0f);
    glVertex2f(96.5f, 362.0f);
    glVertex2f(94.5f, 362.0f);
    glEnd();

    //3rd window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(97.5f, 90.0f);
    glVertex2f(99.5f, 90.0f);
    glVertex2f(99.5f, 362.0f);
    glVertex2f(97.5f, 362.0f);
    glEnd();

    //left building
    glColor3ub(244, 164, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(88.0f, 75.0f);
    glVertex2f(91.0f, 75.0f);
    glVertex2f(91.0f, 340.0f);
    glVertex2f(88.0f, 340.0f);
    glEnd();

    //left  window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 90.0f);
    glVertex2f(90.5f, 90.0f);
    glVertex2f(90.5f, 100.0f);
    glVertex2f(89.0f, 100.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 105.0f);
    glVertex2f(90.5f, 105.0f);
    glVertex2f(90.5f, 115.0f);
    glVertex2f(89.0f, 115.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 120.0f);
    glVertex2f(90.5f, 120.0f);
    glVertex2f(90.5f, 130.0f);
    glVertex2f(89.0f, 130.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 135.0f);
    glVertex2f(90.5f, 135.0f);
    glVertex2f(90.5f, 145.0f);
    glVertex2f(89.0f, 145.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 150.0f);
    glVertex2f(90.5f, 150.0f);
    glVertex2f(90.5f, 160.0f);
    glVertex2f(89.0f, 160.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 165.0f);
    glVertex2f(90.5f, 165.0f);
    glVertex2f(90.5f, 175.0f);
    glVertex2f(89.0f, 175.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 180.0f);
    glVertex2f(90.5f, 180.0f);
    glVertex2f(90.5f, 190.0f);
    glVertex2f(89.0f, 190.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 195.0f);
    glVertex2f(90.5f, 195.0f);
    glVertex2f(90.5f, 205.0f);
    glVertex2f(89.0f, 205.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 210.0f);
    glVertex2f(90.5f, 210.0f);
    glVertex2f(90.5f, 220.0f);
    glVertex2f(89.0f, 220.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 225.0f);
    glVertex2f(90.5f, 225.0f);
    glVertex2f(90.5f, 235.0f);
    glVertex2f(89.0f, 235.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 240.0f);
    glVertex2f(90.5f, 240.0f);
    glVertex2f(90.5f, 250.0f);
    glVertex2f(89.0f, 250.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 255.0f);
    glVertex2f(90.5f, 255.0f);
    glVertex2f(90.5f, 265.0f);
    glVertex2f(89.0f, 265.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 270.0f);
    glVertex2f(90.5f, 270.0f);
    glVertex2f(90.5f, 280.0f);
    glVertex2f(89.0f, 280.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 285.0f);
    glVertex2f(90.5f, 285.0f);
    glVertex2f(90.5f, 295.0f);
    glVertex2f(89.0f, 295.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 300.0f);
    glVertex2f(90.5f, 300.0f);
    glVertex2f(90.5f, 310.0f);
    glVertex2f(89.0f, 310.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 315.0f);
    glVertex2f(90.5f, 315.0f);
    glVertex2f(90.5f, 325.0f);
    glVertex2f(89.0f, 325.0f);
    glEnd();

    ///////Right Building/////////////

    glColor3ub(244, 164, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.0f, 75.0f);
    glVertex2f(103.0f, 75.0f);
    glVertex2f(103.0f, 340.0f);
    glVertex2f(100.0f, 340.0f);
    glEnd();

    //Right window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 90.0f);
    glVertex2f(102.0f, 90.0f);
    glVertex2f(102.0f, 100.0f);
    glVertex2f(100.5f, 100.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 105.0f);
    glVertex2f(102.0f, 105.0f);
    glVertex2f(102.0f, 115.0f);
    glVertex2f(100.5f, 115.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 120.0f);
    glVertex2f(102.0f, 120.0f);
    glVertex2f(102.0f, 130.0f);
    glVertex2f(100.5f, 130.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 135.0f);
    glVertex2f(102.0f, 135.0f);
    glVertex2f(102.0f, 145.0f);
    glVertex2f(100.5f, 145.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 150.0f);
    glVertex2f(102.0f, 150.0f);
    glVertex2f(102.0f, 160.0f);
    glVertex2f(100.5f, 160.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 165.0f);
    glVertex2f(102.0f, 165.0f);
    glVertex2f(102.0f, 175.0f);
    glVertex2f(100.5f, 175.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 180.0f);
    glVertex2f(102.0f, 180.0f);
    glVertex2f(102.0f, 190.0f);
    glVertex2f(100.5f, 190.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 195.0f);
    glVertex2f(102.0f, 195.0f);
    glVertex2f(102.0f, 205.0f);
    glVertex2f(100.5f, 205.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 210.0f);
    glVertex2f(102.0f, 210.0f);
    glVertex2f(102.0f, 220.0f);
    glVertex2f(100.5f, 220.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 225.0f);
    glVertex2f(102.0f, 225.0f);
    glVertex2f(102.0f, 235.0f);
    glVertex2f(100.5f, 235.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 240.0f);
    glVertex2f(102.0f, 240.0f);
    glVertex2f(102.0f, 250.0f);
    glVertex2f(100.5f, 250.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 255.0f);
    glVertex2f(102.0f, 255.0f);
    glVertex2f(102.0f, 265.0f);
    glVertex2f(100.5f, 265.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 270.0f);
    glVertex2f(102.0f, 270.0f);
    glVertex2f(102.0f, 280.0f);
    glVertex2f(100.5f, 280.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 285.0f);
    glVertex2f(102.0f, 285.0f);
    glVertex2f(102.0f, 295.0f);
    glVertex2f(100.5f, 295.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 300.0f);
    glVertex2f(102.0f, 300.0f);
    glVertex2f(102.0f, 310.0f);
    glVertex2f(100.5f, 310.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 315.0f);
    glVertex2f(102.0f, 315.0f);
    glVertex2f(102.0f, 325.0f);
    glVertex2f(100.5f, 325.0f);
    glEnd();

    ////Right lower shadow
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(103.0f, 75.0f);
    glVertex2f(104.0f, 75.0f);
    glVertex2f(104.0f, 325.0f);
    glVertex2f(103.0f, 339.0f);
    glEnd();

    ///// upper shadow
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.0f, 340.0f);
    glVertex2f(101.0f, 340.0f);
    glVertex2f(101.0f, 360.0f);
    glVertex2f(100.0f, 370.0f);
    glEnd();
}

void building_3()
{
    glColor3ub(255, 255, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, 80.0f);
    glVertex2f(129.0f, 80.0f);
    glVertex2f(129.0f, 230.0f);
    glVertex2f(120.0f, 230.0f);
    glEnd();

    //shadow
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(129.0f, 80.0f);
    glVertex2f(130.0f, 80.0f);
    glVertex2f(130.0f, 225.0f);
    glVertex2f(129.0f, 230.0f);
    glEnd();

    //Middle black box
    glColor3ub(96, 96, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 230.0f);
    glVertex2f(128.0f, 230.0f);
    glVertex2f(128.0f, 240.0f);
    glVertex2f(121.0f, 240.0f);
    glEnd();

    //shadow
    glColor3ub(64, 64, 64); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 235.0f);
    glVertex2f(128.0f, 235.0f);
    glVertex2f(128.0f, 240.0f);
    glVertex2f(121.0f, 240.0f);
    glEnd();

    glColor3ub(64, 64, 64); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(128.0f, 230.0f);
    glVertex2f(129.0f, 230.0f);
    glVertex2f(129.0f, 240.0f);
    glVertex2f(128.0f, 240.0f);
    glEnd();

    //upper bulding
    glColor3ub(255, 255, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, 240.0f);
    glVertex2f(129.0f, 240.0f);
    glVertex2f(129.0f, 300.0f);
    glVertex2f(120.0f, 300.0f);
    glEnd();

    //upper  shadow
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(129.0f, 240.0f);
    glVertex2f(130.0f, 240.0f);
    glVertex2f(130.0f, 295.0f);
    glVertex2f(129.0f, 300.0f);
    glEnd();

    //lower building left window
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 90.0f);
    glVertex2f(124.0f, 90.0f);
    glVertex2f(124.0f, 105.0f);
    glVertex2f(121.0f, 105.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 110.0f);
    glVertex2f(124.0f, 110.0f);
    glVertex2f(124.0f, 125.0f);
    glVertex2f(121.0f, 125.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 130.0f);
    glVertex2f(124.0f, 130.0f);
    glVertex2f(124.0f, 145.0f);
    glVertex2f(121.0f, 145.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 150.0f);
    glVertex2f(124.0f, 150.0f);
    glVertex2f(124.0f, 165.0f);
    glVertex2f(121.0f, 165.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 170.0f);
    glVertex2f(124.0f, 170.0f);
    glVertex2f(124.0f, 185.0f);
    glVertex2f(121.0f, 185.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 190.0f);
    glVertex2f(124.0f, 190.0f);
    glVertex2f(124.0f, 205.0f);
    glVertex2f(121.0f, 205.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 210.0f);
    glVertex2f(124.0f, 210.0f);
    glVertex2f(124.0f, 225.0f);
    glVertex2f(121.0f, 225.0f);
    glEnd();

    //Lower building right window
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 90.0f);
    glVertex2f(128.0f, 90.0f);
    glVertex2f(128.0f, 105.0f);
    glVertex2f(125.0f, 105.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 110.0f);
    glVertex2f(128.0f, 110.0f);
    glVertex2f(128.0f, 125.0f);
    glVertex2f(125.0f, 125.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 130.0f);
    glVertex2f(128.0f, 130.0f);
    glVertex2f(128.0f, 145.0f);
    glVertex2f(125.0f, 145.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 150.0f);
    glVertex2f(128.0f, 150.0f);
    glVertex2f(128.0f, 165.0f);
    glVertex2f(125.0f, 165.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 170.0f);
    glVertex2f(128.0f, 170.0f);
    glVertex2f(128.0f, 185.0f);
    glVertex2f(125.0f, 185.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 190.0f);
    glVertex2f(128.0f, 190.0f);
    glVertex2f(128.0f, 205.0f);
    glVertex2f(125.0f, 205.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 210.0f);
    glVertex2f(128.0f, 210.0f);
    glVertex2f(128.0f, 225.0f);
    glVertex2f(125.0f, 225.0f);
    glEnd();

    //Upper building window
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 245.0f);
    glVertex2f(128.0f, 245.0f);
    glVertex2f(128.0f, 255.0f);
    glVertex2f(121.0f, 255.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 260.0f);
    glVertex2f(128.0f, 260.0f);
    glVertex2f(128.0f, 270.0f);
    glVertex2f(121.0f, 270.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 275.0f);
    glVertex2f(128.0f, 275.0f);
    glVertex2f(128.0f, 285.0f);
    glVertex2f(121.0f, 285.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 290.0f);
    glVertex2f(128.0f, 290.0f);
    glVertex2f(128.0f, 298.0f);
    glVertex2f(121.0f, 298.0f);
    glEnd();
}

void building_4()
{
    glColor3ub(200, 100, 230); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(108.0f, 75.0f);
    glVertex2f(121.0f, 75.0f);
    glVertex2f(121.0f, 215.0f);
    glVertex2f(108.0f, 215.0f);
    glEnd();

    //upper
    glColor3ub(238, 130, 238); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(108.0f, 215.0f);
    glVertex2f(121.0f, 215.0f);
    glVertex2f(123.0f, 226.0f);
    glVertex2f(110.0f, 226.0f);
    glEnd();

    //Right shadow
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 75.0f);
    glVertex2f(123.0f, 75.0f);
    glVertex2f(123.0f, 226.0f);
    glVertex2f(121.0f, 215.0f);
    glEnd();

    //1st window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(109.0f, 90.0f);
    glVertex2f(110.0f, 90.0f);
    glVertex2f(110.0f, 215.0f);
    glVertex2f(109.0f, 215.0f);
    glEnd();

    //2nd window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(111.0f, 90.0f);
    glVertex2f(112.0f, 90.0f);
    glVertex2f(112.0f, 215.0f);
    glVertex2f(111.0f, 215.0f);
    glEnd();

    //3rd window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(113.0f, 90.0f);
    glVertex2f(114.0f, 90.0f);
    glVertex2f(114.0f, 215.0f);
    glVertex2f(113.0f, 215.0f);
    glEnd();

    //4th window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 90.0f);
    glVertex2f(116.0f, 90.0f);
    glVertex2f(116.0f, 215.0f);
    glVertex2f(115.0f, 215.0f);
    glEnd();

    //5th window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(117.0f, 90.0f);
    glVertex2f(118.0f, 90.0f);
    glVertex2f(118.0f, 215.0f);
    glVertex2f(117.0f, 215.0f);
    glEnd();

    //6th window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(119.0f, 90.0f);
    glVertex2f(120.0f, 90.0f);
    glVertex2f(120.0f, 215.0f);
    glVertex2f(119.0f, 215.0f);
    glEnd();
}

void building_5()
{
    //Right side last building
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 80.0f);
    glVertex2f(161.0f, 80.0f);
    glVertex2f(161.0f, 250.0f);
    glVertex2f(140.0f, 250.0f);
    glEnd();

    //border
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 80.0f);
    glVertex2f(161.0f, 80.0f);
    glVertex2f(161.0f, 90.0f);
    glVertex2f(140.0f, 90.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 95.0f);
    glVertex2f(161.0f, 95.0f);
    glVertex2f(161.0f, 98.0f);
    glVertex2f(140.0f, 98.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 102.0f);
    glVertex2f(161.0f, 102.0f);
    glVertex2f(161.0f, 105.0f);
    glVertex2f(140.0f, 105.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 109.0f);
    glVertex2f(161.0f, 109.0f);
    glVertex2f(161.0f, 112.0f);
    glVertex2f(140.0f, 112.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 116.0f);
    glVertex2f(161.0f, 116.0f);
    glVertex2f(161.0f, 119.0f);
    glVertex2f(140.0f, 119.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 123.0f);
    glVertex2f(161.0f, 123.0f);
    glVertex2f(161.0f, 126.0f);
    glVertex2f(140.0f, 126.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 130.0f);
    glVertex2f(161.0f, 130.0f);
    glVertex2f(161.0f, 133.0f);
    glVertex2f(140.0f, 133.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 137.0f);
    glVertex2f(161.0f, 137.0f);
    glVertex2f(161.0f, 140.0f);
    glVertex2f(140.0f, 140.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 144.0f);
    glVertex2f(161.0f, 144.0f);
    glVertex2f(161.0f, 147.0f);
    glVertex2f(140.0f, 147.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 151.0f);
    glVertex2f(161.0f, 151.0f);
    glVertex2f(161.0f, 154.0f);
    glVertex2f(140.0f, 154.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 158.0f);
    glVertex2f(161.0f, 158.0f);
    glVertex2f(161.0f, 161.0f);
    glVertex2f(140.0f, 161.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 165.0f);
    glVertex2f(161.0f, 165.0f);
    glVertex2f(161.0f, 168.0f);
    glVertex2f(140.0f, 168.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 172.0f);
    glVertex2f(161.0f, 172.0f);
    glVertex2f(161.0f, 175.0f);
    glVertex2f(140.0f, 175.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 179.0f);
    glVertex2f(161.0f, 179.0f);
    glVertex2f(161.0f, 182.0f);
    glVertex2f(140.0f, 182.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 186.0f);
    glVertex2f(161.0f, 186.0f);
    glVertex2f(161.0f, 189.0f);
    glVertex2f(140.0f, 189.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 193.0f);
    glVertex2f(161.0f, 193.0f);
    glVertex2f(161.0f, 196.0f);
    glVertex2f(140.0f, 196.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 200.0f);
    glVertex2f(161.0f, 200.0f);
    glVertex2f(161.0f, 203.0f);
    glVertex2f(140.0f, 203.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 207.0f);
    glVertex2f(161.0f, 207.0f);
    glVertex2f(161.0f, 210.0f);
    glVertex2f(140.0f, 210.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 214.0f);
    glVertex2f(161.0f, 214.0f);
    glVertex2f(161.0f, 217.0f);
    glVertex2f(140.0f, 217.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 221.0f);
    glVertex2f(161.0f, 221.0f);
    glVertex2f(161.0f, 224.0f);
    glVertex2f(140.0f, 224.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 228.0f);
    glVertex2f(161.0f, 228.0f);
    glVertex2f(161.0f, 231.0f);
    glVertex2f(140.0f, 231.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 236.0f);
    glVertex2f(161.0f, 236.0f);
    glVertex2f(161.0f, 239.0f);
    glVertex2f(140.0f, 239.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 244.0f);
    glVertex2f(161.0f, 244.0f);
    glVertex2f(161.0f, 250.0f);
    glVertex2f(140.0f, 250.0f);
    glEnd();

    //Right shadow
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(161.0f, 80.0f);
    glVertex2f(162.5f, 80.0f);
    glVertex2f(162.5f, 245.0f);
    glVertex2f(161.0f, 250.0f);
    glEnd();
}

void building_6()
{
    glColor3ub(233, 150, 122); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(130.0f, 75.0f);
    glVertex2f(149.0f, 75.0f);
    glVertex2f(149.0f, 200.0f);
    glVertex2f(130.0f, 200.0f);
    glEnd();

    //lower white border
    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(130.0f, 75.0f);
    glVertex2f(132.0f, 75.0f);
    glVertex2f(132.0f, 200.0f);
    glVertex2f(130.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(133.0f, 75.0f);
    glVertex2f(134.0f, 75.0f);
    glVertex2f(134.0f, 200.0f);
    glVertex2f(133.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(135.0f, 75.0f);
    glVertex2f(136.0f, 75.0f);
    glVertex2f(136.0f, 200.0f);
    glVertex2f(135.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(137.0f, 75.0f);
    glVertex2f(138.0f, 75.0f);
    glVertex2f(138.0f, 200.0f);
    glVertex2f(137.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(139.0f, 75.0f);
    glVertex2f(140.0f, 75.0f);
    glVertex2f(140.0f, 200.0f);
    glVertex2f(139.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(141.0f, 75.0f);
    glVertex2f(142.0f, 75.0f);
    glVertex2f(142.0f, 200.0f);
    glVertex2f(141.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(143.0f, 75.0f);
    glVertex2f(144.0f, 75.0f);
    glVertex2f(144.0f, 200.0f);
    glVertex2f(143.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(145.0f, 75.0f);
    glVertex2f(146.0f, 75.0f);
    glVertex2f(146.0f, 200.0f);
    glVertex2f(145.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(147.0f, 75.0f);
    glVertex2f(148.0f, 75.0f);
    glVertex2f(148.0f, 200.0f);
    glVertex2f(147.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(149.0f, 75.0f);
    glVertex2f(150.5f, 75.0f);
    glVertex2f(150.5f, 200.0f);
    glVertex2f(149.0f, 200.0f);
    glEnd();

    //Right shadow
    glColor3ub(250, 128, 114); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(150.5f, 75.0f);
    glVertex2f(151.5f, 75.0f);
    glVertex2f(151.5f, 195.0f);
    glVertex2f(150.5f, 200.0f);
    glEnd();

    //2nd building
    glColor3ub(233, 150, 122); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(132.0f, 200.0f);
    glVertex2f(149.0f, 200.0f);
    glVertex2f(149.0f, 300.0f);
    glVertex2f(132.0f, 300.0f);
    glEnd();

    //white border
    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(131.5f, 200.0f);
    glVertex2f(133.0f, 200.0f);
    glVertex2f(133.0f, 300.0f);
    glVertex2f(131.5f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(134.0f, 200.0f);
    glVertex2f(135.0f, 200.0f);
    glVertex2f(135.0f, 300.0f);
    glVertex2f(134.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(136.0f, 200.0f);
    glVertex2f(137.0f, 200.0f);
    glVertex2f(137.0f, 300.0f);
    glVertex2f(136.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(138.0f, 200.0f);
    glVertex2f(139.0f, 200.0f);
    glVertex2f(139.0f, 300.0f);
    glVertex2f(138.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 200.0f);
    glVertex2f(141.0f, 200.0f);
    glVertex2f(141.0f, 300.0f);
    glVertex2f(140.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(142.0f, 200.0f);
    glVertex2f(143.0f, 200.0f);
    glVertex2f(143.0f, 300.0f);
    glVertex2f(142.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(144.0f, 200.0f);
    glVertex2f(145.0f, 200.0f);
    glVertex2f(145.0f, 300.0f);
    glVertex2f(144.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(146.0f, 200.0f);
    glVertex2f(147.0f, 200.0f);
    glVertex2f(147.0f, 300.0f);
    glVertex2f(146.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(148.0f, 200.0f);
    glVertex2f(149.5f, 200.0f);
    glVertex2f(149.5f, 300.0f);
    glVertex2f(148.0f, 300.0f);
    glEnd();

    //Right shadow
    glColor3ub(250, 128, 114); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(149.5f, 200.0f);
    glVertex2f(150.25f, 200.0f);
    glVertex2f(150.25f, 295.0f);
    glVertex2f(149.5f, 300.0f);
    glEnd();

    //3rd building
    glColor3ub(233, 150, 122); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(133.0f, 300.0f);
    glVertex2f(148.0f, 300.0f);
    glVertex2f(148.0f, 380.0f);
    glVertex2f(133.0f, 380.0f);
    glEnd();

    //White border
    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(132.5f, 300.0f);
    glVertex2f(134.0f, 300.0f);
    glVertex2f(134.0f, 380.0f);
    glVertex2f(132.5f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(135.0f, 300.0f);
    glVertex2f(136.0f, 300.0f);
    glVertex2f(136.0f, 380.0f);
    glVertex2f(135.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(137.0f, 300.0f);
    glVertex2f(138.0f, 300.0f);
    glVertex2f(138.0f, 380.0f);
    glVertex2f(137.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(139.0f, 300.0f);
    glVertex2f(140.0f, 300.0f);
    glVertex2f(140.0f, 380.0f);
    glVertex2f(139.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(141.0f, 300.0f);
    glVertex2f(142.0f, 300.0f);
    glVertex2f(142.0f, 380.0f);
    glVertex2f(141.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(143.0f, 300.0f);
    glVertex2f(144.0f, 300.0f);
    glVertex2f(144.0f, 380.0f);
    glVertex2f(143.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(145.0f, 300.0f);
    glVertex2f(146.0f, 300.0f);
    glVertex2f(146.0f, 380.0f);
    glVertex2f(145.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(147.0f, 300.0f);
    glVertex2f(148.5f, 300.0f);
    glVertex2f(148.5f, 380.0f);
    glVertex2f(147.0f, 380.0f);
    glEnd();

    //Right shadow
    glColor3ub(250, 128, 114); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(148.5f, 300.0f);
    glVertex2f(149.25f, 300.0f);
    glVertex2f(149.25f, 375.0f);
    glVertex2f(148.5f, 380.0f);
    glEnd();
}

void building_7()
{
    glColor3ub(255, 255, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(70.0f, 75.0f);
    glVertex2f(83.0f, 75.0f);
    glVertex2f(83.0f, 250.0f);
    glVertex2f(70.0f, 250.0f);
    glEnd();

    //left 1st line window
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 90.0f);
    glVertex2f(73.0f, 90.0f);
    glVertex2f(73.0f, 100.0f);
    glVertex2f(71.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 105.0f);
    glVertex2f(73.0f, 105.0f);
    glVertex2f(73.0f, 115.0f);
    glVertex2f(71.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 120.0f);
    glVertex2f(73.0f, 120.0f);
    glVertex2f(73.0f, 130.0f);
    glVertex2f(71.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 135.0f);
    glVertex2f(73.0f, 135.0f);
    glVertex2f(73.0f, 145.0f);
    glVertex2f(71.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 150.0f);
    glVertex2f(73.0f, 150.0f);
    glVertex2f(73.0f, 160.0f);
    glVertex2f(71.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 165.0f);
    glVertex2f(73.0f, 165.0f);
    glVertex2f(73.0f, 175.0f);
    glVertex2f(71.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 180.0f);
    glVertex2f(73.0f, 180.0f);
    glVertex2f(73.0f, 190.0f);
    glVertex2f(71.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 195.0f);
    glVertex2f(73.0f, 195.0f);
    glVertex2f(73.0f, 205.0f);
    glVertex2f(71.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 210.0f);
    glVertex2f(73.0f, 210.0f);
    glVertex2f(73.0f, 220.0f);
    glVertex2f(71.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 225.0f);
    glVertex2f(73.0f, 225.0f);
    glVertex2f(73.0f, 235.0f);
    glVertex2f(71.0f, 235.0f);
    glEnd();

    //left 2nd line
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 90.0f);
    glVertex2f(76.0f, 90.0f);
    glVertex2f(76.0f, 100.0f);
    glVertex2f(74.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 105.0f);
    glVertex2f(76.0f, 105.0f);
    glVertex2f(76.0f, 115.0f);
    glVertex2f(74.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 120.0f);
    glVertex2f(76.0f, 120.0f);
    glVertex2f(76.0f, 130.0f);
    glVertex2f(74.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 135.0f);
    glVertex2f(76.0f, 135.0f);
    glVertex2f(76.0f, 145.0f);
    glVertex2f(74.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 150.0f);
    glVertex2f(76.0f, 150.0f);
    glVertex2f(76.0f, 160.0f);
    glVertex2f(74.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 165.0f);
    glVertex2f(76.0f, 165.0f);
    glVertex2f(76.0f, 175.0f);
    glVertex2f(74.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 180.0f);
    glVertex2f(76.0f, 180.0f);
    glVertex2f(76.0f, 190.0f);
    glVertex2f(74.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 195.0f);
    glVertex2f(76.0f, 195.0f);
    glVertex2f(76.0f, 205.0f);
    glVertex2f(74.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 210.0f);
    glVertex2f(76.0f, 210.0f);
    glVertex2f(76.0f, 220.0f);
    glVertex2f(74.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 225.0f);
    glVertex2f(76.0f, 225.0f);
    glVertex2f(76.0f, 235.0f);
    glVertex2f(74.0f, 235.0f);
    glEnd();

    //3rd line window
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 90.0f);
    glVertex2f(79.0f, 90.0f);
    glVertex2f(79.0f, 100.0f);
    glVertex2f(77.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 105.0f);
    glVertex2f(79.0f, 105.0f);
    glVertex2f(79.0f, 115.0f);
    glVertex2f(77.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 120.0f);
    glVertex2f(79.0f, 120.0f);
    glVertex2f(79.0f, 130.0f);
    glVertex2f(77.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 135.0f);
    glVertex2f(79.0f, 135.0f);
    glVertex2f(79.0f, 145.0f);
    glVertex2f(77.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 150.0f);
    glVertex2f(79.0f, 150.0f);
    glVertex2f(79.0f, 160.0f);
    glVertex2f(77.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 165.0f);
    glVertex2f(79.0f, 165.0f);
    glVertex2f(79.0f, 175.0f);
    glVertex2f(77.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 180.0f);
    glVertex2f(79.0f, 180.0f);
    glVertex2f(79.0f, 190.0f);
    glVertex2f(77.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 195.0f);
    glVertex2f(79.0f, 195.0f);
    glVertex2f(79.0f, 205.0f);
    glVertex2f(77.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 210.0f);
    glVertex2f(79.0f, 210.0f);
    glVertex2f(79.0f, 220.0f);
    glVertex2f(77.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 225.0f);
    glVertex2f(79.0f, 225.0f);
    glVertex2f(79.0f, 235.0f);
    glVertex2f(77.0f, 235.0f);
    glEnd();

    //4th line window
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 90.0f);
    glVertex2f(82.0f, 90.0f);
    glVertex2f(82.0f, 100.0f);
    glVertex2f(80.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 105.0f);
    glVertex2f(82.0f, 105.0f);
    glVertex2f(82.0f, 115.0f);
    glVertex2f(80.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 120.0f);
    glVertex2f(82.0f, 120.0f);
    glVertex2f(82.0f, 130.0f);
    glVertex2f(80.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 135.0f);
    glVertex2f(82.0f, 135.0f);
    glVertex2f(82.0f, 145.0f);
    glVertex2f(80.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 150.0f);
    glVertex2f(82.0f, 150.0f);
    glVertex2f(82.0f, 160.0f);
    glVertex2f(80.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 165.0f);
    glVertex2f(82.0f, 165.0f);
    glVertex2f(82.0f, 175.0f);
    glVertex2f(80.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 180.0f);
    glVertex2f(82.0f, 180.0f);
    glVertex2f(82.0f, 190.0f);
    glVertex2f(80.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 195.0f);
    glVertex2f(82.0f, 195.0f);
    glVertex2f(82.0f, 205.0f);
    glVertex2f(80.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 210.0f);
    glVertex2f(82.0f, 210.0f);
    glVertex2f(82.0f, 220.0f);
    glVertex2f(80.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 225.0f);
    glVertex2f(82.0f, 225.0f);
    glVertex2f(82.0f, 235.0f);
    glVertex2f(80.0f, 235.0f);
    glEnd();

    //Right shadow
    glColor3ub(230, 200, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(83.0f, 75.0f);
    glVertex2f(84.0f, 75.0f);
    glVertex2f(84.0f, 240.0f);
    glVertex2f(83.0f, 250.0f);
    glEnd();

    //upper white box
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(72.0f, 250.0f);
    glVertex2f(76.0f, 250.0f);
    glVertex2f(76.0f, 265.0f);
    glVertex2f(72.0f, 265.0f);
    glEnd();

    //upper white box right shadow
    glColor3ub(128, 128, 128); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.0f, 250.0f);
    glVertex2f(76.5f, 250.0f);
    glVertex2f(76.5f, 260.0f);
    glVertex2f(76.0f, 265.0f);
    glEnd();
}

void cloud()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_cloud, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 22, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 30, y + 290);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 40, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 35, y + 312);
    }
    glEnd();
    glPopMatrix();
}

void cloud1()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_cloud1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 122, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 130, y + 290);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 140, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 135, y + 312);
    }
    glEnd();
    glPopMatrix();
}

void sun()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 245, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 8.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 185, y + 292);
    }
    glEnd();
}

void boat()
{
    //body
    glColor3ub(139, 69, 19); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_boat, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(60.0f, -70.0f);
    glVertex2f(80.0f, -70.0f);
    glVertex2f(90.0f, -30.0f);
    glVertex2f(50.0f, -30.0f);
    glEnd();

    //boat pal holder
    glColor3ub(0, 0, 0);
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(60.0f, -30.0f);
    glVertex2f(60.0f, 50.0f);
    glEnd();

    //boat pal
    glColor3ub(138, 43, 226);
    glLineWidth(7.0f);
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(60.0f, -25.0f);
    glVertex2f(80.0f, -25.0f);
    glVertex2f(60.0f, 45.0f);
    glEnd();
    glPopMatrix();
}

void boat_1()
{
    //body
    glColor3ub(193, 40, 60); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_boat_1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, -85.0f);
    glVertex2f(140.0f, -85.0f);
    glVertex2f(150.0f, -45.0f);
    glVertex2f(110.0f, -45.0f);
    glEnd();

    //boat pal holder
    glColor3ub(0, 0, 0);
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, -45.0f);
    glVertex2f(140.0f, 35.0f);
    glEnd();

    //boat pal
    glColor3ub(255, 20, 147);
    glLineWidth(7.0f);
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, -40.0f);
    glVertex2f(120.0f, -40.0f);
    glVertex2f(140.0f, 30.0f);
    glEnd();
    glPopMatrix();
}

void ship()
{
    //bottom red
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(10.0f, -170.0f);
    glVertex2f(110.0f, -170.0f);
    glVertex2f(110.0f, -140.0f);
    glVertex2f(10.0f, -140.0f);
    glEnd();

    //middle white
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(10.0f, -140.0f);
    glVertex2f(110.0f, -140.0f);
    glVertex2f(110.0f, -120.0f);
    glVertex2f(10.0f, -120.0f);
    glEnd();

    //deck room
    glColor3ub(70, 130, 180); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(18.0f, -120.0f);
    glVertex2f(40.0f, -120.0f);
    glVertex2f(40.0f, -50.0f);
    glVertex2f(18.0f, -50.0f);
    glEnd();

    //deck room 2D
    glColor3ub(72, 61, 139); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(40.0f, -120.0f);
    glVertex2f(41.0f, -120.0f);
    glVertex2f(41.0f, -50.0f);
    glVertex2f(40.0f, -50.0f);
    glEnd();

    //deck room first left window
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 228, 181);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 22, y - 60);
    }
    glEnd();

    //deck room second left window
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 228, 181);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 29, y - 60);
    }
    glEnd();

    //deck room third left window
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 228, 181);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 36, y - 60);
    }
    glEnd();

    //control room
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(23.0f, -50.0f);
    glVertex2f(40.0f, -50.0f);
    glVertex2f(42.0f, 10.0f);
    glVertex2f(23.0f, 10.0f);
    glEnd();

    //control room 2D
    glColor3ub(128, 128, 128); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(40.0f, -50.0f);
    glVertex2f(41.0f, -50.0f);
    glVertex2f(42.0f, 10.0f);
    glVertex2f(41.0f, 10.0f);
    glEnd();

    //control room left first window
    glColor3ub(0, 206, 209); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(24.0f, -10.0f);
    glVertex2f(27.0f, -10.0f);
    glVertex2f(27.0f, 8.0f);
    glVertex2f(24.0f, 8.0f);
    glEnd();

    //control room left second window
    glColor3ub(0, 206, 209); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(28.0f, -10.0f);
    glVertex2f(31.0f, -10.0f);
    glVertex2f(31.0f, 8.0f);
    glVertex2f(28.0f, 8.0f);
    glEnd();

    //control room left third window
    glColor3ub(0, 206, 209); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(32.0f, -10.0f);
    glVertex2f(35.0f, -10.0f);
    glVertex2f(35.0f, 8.0f);
    glVertex2f(32.0f, 8.0f);
    glEnd();

    //control room left fourth window
    glColor3ub(0, 206, 209); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(36.0f, -10.0f);
    glVertex2f(39.5f, -10.0f);
    glVertex2f(40.0f, 8.0f);
    glVertex2f(36.0f, 8.0f);
    glEnd();

    //control room roof top
    glColor3ub(70, 130, 180); // Clear the color buffer (background)
    glLineWidth(12.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(21.0f, 10.0f);
    glVertex2f(43.0f, 10.0f);
    glEnd();

    //control room top light holder
    glColor3ub(192, 192, 192); // Clear the color buffer (background)
    glLineWidth(8.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(33.0f, 13.0f);
    glVertex2f(33.0f, 55.0f);
    glEnd();

    //exhaustor white part
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 15.0f);
    glVertex2f(30.0f, 15.0f);
    glVertex2f(30.0f, 40.0f);
    glVertex2f(25.0f, 40.0f);
    glEnd();

    //exhaustor black part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 40.0f);
    glVertex2f(30.0f, 40.0f);
    glVertex2f(30.0f, 45.0f);
    glVertex2f(25.0f, 50.0f);
    glEnd();

    //control room front glass
    glColor3ub(0, 206, 209); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(41.0f, -16.0f);
    glVertex2f(41.5f, 2.0f);
    glEnd();

    //deck roof top
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glLineWidth(12.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(13.0f, -50.0f);
    glVertex2f(43.0f, -50.0f);
    glEnd();

    //deck roof top 2D
    glColor3ub(128, 128, 128); // Clear the color buffer (background)
    glLineWidth(12.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(43.0f, -50.0f);
    glVertex2f(44.0f, -50.0f);
    glEnd();

    //body to deck line1
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glLineWidth(15.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(14.0f, -100.0f);
    glVertex2f(14.0f, -50.0f);
    glEnd();

    //body to deck line2
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glLineWidth(10.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(18.0f, -100.0f);
    glVertex2f(18.0f, -50.0f);
    glEnd();

    //upper white tail part
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(10.0f, -120.0f);
    glVertex2f(40.0f, -120.0f);
    glVertex2f(35.0f, -100.0f);
    glVertex2f(10.0f, -100.0f);
    glEnd();

    //upper white front part
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(85.0f, -120.0f);
    glVertex2f(110.0f, -120.0f);
    glVertex2f(120.0f, -90.0f);
    glVertex2f(90.0f, -90.0f);
    glEnd();
    glPopMatrix();
}

void containers()
{
    //left first container
    glColor3ub(0, 0, 255); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(45.0f, -120.0f);
    glVertex2f(62.0f, -120.0f);
    glVertex2f(62.0f, -85.0f);
    glVertex2f(45.0f, -85.0f);
    glEnd();

    //left first container 2D
    glColor3ub(0, 0, 100); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, -85.0f);
    glVertex2f(63.0f, -85.0f);
    glVertex2f(63.0f, -120.0f);
    glVertex2f(62.0f, -120.0f);
    glEnd();

    //left second container
    glColor3ub(255, 165, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(65.0f, -120.0f);
    glVertex2f(82.0f, -120.0f);
    glVertex2f(82.0f, -85.0f);
    glVertex2f(65.0f, -85.0f);
    glEnd();

    //left second container 2D
    glColor3ub(150, 105, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(82.0f, -85.0f);
    glVertex2f(83.0f, -85.0f);
    glVertex2f(83.0f, -120.0f);
    glVertex2f(82.0f, -120.0f);
    glEnd();

    //top container
    glColor3ub(255, 127, 80); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(56.5f, -85.0f);
    glVertex2f(73.5f, -85.0f);
    glVertex2f(73.5f, -50.0f);
    glVertex2f(56.5f, -50.0f);
    glEnd();

    //top container 2D
    glColor3ub(130, 70, 50); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(73.5f, -50.0f);
    glVertex2f(74.5f, -50.0f);
    glVertex2f(74.5f, -85.0f);
    glVertex2f(73.5f, -85.0f);
    glEnd();
    glPopMatrix();
}

//first Windmill
//first blade
void first_blade()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(16.0f, 185.0f, 0.0f);
    glRotatef(angle_1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-16.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(15.0f, 178.0f);
    glVertex2f(17.0f, 178.0f);
    glVertex2f(17.0f, 192.0f);
    glVertex2f(15.0f, 192.0);
    glEnd();
    glPopMatrix();
}

//Windmill
//second blade
void second_blade()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(16.0f, 185.0f, 0.0f);
    glRotatef(angle_2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-16.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(9.0f, 184.0f);
    glVertex2f(23.0f, 184.0f);
    glVertex2f(23.0f, 186.0f);
    glVertex2f(9.0f, 186.0f);
    glEnd();
    glPopMatrix();
}

//windmill
void windmill_stand()
{
    glColor3ub(165, 42, 42);
    glBegin(GL_QUADS);
    glVertex2f(15.5f, 80.0f);
    glVertex2f(16.5f, 80.0f);
    glVertex2f(16.5f, 185.0f);
    glVertex2f(15.5f, 185.0f);
    glEnd();
}

//second Windmill
//first blade
void right_first_blade()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(33.0f, 185.0f, 0.0f);
    glRotatef(angle_1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-33.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(32.0f, 178.0f);
    glVertex2f(34.0f, 178.0f);
    glVertex2f(34.0f, 192.0f);
    glVertex2f(32.0f, 192.0);
    glEnd();
    glPopMatrix();
}

//Windmill
//second blade
void right_second_blade()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(33.0f, 185.0f, 0.0f);
    glRotatef(angle_2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-33.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(26.0f, 184.0f);
    glVertex2f(40.0f, 184.0f);
    glVertex2f(40.0f, 186.0f);
    glVertex2f(26.0f, 186.0f);
    glEnd();
    glPopMatrix();
}

//windmill
void right_windmill_stand()
{
    glColor3ub(165, 42, 42);
    glBegin(GL_QUADS);
    glVertex2f(32.5f, 80.0f);
    glVertex2f(33.5f, 80.0f);
    glVertex2f(33.5f, 185.0f);
    glVertex2f(32.5f, 185.0f);
    glEnd();
}

//Airplane
void air_plane()
{
    //main body
    glColor3ub(65, 105, 225);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_airplane, 0.0f, 0.0f);//for move
    glBegin(GL_QUADS);
    glVertex2f(160.0f, 318.0f);
    glVertex2f(183.0f, 318.0f);
    glVertex2f(183.0f, 343.0f);
    glVertex2f(160.0f, 343.0f);
    glEnd();

    //front part bottom
    glColor3ub(75, 0, 130);
    glBegin(GL_QUADS);
    glVertex2f(160.0f, 330.5f);
    glVertex2f(155.0f, 330.5f);
    glVertex2f(158.0f, 318.0f);
    glVertex2f(160.0f, 318.0f);
    glEnd();

    //front part upper
    glColor3ub(75, 0, 130);
    glBegin(GL_QUADS);
    glVertex2f(155.0f, 330.5f);
    glVertex2f(160.0f, 330.5f);
    glVertex2f(160.0f, 343.0f);
    glVertex2f(158.0f, 343.0f);
    glEnd();

    //left wings
    glColor3ub(255, 165, 0);
    glBegin(GL_QUADS);
    glVertex2f(163.0f, 330.5f);
    glVertex2f(168.0f, 298.0f);
    glVertex2f(173.0f, 295.0f);
    glVertex2f(168.0f, 330.5f);
    glEnd();

    //right wings
    glColor3ub(255, 165, 0);
    glBegin(GL_QUADS);
    glVertex2f(165.0f, 343.0f);
    glVertex2f(170.0f, 343.0f);
    glVertex2f(173.0f, 363.0f);
    glVertex2f(168.0f, 360.5f);
    glEnd();

    //tail
    glColor3ub(255, 165, 0);
    glBegin(GL_QUADS);
    glVertex2f(178.0f, 343.0f);
    glVertex2f(183.0f, 343.0f);
    glVertex2f(183.0f, 365.0f);
    glVertex2f(181.0f, 365.5f);
    glEnd();
    glPopMatrix();
}

void upper_container_text(float x, float y, char* st)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l, i;
    l = strlen(st); // see how many characters are in text string.

    glColor3f(0.0, 0.0, 0.0);

    glRasterPos2f(x, y); // location to start printing text
    for (i = 0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
    }
    glPopMatrix();
}

void left_container_text(float x, float y, char* st)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l, i;
    l = strlen(st); // see how many characters are in text string.

    glColor3f(1.0, 1.0, 1.0);

    glRasterPos2f(x, y); // location to start printing text
    for (i = 0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
    }
    glPopMatrix();
}

void right_container_text(float x, float y, char* st)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l, i;
    l = strlen(st); // see how many characters are in text string.

    glColor3f(0.0, 0.0, 0.0);

    glRasterPos2f(x, y); // location to start printing text
    for (i = 0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
    }
    glPopMatrix();
}

void ship_name_text(float x, float y, char* st)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l, i;
    l = strlen(st); // see how many characters are in text string.

    glColor3f(0.0, 0.0, 0.0);

    glRasterPos2f(x, y); // location to start printing text
    for (i = 0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
    }
    glPopMatrix();
}

void speed_board()
{
    //deck
    glColor3ub(0, 0, 128);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_speed_boat, 0.0f, 0.0f);//for move
    glBegin(GL_QUADS);
    glVertex2f(135.0f, -44.0f);
    glVertex2f(167.0f, -60.0f);
    glVertex2f(164.0f, -30.0f);
    glVertex2f(140.0f, -10.0f);
    glEnd();

    //windows
    glColor3ub(72, 209, 204);
    glBegin(GL_QUADS);
    glVertex2f(137.0f, -39.0f);
    glVertex2f(165.0f, -51.0f);
    glVertex2f(163.0f, -34.0f);
    glVertex2f(141.0f, -15.0f);
    glEnd();

    //window line
    glColor3ub(0, 0, 128);
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(145.0f, -52.0f);
    glVertex2f(145.0f, -16.0f);
    glVertex2f(151.0f, -52.0f);
    glVertex2f(151.0f, -19.0f);
    glVertex2f(157.0f, -52.0f);
    glVertex2f(157.0f, -25.5f);
    glEnd();

    //middle body
    glColor3ub(141, 162, 2);
    glBegin(GL_QUADS);
    glVertex2f(132.0f, -85.0f);
    glVertex2f(173.0f, -85.0f);
    glVertex2f(177.0f, -60.0f);
    glVertex2f(123.0f, -38.0f);
    glEnd();

    //bottom body
    glColor3ub(0, 0, 128);
    glBegin(GL_QUADS);
    glVertex2f(135.0f, -105.0f);
    glVertex2f(170.0f, -105.0f);
    glVertex2f(173.0f, -85.0f);
    glVertex2f(130.0f, -76.0f);
    glEnd();
    glPopMatrix();
}
//DAY END


//NIGHT START
void water_night()
{
    //water
    glColor3ub(0, 150, 220); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, -200.0f);
    glVertex2f(200.0f, -200.0f);
    glVertex2f(200.0f, -35.0f);
    glVertex2f(0.0f, -35.0f);
    glEnd();

    //beach
    glColor3ub(230, 210, 160); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, -35.0f);
    glVertex2f(200.0f, -35.0f);
    glVertex2f(200.0f, 25.0f);
    glVertex2f(0.0f, 25.0f);
    glEnd();
}

void beach_bench_night()
{
    //Bench_1
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(15.0f, 6.0f);
    glVertex2f(20.0f, 6.0f);
    glVertex2f(20.0f, 20.0f);
    glVertex2f(15.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(15.0f, 6.0f);
    glVertex2f(13.0f, -8.0f);
    glVertex2f(18.0f, -8.0f);
    glVertex2f(20.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(14.0f, -8.0f);
    glVertex2f(14.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(17.5f, -8.0f);
    glVertex2f(17.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(19.5f, 6.0f);
    glVertex2f(19.5f, -2.0f);
    glEnd();

    //Bench_2
      //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 6.0f);
    glVertex2f(30.0f, 6.0f);
    glVertex2f(30.0f, 20.0f);
    glVertex2f(25.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 6.0f);
    glVertex2f(23.0f, -8.0f);
    glVertex2f(28.0f, -8.0f);
    glVertex2f(30.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(24.0f, -8.0f);
    glVertex2f(24.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(27.5f, -8.0f);
    glVertex2f(27.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(29.5f, 6.0f);
    glVertex2f(29.5f, -2.0f);
    glEnd();

    //Bench_3
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(65.0f, 6.0f);
    glVertex2f(70.0f, 6.0f);
    glVertex2f(70.0f, 20.0f);
    glVertex2f(65.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(65.0f, 6.0f);
    glVertex2f(63.0f, -8.0f);
    glVertex2f(68.0f, -8.0f);
    glVertex2f(70.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(64.0f, -8.0f);
    glVertex2f(64.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(67.5f, -8.0f);
    glVertex2f(67.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(69.5f, 6.0f);
    glVertex2f(69.5f, -2.0f);
    glEnd();

    //Bench_4
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(75.0f, 6.0f);
    glVertex2f(80.0f, 6.0f);
    glVertex2f(80.0f, 20.0f);
    glVertex2f(75.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(75.0f, 6.0f);
    glVertex2f(73.0f, -8.0f);
    glVertex2f(78.0f, -8.0f);
    glVertex2f(80.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, -8.0f);
    glVertex2f(74.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.5f, -8.0f);
    glVertex2f(77.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(79.5f, 6.0f);
    glVertex2f(79.5f, -2.0f);
    glEnd();

    //Bench_5
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 6.0f);
    glVertex2f(120.0f, 6.0f);
    glVertex2f(120.0f, 20.0f);
    glVertex2f(115.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 6.0f);
    glVertex2f(113.0f, -8.0f);
    glVertex2f(118.0f, -8.0f);
    glVertex2f(120.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(114.0f, -8.0f);
    glVertex2f(114.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(117.5f, -8.0f);
    glVertex2f(117.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(119.5f, 6.0f);
    glVertex2f(119.5f, -2.0f);
    glEnd();

    //Bench_6
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 6.0f);
    glVertex2f(130.0f, 6.0f);
    glVertex2f(130.0f, 20.0f);
    glVertex2f(125.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 6.0f);
    glVertex2f(123.0f, -8.0f);
    glVertex2f(128.0f, -8.0f);
    glVertex2f(130.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(124.0f, -8.0f);
    glVertex2f(124.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(127.5f, -8.0f);
    glVertex2f(127.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(129.5f, 6.0f);
    glVertex2f(129.5f, -2.0f);
    glEnd();

    //Bench_7
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(165.0f, 6.0f);
    glVertex2f(170.0f, 6.0f);
    glVertex2f(170.0f, 20.0f);
    glVertex2f(165.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(165.0f, 6.0f);
    glVertex2f(163.0f, -8.0f);
    glVertex2f(168.0f, -8.0f);
    glVertex2f(170.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(164.0f, -8.0f);
    glVertex2f(164.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(167.5f, -8.0f);
    glVertex2f(167.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(169.5f, 6.0f);
    glVertex2f(169.5f, -2.0f);
    glEnd();

    //Bench_8
    //back rest
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(175.0f, 6.0f);
    glVertex2f(180.0f, 6.0f);
    glVertex2f(180.0f, 20.0f);
    glVertex2f(175.0f, 20.0f);
    glEnd();

    //seat
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(175.0f, 6.0f);
    glVertex2f(173.0f, -8.0f);
    glVertex2f(178.0f, -8.0f);
    glVertex2f(180.0f, 6.0f);
    glEnd();

    //left leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(174.0f, -8.0f);
    glVertex2f(174.0f, -15.0f);
    glEnd();

    //Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(177.5f, -8.0f);
    glVertex2f(177.5f, -15.0f);
    glEnd();

    //back Right leg
    glColor3ub(255, 69, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(179.5f, 6.0f);
    glVertex2f(179.5f, -2.0f);
    glEnd();
}

void umbrella_night()
{
    //from left first umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(22.0f, -15.0f);
    glVertex2f(22.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(12.0f, 26.0f);
    glVertex2f(22.0f, 35.0f);
    glVertex2f(22.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(32.0f, 26.0f);
    glVertex2f(22.0f, 35.0f);
    glVertex2f(22.0f, 50.0f);
    glEnd();

    //from left second umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(72.0f, -15.0f);
    glVertex2f(72.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, 26.0f);
    glVertex2f(72.0f, 35.0f);
    glVertex2f(72.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(82.0f, 26.0f);
    glVertex2f(72.0f, 35.0f);
    glVertex2f(72.0f, 50.0f);
    glEnd();

    //from left third umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(122.0f, -15.0f);
    glVertex2f(122.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(112.0f, 26.0f);
    glVertex2f(122.0f, 35.0f);
    glVertex2f(122.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(132.0f, 26.0f);
    glVertex2f(122.0f, 35.0f);
    glVertex2f(122.0f, 50.0f);
    glEnd();

    //from left fourth umbrella
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(172.0f, -15.0f);
    glVertex2f(172.0f, 35.0f);
    glEnd();

    //left
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(162.0f, 26.0f);
    glVertex2f(172.0f, 35.0f);
    glVertex2f(172.0f, 50.0f);
    glEnd();

    //right
    glColor3ub(124, 252, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(182.0f, 26.0f);
    glVertex2f(172.0f, 35.0f);
    glVertex2f(172.0f, 50.0f);
    glEnd();
}

void wave_night()
{
    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, move_wave, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-200.0f, -195.0f);
    glVertex2f(300.0f, -195.0f);
    glVertex2f(20.0f, -190.0f);
    glVertex2f(20.0f, -190.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-160.0f, -195.0f);
    glVertex2f(400.0f, -195.0f);
    glVertex2f(20.0f, -190.0f);
    glVertex2f(20.0f, -190.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-100.0f, -170.0f);
    glVertex2f(400.0f, -170.0f);
    glVertex2f(200.0f, -165.0f);
    glVertex2f(160.0f, -165.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-160.0f, -150.0f);
    glVertex2f(240.0f, -150.0f);
    glVertex2f(100.0f, -145.0f);
    glVertex2f(100.0f, -145.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-120.0f, -130.0f);
    glVertex2f(400.0f, -130.0f);
    glVertex2f(100.0f, -125.0f);
    glVertex2f(100.0f, -125.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-180.0f, -120.0f);
    glVertex2f(300.0f, -120.0f);
    glVertex2f(144.0f, -115.0f);
    glVertex2f(130.0f, -115.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-50.0f, -100.0f);
    glVertex2f(350.0f, -100.0f);
    glVertex2f(183.0f, -95.0f);
    glVertex2f(140.0f, -95.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-150.0f, -100.0f);
    glVertex2f(500.0f, -100.0f);
    glVertex2f(60.0f, -95.0f);
    glVertex2f(80.0f, -95.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-166.0f, -80.0f);
    glVertex2f(360.0f, -80.0f);
    glVertex2f(50.0f, -75.0f);
    glVertex2f(40.0f, -75.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-178.0f, -60.0f);
    glVertex2f(380.0f, -60.0f);
    glVertex2f(50.0f, -55.0f);
    glVertex2f(40.0f, -55.0f);
    glEnd();

    glColor3ub(190, 230, 250); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(-190.0f, -50.0f);
    glVertex2f(350.0f, -50.0f);
    glVertex2f(48.0f, -45.0f);
    glVertex2f(67.0f, -45.0f);
    glEnd();
    glPopMatrix();
}

void road_night()
{
    //main structure
    glColor3ub(110, 110, 110); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 25.0f);
    glVertex2f(200.0f, 25.0f);
    glVertex2f(200.0f, 80.0f);
    glVertex2f(0.0f, 80.0f);
    glEnd();

    //road slide lines
    glLineWidth(3.0f);
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 75.0f);
    glVertex2f(200.0f, 75.0f);
    glVertex2f(200.0f, 30.0f);
    glVertex2f(0.0f, 30.0f);
    glEnd();

    //middle dot lines
    glLineWidth(3.0f);
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 52.5f);
    glVertex2f(10.0f, 52.5f);
    glVertex2f(15.0f, 52.5f);
    glVertex2f(20.0f, 52.5f);
    glVertex2f(25.0f, 52.5f);
    glVertex2f(30.0f, 52.5f);
    glVertex2f(35.0f, 52.5f);
    glVertex2f(40.0f, 52.5f);
    glVertex2f(45.0f, 52.5f);
    glVertex2f(50.0f, 52.5f);
    glVertex2f(55.0f, 52.5f);
    glVertex2f(60.0f, 52.5f);
    glVertex2f(65.0f, 52.5f);
    glVertex2f(70.0f, 52.5f);
    glVertex2f(75.0f, 52.5f);
    glVertex2f(80.0f, 52.5f);
    glVertex2f(85.0f, 52.5f);
    glVertex2f(90.0f, 52.5f);
    glVertex2f(95.0f, 52.5f);
    glVertex2f(100.0f, 52.5f);
    glVertex2f(105.0f, 52.5f);
    glVertex2f(110.0f, 52.5f);
    glVertex2f(115.0f, 52.5f);
    glVertex2f(120.0f, 52.5f);
    glVertex2f(125.0f, 52.5f);
    glVertex2f(130.0f, 52.5f);
    glVertex2f(135.0f, 52.5f);
    glVertex2f(140.0f, 52.5f);
    glVertex2f(145.0f, 52.5f);
    glVertex2f(150.0f, 52.5f);
    glVertex2f(155.0f, 52.5f);
    glVertex2f(160.0f, 52.5f);
    glVertex2f(165.0f, 52.5f);
    glVertex2f(170.0f, 52.5f);
    glVertex2f(175.0f, 52.5f);
    glVertex2f(180.0f, 52.5f);
    glVertex2f(185.0f, 52.5f);
    glVertex2f(190.0f, 52.5f);
    glVertex2f(195.0f, 52.5f);
    glVertex2f(200.0f, 52.5f);
    glEnd();
}

void sky_night()
{
    //glColor3ub(34.0f,263.0f,223.0f); // Clear the color buffer (background)
    glColor3ub(36, 52, 71);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 80.0f);
    glVertex2f(200.0f, 80.0f);
    glVertex2f(200.0f, 400.0f);
    glVertex2f(0.0f, 400.0f);
    glEnd();

    //star
    glColor3ub(255, 255, 255);
    glPointSize(4.0f);
    glBegin(GL_POINTS);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 350.0f);
    glVertex2f(15.0f, 335.0f);
    glVertex2f(25.0f, 370.0f);
    glVertex2f(35.0f, 330.0f);
    glVertex2f(45.0f, 365.0f);
    glVertex2f(55.0f, 370.0f);
    glVertex2f(65.0f, 365.0f);
    glVertex2f(75.0f, 385.0f);
    glVertex2f(85.0f, 380.0f);
    glVertex2f(95.0f, 385.0f);
    glVertex2f(105.0f, 380.0f);
    glVertex2f(115.0f, 385.0f);
    glVertex2f(125.0f, 350.0f);
    glVertex2f(135.0f, 365.0f);
    glVertex2f(145.0f, 395.0f);
    glVertex2f(155.0f, 380.0f);
    glVertex2f(165.0f, 345.0f);
    glVertex2f(175.0f, 375.0f);
    glVertex2f(185.0f, 370.0f);
    glVertex2f(195.0f, 365.0f);
    glVertex2f(10.0f, 320.0f);
    glVertex2f(20.0f, 300.0f);
    glVertex2f(30.0f, 340.0f);
    glVertex2f(40.0f, 320.0f);
    glVertex2f(50.0f, 280.0f);
    glVertex2f(60.0f, 360.0f);
    glVertex2f(70.0f, 340.0f);
    glVertex2f(140.0f, 300.0f);
    glVertex2f(150.0f, 280.0f);
    glVertex2f(160.0f, 265.0f);
    glVertex2f(180.0f, 270.0f);
    glVertex2f(170.0f, 300.0f);
    glVertex2f(130.0f, 390.0f);
    glVertex2f(190.0f, 320.0f);
    glEnd();
}

void bench_night()
{
    //left side 1st bench
    //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(40.0f, 92.0f);
    glVertex2f(48.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(41.0f, 80.0f);
    glVertex2f(41.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(47.0f, 80.0f);
    glVertex2f(47.0f, 92.0f);
    glEnd();

    //left side 2nd bench
    //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(50.0f, 92.0f);
    glVertex2f(58.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(51.0f, 80.0f);
    glVertex2f(51.0f, 92.0f);
    glEnd();
   
    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(57.0f, 80.0f);
    glVertex2f(57.0f, 92.0f);
    glEnd();

    //right side 1st bench
        //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(172.0f, 92.0f);
    glVertex2f(180.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(173.0f, 80.0f);
    glVertex2f(173.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(179.0f, 80.0f);
    glVertex2f(179.0f, 92.0f);
    glEnd();

    //right side 2nd bench
       //upper part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(182.0f, 92.0f);
    glVertex2f(190.0f, 92.0f);
    glEnd();

    //left leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(183.0f, 80.0f);
    glVertex2f(183.0f, 92.0f);
    glEnd();

    //right leg
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(4.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(189.0f, 80.0f);
    glVertex2f(189.0f, 92.0f);
    glEnd();
}

void lamppost_night()
{
    //left side lamppost
    //pillar
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, 80.0f);
    glVertex2f(62.0f, 162.5f);
    glEnd();

    //light holder
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, 160.0f);
    glVertex2f(54.0f, 160.0f);
    glEnd();

    //light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(54.0f, 158.0f);
    glVertex2f(57.0f, 158.0f);
    glEnd();

    //right side lamppost
       //pillar
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(168.0f, 80.0f);
    glVertex2f(168.0f, 162.5f);
    glEnd();

    //light holder
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(168.0f, 160.0f);
    glVertex2f(176.0f, 160.0f);
    glEnd();

    //light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.0f, 158.0f);
    glVertex2f(173.0f, 158.0f);
    glEnd();
}

void left_car_night()
{
    //left first car
    //middle body
    glColor3ub(120, 1, 240); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_left_car, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 62.0f);
    glVertex2f(23.0f, 62.0f);
    glVertex2f(23.0f, 79.0f);
    glVertex2f(5.0f, 79.0f);
    glEnd();

    //front light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(21.5f, 69.0f);
    glVertex2f(23.0f, 69.0f);
    glVertex2f(23.0f, 79.0f);
    glVertex2f(21.5f, 79.0f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(6.0f, 79.0f);
    glVertex2f(20.0f, 79.0f);
    glVertex2f(17.0f, 97.0f);
    glVertex2f(8.0f, 97.0f);
    glEnd();

    //RIGHT 2D view
    glColor3ub(120, 1, 240); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(20.0f, 79.0f);
    glVertex2f(23.0f, 79.0f);
    glVertex2f(19.0f, 84.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(7.0f, 79.0f);
    glVertex2f(12.5f, 79.0f);
    glVertex2f(12.5f, 93.5f);
    glVertex2f(8.5f, 93.5f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(13.0f, 79.0f);
    glVertex2f(19.0f, 79.0f);
    glVertex2f(17.0f, 93.5f);
    glVertex2f(13.0f, 93.5f);
    glEnd();

    //left back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(5.0f, 70.0f);
    glVertex2f(6.0f, 70.0f);
    glVertex2f(6.0f, 79.0f);
    glVertex2f(5.0f, 79.0f);
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 9.3, y + 62);
    }
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 17, y + 62);
    }
    glEnd();
    glPopMatrix();
}

void left_car_1_night()
{
    //left first car
    //middle body
    glColor3ub(155, 208, 0); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_left_car_1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(105.0f, 62.0f);
    glVertex2f(123.0f, 62.0f);
    glVertex2f(123.0f, 79.0f);
    glVertex2f(105.0f, 79.0f);
    glEnd();

    //front light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.5f, 69.0f);
    glVertex2f(123.0f, 69.0f);
    glVertex2f(123.0f, 79.0f);
    glVertex2f(121.5f, 79.0f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(106.0f, 79.0f);
    glVertex2f(120.0f, 79.0f);
    glVertex2f(117.0f, 97.0f);
    glVertex2f(108.0f, 97.0f);
    glEnd();

    //RIGHT 2D view
    glColor3ub(155, 208, 0); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, 79.0f);
    glVertex2f(123.0f, 79.0f);
    glVertex2f(119.0f, 84.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(107.0f, 79.0f);
    glVertex2f(112.5f, 79.0f);
    glVertex2f(112.5f, 93.5f);
    glVertex2f(108.5f, 93.5f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(113.0f, 79.0f);
    glVertex2f(119.0f, 79.0f);
    glVertex2f(117.0f, 93.5f);
    glVertex2f(113.0f, 93.5f);
    glEnd();

    //left back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(105.0f, 70.0f);
    glVertex2f(106.0f, 70.0f);
    glVertex2f(106.0f, 79.0f);
    glVertex2f(105.0f, 79.0f);
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 109.3, y + 62);
    }
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 117, y + 62);
    }
    glEnd();
    glPopMatrix();
}

void right_car_night()
{
    //right first car
    //middle body
    glColor3ub(6, 38, 230); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_right_car, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.5f, 39.0f);
    glVertex2f(195.0f, 39.0f);
    glVertex2f(195.0f, 58.0f);
    glVertex2f(176.5f, 58.0f);
    glEnd();

    //front light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.5f, 48.0f);
    glVertex2f(178.0f, 48.0f);
    glVertex2f(178.0f, 58.0f);
    glVertex2f(176.5f, 58.0f);
    glEnd();

    //Left 2d View
    glColor3ub(6, 38, 230); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(176.5f, 58.0f);
    glVertex2f(180.0f, 58.0f);
    glVertex2f(183.0f, 62.5f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(180.0f, 58.0f);
    glVertex2f(194.0f, 58.0f);
    glVertex2f(192.0f, 78.0f);
    glVertex2f(182.0f, 78.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(181.0f, 57.0f);
    glVertex2f(186.5f, 57.0f);
    glVertex2f(186.5f, 74.0f);
    glVertex2f(182.5f, 74.0f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(187.0f, 57.0f);
    glVertex2f(193.0f, 57.0f);
    glVertex2f(191.5f, 74.0f);
    glVertex2f(187.0f, 74.0f);
    glEnd();

    //Right back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(194.0f, 48.0f);
    glVertex2f(195.0f, 48.0f);
    glVertex2f(195.0f, 57.0f);
    glVertex2f(194.0f, 57.0f);
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 182.5, y + 39);
    }
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.6f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 190.5, y + 39);
    }
    glEnd();
    glPopMatrix();
}

void right_car_1_night()
{
    //right first car
    //middle body
    glColor3ub(230, 115, 20); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_right_car_1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.5f, 39.0f);
    glVertex2f(95.0f, 39.0f);
    glVertex2f(95.0f, 58.0f);
    glVertex2f(76.5f, 58.0f);
    glEnd();

    //front light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.5f, 48.0f);
    glVertex2f(78.0f, 48.0f);
    glVertex2f(78.0f, 58.0f);
    glVertex2f(76.5f, 58.0f);
    glEnd();

    //Left 2d View
    glColor3ub(242, 126, 24); // Clear the color buffer (background)
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.5f, 58.0f);
    glVertex2f(80.0f, 58.0f);
    glVertex2f(83.0f, 62.5f);
    glEnd();

    //upper body
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 58.0f);
    glVertex2f(94.0f, 58.0f);
    glVertex2f(92.0f, 78.0f);
    glVertex2f(82.0f, 78.0f);
    glEnd();

    //car glass left
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(81.0f, 57.0f);
    glVertex2f(86.5f, 57.0f);
    glVertex2f(86.5f, 74.0f);
    glVertex2f(82.5f, 74.0f);
    glEnd();

    //car glass Right
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(87.0f, 57.0f);
    glVertex2f(93.0f, 57.0f);
    glVertex2f(91.5f, 74.0f);
    glVertex2f(87.0f, 74.0f);
    glEnd();

    //Right back light
    glColor3ub(255, 0, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(94.0f, 48.0f);
    glVertex2f(95.0f, 48.0f);
    glVertex2f(95.0f, 57.0f);
    glVertex2f(94.0f, 57.0f);
    glEnd();

    //front wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.7f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 82.5, y + 39);
    }
    glEnd();

    //rear wheel
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.6f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 90.5, y + 39);
    }
    glEnd();
    glPopMatrix();
}

void tree_night()
{
    //right side tree
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 160, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 13.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 182, y + 103.5);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 170, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 12.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 195, y + 85);
    }
    glEnd();

    //left side tree
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 12.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 70, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 60, y + 102);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 46, y + 122);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 40, y + 95);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 20.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 55, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 45, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 35, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 18.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25, y + 100);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 15, y + 85);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(130, 180, 40);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 5, y + 85);
    }
    glEnd();

}

void building_1_night()
{
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 80.0f);
    glVertex2f(115.0f, 80.0f);
    glVertex2f(115.0f, 330.0f);
    glVertex2f(80.0f, 330.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 80.0f);
    glVertex2f(115.0f, 80.0f);
    glVertex2f(115.0f, 95.0f);
    glVertex2f(78.0f, 95.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 100.0f);
    glVertex2f(115.0f, 100.0f);
    glVertex2f(115.0f, 108.0f);
    glVertex2f(78.0f, 108.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 113.0f);
    glVertex2f(115.0f, 113.0f);
    glVertex2f(115.0f, 121.0f);
    glVertex2f(78.0f, 121.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 126.0f);
    glVertex2f(115.0f, 126.0f);
    glVertex2f(115.0f, 134.0f);
    glVertex2f(78.0f, 134.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 139.0f);
    glVertex2f(115.0f, 139.0f);
    glVertex2f(115.0f, 147.0f);
    glVertex2f(78.0f, 147.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 152.0f);
    glVertex2f(115.0f, 152.0f);
    glVertex2f(115.0f, 160.0f);
    glVertex2f(78.0f, 160.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 165.0f);
    glVertex2f(115.0f, 165.0f);
    glVertex2f(115.0f, 173.0f);
    glVertex2f(78.0f, 173.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 178.0f);
    glVertex2f(115.0f, 178.0f);
    glVertex2f(115.0f, 186.0f);
    glVertex2f(78.0f, 186.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 191.0f);
    glVertex2f(115.0f, 191.0f);
    glVertex2f(115.0f, 199.0f);
    glVertex2f(78.0f, 199.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 204.0f);
    glVertex2f(115.0f, 204.0f);
    glVertex2f(115.0f, 212.0f);
    glVertex2f(78.0f, 212.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 217.0f);
    glVertex2f(115.0f, 217.0f);
    glVertex2f(115.0f, 225.0f);
    glVertex2f(78.0f, 225.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 230.0f);
    glVertex2f(115.0f, 230.0f);
    glVertex2f(115.0f, 238.0f);
    glVertex2f(78.0f, 238.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 243.0f);
    glVertex2f(115.0f, 243.0f);
    glVertex2f(115.0f, 251.0f);
    glVertex2f(78.0f, 251.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 256.0f);
    glVertex2f(115.0f, 256.0f);
    glVertex2f(115.0f, 264.0f);
    glVertex2f(78.0f, 264.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 269.0f);
    glVertex2f(115.0f, 269.0f);
    glVertex2f(115.0f, 277.0f);
    glVertex2f(78.0f, 277.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 282.0f);
    glVertex2f(115.0f, 282.0f);
    glVertex2f(115.0f, 290.0f);
    glVertex2f(78.0f, 290.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 295.0f);
    glVertex2f(115.0f, 295.0f);
    glVertex2f(115.0f, 303.0f);
    glVertex2f(78.0f, 303.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 308.0f);
    glVertex2f(115.0f, 308.0f);
    glVertex2f(115.0f, 316.0f);
    glVertex2f(78.0f, 316.0f);
    glEnd();

    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(78.0f, 321.0f);
    glVertex2f(115.0f, 321.0f);
    glVertex2f(115.0f, 335.0f);
    glVertex2f(78.0f, 335.0f);
    glEnd();

    //shadow
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 80.0f);
    glVertex2f(116.0f, 80.0f);
    glVertex2f(116.0f, 330.0f);
    glVertex2f(115.0f, 335.0f);
    glEnd();
}

void building_2_night()
{
    glColor3ub(244, 164, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(91.0f, 75.0f);
    glVertex2f(100.0f, 75.0f);
    glVertex2f(100.0f, 370.0f);
    glVertex2f(91.0f, 370.0f);
    glEnd();

    //1st window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(91.5f, 90.0f);
    glVertex2f(93.5f, 90.0f);
    glVertex2f(93.5f, 362.0f);
    glVertex2f(91.5f, 362.0f);
    glEnd();

    //2nd window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(94.5f, 90.0f);
    glVertex2f(96.5f, 90.0f);
    glVertex2f(96.5f, 362.0f);
    glVertex2f(94.5f, 362.0f);
    glEnd();

    //3rd window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(97.5f, 90.0f);
    glVertex2f(99.5f, 90.0f);
    glVertex2f(99.5f, 362.0f);
    glVertex2f(97.5f, 362.0f);
    glEnd();

    //left building
    glColor3ub(244, 164, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(88.0f, 75.0f);
    glVertex2f(91.0f, 75.0f);
    glVertex2f(91.0f, 340.0f);
    glVertex2f(88.0f, 340.0f);
    glEnd();

    //left  window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 90.0f);
    glVertex2f(90.5f, 90.0f);
    glVertex2f(90.5f, 100.0f);
    glVertex2f(89.0f, 100.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 105.0f);
    glVertex2f(90.5f, 105.0f);
    glVertex2f(90.5f, 115.0f);
    glVertex2f(89.0f, 115.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 120.0f);
    glVertex2f(90.5f, 120.0f);
    glVertex2f(90.5f, 130.0f);
    glVertex2f(89.0f, 130.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 135.0f);
    glVertex2f(90.5f, 135.0f);
    glVertex2f(90.5f, 145.0f);
    glVertex2f(89.0f, 145.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 150.0f);
    glVertex2f(90.5f, 150.0f);
    glVertex2f(90.5f, 160.0f);
    glVertex2f(89.0f, 160.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 165.0f);
    glVertex2f(90.5f, 165.0f);
    glVertex2f(90.5f, 175.0f);
    glVertex2f(89.0f, 175.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 180.0f);
    glVertex2f(90.5f, 180.0f);
    glVertex2f(90.5f, 190.0f);
    glVertex2f(89.0f, 190.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 195.0f);
    glVertex2f(90.5f, 195.0f);
    glVertex2f(90.5f, 205.0f);
    glVertex2f(89.0f, 205.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 210.0f);
    glVertex2f(90.5f, 210.0f);
    glVertex2f(90.5f, 220.0f);
    glVertex2f(89.0f, 220.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 225.0f);
    glVertex2f(90.5f, 225.0f);
    glVertex2f(90.5f, 235.0f);
    glVertex2f(89.0f, 235.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 240.0f);
    glVertex2f(90.5f, 240.0f);
    glVertex2f(90.5f, 250.0f);
    glVertex2f(89.0f, 250.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 255.0f);
    glVertex2f(90.5f, 255.0f);
    glVertex2f(90.5f, 265.0f);
    glVertex2f(89.0f, 265.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 270.0f);
    glVertex2f(90.5f, 270.0f);
    glVertex2f(90.5f, 280.0f);
    glVertex2f(89.0f, 280.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 285.0f);
    glVertex2f(90.5f, 285.0f);
    glVertex2f(90.5f, 295.0f);
    glVertex2f(89.0f, 295.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 300.0f);
    glVertex2f(90.5f, 300.0f);
    glVertex2f(90.5f, 310.0f);
    glVertex2f(89.0f, 310.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(89.0f, 315.0f);
    glVertex2f(90.5f, 315.0f);
    glVertex2f(90.5f, 325.0f);
    glVertex2f(89.0f, 325.0f);
    glEnd();

    ///////Right Building/////////////

    glColor3ub(244, 164, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.0f, 75.0f);
    glVertex2f(103.0f, 75.0f);
    glVertex2f(103.0f, 340.0f);
    glVertex2f(100.0f, 340.0f);
    glEnd();

    //Right window
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 90.0f);
    glVertex2f(102.0f, 90.0f);
    glVertex2f(102.0f, 100.0f);
    glVertex2f(100.5f, 100.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 105.0f);
    glVertex2f(102.0f, 105.0f);
    glVertex2f(102.0f, 115.0f);
    glVertex2f(100.5f, 115.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 120.0f);
    glVertex2f(102.0f, 120.0f);
    glVertex2f(102.0f, 130.0f);
    glVertex2f(100.5f, 130.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 135.0f);
    glVertex2f(102.0f, 135.0f);
    glVertex2f(102.0f, 145.0f);
    glVertex2f(100.5f, 145.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 150.0f);
    glVertex2f(102.0f, 150.0f);
    glVertex2f(102.0f, 160.0f);
    glVertex2f(100.5f, 160.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 165.0f);
    glVertex2f(102.0f, 165.0f);
    glVertex2f(102.0f, 175.0f);
    glVertex2f(100.5f, 175.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 180.0f);
    glVertex2f(102.0f, 180.0f);
    glVertex2f(102.0f, 190.0f);
    glVertex2f(100.5f, 190.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 195.0f);
    glVertex2f(102.0f, 195.0f);
    glVertex2f(102.0f, 205.0f);
    glVertex2f(100.5f, 205.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 210.0f);
    glVertex2f(102.0f, 210.0f);
    glVertex2f(102.0f, 220.0f);
    glVertex2f(100.5f, 220.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 225.0f);
    glVertex2f(102.0f, 225.0f);
    glVertex2f(102.0f, 235.0f);
    glVertex2f(100.5f, 235.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 240.0f);
    glVertex2f(102.0f, 240.0f);
    glVertex2f(102.0f, 250.0f);
    glVertex2f(100.5f, 250.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 255.0f);
    glVertex2f(102.0f, 255.0f);
    glVertex2f(102.0f, 265.0f);
    glVertex2f(100.5f, 265.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 270.0f);
    glVertex2f(102.0f, 270.0f);
    glVertex2f(102.0f, 280.0f);
    glVertex2f(100.5f, 280.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 285.0f);
    glVertex2f(102.0f, 285.0f);
    glVertex2f(102.0f, 295.0f);
    glVertex2f(100.5f, 295.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 300.0f);
    glVertex2f(102.0f, 300.0f);
    glVertex2f(102.0f, 310.0f);
    glVertex2f(100.5f, 310.0f);
    glEnd();

    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.5f, 315.0f);
    glVertex2f(102.0f, 315.0f);
    glVertex2f(102.0f, 325.0f);
    glVertex2f(100.5f, 325.0f);
    glEnd();

    ////Right lower shadow
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(103.0f, 75.0f);
    glVertex2f(104.0f, 75.0f);
    glVertex2f(104.0f, 325.0f);
    glVertex2f(103.0f, 339.0f);
    glEnd();

    ///// upper shadow
    glColor3ub(205, 133, 63); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(100.0f, 340.0f);
    glVertex2f(101.0f, 340.0f);
    glVertex2f(101.0f, 360.0f);
    glVertex2f(100.0f, 370.0f);
    glEnd();
}

void building_3_night()
{
    glColor3ub(255, 255, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, 80.0f);
    glVertex2f(129.0f, 80.0f);
    glVertex2f(129.0f, 230.0f);
    glVertex2f(120.0f, 230.0f);
    glEnd();

    //shadow
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(129.0f, 80.0f);
    glVertex2f(130.0f, 80.0f);
    glVertex2f(130.0f, 225.0f);
    glVertex2f(129.0f, 230.0f);
    glEnd();

    //Middle black box
    glColor3ub(96, 96, 96); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 230.0f);
    glVertex2f(128.0f, 230.0f);
    glVertex2f(128.0f, 240.0f);
    glVertex2f(121.0f, 240.0f);
    glEnd();

    //shadow
    glColor3ub(64, 64, 64); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 235.0f);
    glVertex2f(128.0f, 235.0f);
    glVertex2f(128.0f, 240.0f);
    glVertex2f(121.0f, 240.0f);
    glEnd();

    glColor3ub(64, 64, 64); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(128.0f, 230.0f);
    glVertex2f(129.0f, 230.0f);
    glVertex2f(129.0f, 240.0f);
    glVertex2f(128.0f, 240.0f);
    glEnd();

    //upper bulding
    glColor3ub(255, 255, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, 240.0f);
    glVertex2f(129.0f, 240.0f);
    glVertex2f(129.0f, 300.0f);
    glVertex2f(120.0f, 300.0f);
    glEnd();

    //upper  shadow
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(129.0f, 240.0f);
    glVertex2f(130.0f, 240.0f);
    glVertex2f(130.0f, 295.0f);
    glVertex2f(129.0f, 300.0f);
    glEnd();

    //lower building left window
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 90.0f);
    glVertex2f(124.0f, 90.0f);
    glVertex2f(124.0f, 105.0f);
    glVertex2f(121.0f, 105.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 110.0f);
    glVertex2f(124.0f, 110.0f);
    glVertex2f(124.0f, 125.0f);
    glVertex2f(121.0f, 125.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 130.0f);
    glVertex2f(124.0f, 130.0f);
    glVertex2f(124.0f, 145.0f);
    glVertex2f(121.0f, 145.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 150.0f);
    glVertex2f(124.0f, 150.0f);
    glVertex2f(124.0f, 165.0f);
    glVertex2f(121.0f, 165.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 170.0f);
    glVertex2f(124.0f, 170.0f);
    glVertex2f(124.0f, 185.0f);
    glVertex2f(121.0f, 185.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 190.0f);
    glVertex2f(124.0f, 190.0f);
    glVertex2f(124.0f, 205.0f);
    glVertex2f(121.0f, 205.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 210.0f);
    glVertex2f(124.0f, 210.0f);
    glVertex2f(124.0f, 225.0f);
    glVertex2f(121.0f, 225.0f);
    glEnd();

    //Lower building right window
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 90.0f);
    glVertex2f(128.0f, 90.0f);
    glVertex2f(128.0f, 105.0f);
    glVertex2f(125.0f, 105.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 110.0f);
    glVertex2f(128.0f, 110.0f);
    glVertex2f(128.0f, 125.0f);
    glVertex2f(125.0f, 125.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 130.0f);
    glVertex2f(128.0f, 130.0f);
    glVertex2f(128.0f, 145.0f);
    glVertex2f(125.0f, 145.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 150.0f);
    glVertex2f(128.0f, 150.0f);
    glVertex2f(128.0f, 165.0f);
    glVertex2f(125.0f, 165.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 170.0f);
    glVertex2f(128.0f, 170.0f);
    glVertex2f(128.0f, 185.0f);
    glVertex2f(125.0f, 185.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 190.0f);
    glVertex2f(128.0f, 190.0f);
    glVertex2f(128.0f, 205.0f);
    glVertex2f(125.0f, 205.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(125.0f, 210.0f);
    glVertex2f(128.0f, 210.0f);
    glVertex2f(128.0f, 225.0f);
    glVertex2f(125.0f, 225.0f);
    glEnd();

    //Upper building window
    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 245.0f);
    glVertex2f(128.0f, 245.0f);
    glVertex2f(128.0f, 255.0f);
    glVertex2f(121.0f, 255.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 260.0f);
    glVertex2f(128.0f, 260.0f);
    glVertex2f(128.0f, 270.0f);
    glVertex2f(121.0f, 270.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 275.0f);
    glVertex2f(128.0f, 275.0f);
    glVertex2f(128.0f, 285.0f);
    glVertex2f(121.0f, 285.0f);
    glEnd();

    glColor3ub(255, 215, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 290.0f);
    glVertex2f(128.0f, 290.0f);
    glVertex2f(128.0f, 298.0f);
    glVertex2f(121.0f, 298.0f);
    glEnd();
}

void building_4_night()
{
    glColor3ub(200, 100, 230); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(108.0f, 75.0f);
    glVertex2f(121.0f, 75.0f);
    glVertex2f(121.0f, 215.0f);
    glVertex2f(108.0f, 215.0f);
    glEnd();

    //upper
    glColor3ub(238, 130, 238); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(108.0f, 215.0f);
    glVertex2f(121.0f, 215.0f);
    glVertex2f(123.0f, 226.0f);
    glVertex2f(110.0f, 226.0f);
    glEnd();

    //Right shadow
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(121.0f, 75.0f);
    glVertex2f(123.0f, 75.0f);
    glVertex2f(123.0f, 226.0f);
    glVertex2f(121.0f, 215.0f);
    glEnd();

    //1st window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(109.0f, 90.0f);
    glVertex2f(110.0f, 90.0f);
    glVertex2f(110.0f, 215.0f);
    glVertex2f(109.0f, 215.0f);
    glEnd();

    //2nd window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(111.0f, 90.0f);
    glVertex2f(112.0f, 90.0f);
    glVertex2f(112.0f, 215.0f);
    glVertex2f(111.0f, 215.0f);
    glEnd();

    //3rd window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(113.0f, 90.0f);
    glVertex2f(114.0f, 90.0f);
    glVertex2f(114.0f, 215.0f);
    glVertex2f(113.0f, 215.0f);
    glEnd();

    //4th window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(115.0f, 90.0f);
    glVertex2f(116.0f, 90.0f);
    glVertex2f(116.0f, 215.0f);
    glVertex2f(115.0f, 215.0f);
    glEnd();

    //5th window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(117.0f, 90.0f);
    glVertex2f(118.0f, 90.0f);
    glVertex2f(118.0f, 215.0f);
    glVertex2f(117.0f, 215.0f);
    glEnd();

    //6th window
    glColor3ub(221, 160, 221); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(119.0f, 90.0f);
    glVertex2f(120.0f, 90.0f);
    glVertex2f(120.0f, 215.0f);
    glVertex2f(119.0f, 215.0f);
    glEnd();
}

void building_5_night() //Right side last building
{
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 80.0f);
    glVertex2f(161.0f, 80.0f);
    glVertex2f(161.0f, 250.0f);
    glVertex2f(140.0f, 250.0f);
    glEnd();

    //border
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 80.0f);
    glVertex2f(161.0f, 80.0f);
    glVertex2f(161.0f, 90.0f);
    glVertex2f(140.0f, 90.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 95.0f);
    glVertex2f(161.0f, 95.0f);
    glVertex2f(161.0f, 98.0f);
    glVertex2f(140.0f, 98.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 102.0f);
    glVertex2f(161.0f, 102.0f);
    glVertex2f(161.0f, 105.0f);
    glVertex2f(140.0f, 105.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 109.0f);
    glVertex2f(161.0f, 109.0f);
    glVertex2f(161.0f, 112.0f);
    glVertex2f(140.0f, 112.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 116.0f);
    glVertex2f(161.0f, 116.0f);
    glVertex2f(161.0f, 119.0f);
    glVertex2f(140.0f, 119.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 123.0f);
    glVertex2f(161.0f, 123.0f);
    glVertex2f(161.0f, 126.0f);
    glVertex2f(140.0f, 126.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 130.0f);
    glVertex2f(161.0f, 130.0f);
    glVertex2f(161.0f, 133.0f);
    glVertex2f(140.0f, 133.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 137.0f);
    glVertex2f(161.0f, 137.0f);
    glVertex2f(161.0f, 140.0f);
    glVertex2f(140.0f, 140.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 144.0f);
    glVertex2f(161.0f, 144.0f);
    glVertex2f(161.0f, 147.0f);
    glVertex2f(140.0f, 147.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 151.0f);
    glVertex2f(161.0f, 151.0f);
    glVertex2f(161.0f, 154.0f);
    glVertex2f(140.0f, 154.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 158.0f);
    glVertex2f(161.0f, 158.0f);
    glVertex2f(161.0f, 161.0f);
    glVertex2f(140.0f, 161.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 165.0f);
    glVertex2f(161.0f, 165.0f);
    glVertex2f(161.0f, 168.0f);
    glVertex2f(140.0f, 168.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 172.0f);
    glVertex2f(161.0f, 172.0f);
    glVertex2f(161.0f, 175.0f);
    glVertex2f(140.0f, 175.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 179.0f);
    glVertex2f(161.0f, 179.0f);
    glVertex2f(161.0f, 182.0f);
    glVertex2f(140.0f, 182.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 186.0f);
    glVertex2f(161.0f, 186.0f);
    glVertex2f(161.0f, 189.0f);
    glVertex2f(140.0f, 189.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 193.0f);
    glVertex2f(161.0f, 193.0f);
    glVertex2f(161.0f, 196.0f);
    glVertex2f(140.0f, 196.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 200.0f);
    glVertex2f(161.0f, 200.0f);
    glVertex2f(161.0f, 203.0f);
    glVertex2f(140.0f, 203.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 207.0f);
    glVertex2f(161.0f, 207.0f);
    glVertex2f(161.0f, 210.0f);
    glVertex2f(140.0f, 210.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 214.0f);
    glVertex2f(161.0f, 214.0f);
    glVertex2f(161.0f, 217.0f);
    glVertex2f(140.0f, 217.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 221.0f);
    glVertex2f(161.0f, 221.0f);
    glVertex2f(161.0f, 224.0f);
    glVertex2f(140.0f, 224.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 228.0f);
    glVertex2f(161.0f, 228.0f);
    glVertex2f(161.0f, 231.0f);
    glVertex2f(140.0f, 231.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 236.0f);
    glVertex2f(161.0f, 236.0f);
    glVertex2f(161.0f, 239.0f);
    glVertex2f(140.0f, 239.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 244.0f);
    glVertex2f(161.0f, 244.0f);
    glVertex2f(161.0f, 250.0f);
    glVertex2f(140.0f, 250.0f);
    glEnd();

    //Right shadow
    glColor3ub(0, 102, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(161.0f, 80.0f);
    glVertex2f(162.5f, 80.0f);
    glVertex2f(162.5f, 245.0f);
    glVertex2f(161.0f, 250.0f);
    glEnd();
}

void building_6_night()
{
    glColor3ub(233, 150, 122); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(130.0f, 75.0f);
    glVertex2f(149.0f, 75.0f);
    glVertex2f(149.0f, 200.0f);
    glVertex2f(130.0f, 200.0f);
    glEnd();

    //lower white border
    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(130.0f, 75.0f);
    glVertex2f(132.0f, 75.0f);
    glVertex2f(132.0f, 200.0f);
    glVertex2f(130.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(133.0f, 75.0f);
    glVertex2f(134.0f, 75.0f);
    glVertex2f(134.0f, 200.0f);
    glVertex2f(133.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(135.0f, 75.0f);
    glVertex2f(136.0f, 75.0f);
    glVertex2f(136.0f, 200.0f);
    glVertex2f(135.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(137.0f, 75.0f);
    glVertex2f(138.0f, 75.0f);
    glVertex2f(138.0f, 200.0f);
    glVertex2f(137.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(139.0f, 75.0f);
    glVertex2f(140.0f, 75.0f);
    glVertex2f(140.0f, 200.0f);
    glVertex2f(139.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(141.0f, 75.0f);
    glVertex2f(142.0f, 75.0f);
    glVertex2f(142.0f, 200.0f);
    glVertex2f(141.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(143.0f, 75.0f);
    glVertex2f(144.0f, 75.0f);
    glVertex2f(144.0f, 200.0f);
    glVertex2f(143.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(145.0f, 75.0f);
    glVertex2f(146.0f, 75.0f);
    glVertex2f(146.0f, 200.0f);
    glVertex2f(145.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(147.0f, 75.0f);
    glVertex2f(148.0f, 75.0f);
    glVertex2f(148.0f, 200.0f);
    glVertex2f(147.0f, 200.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(149.0f, 75.0f);
    glVertex2f(150.5f, 75.0f);
    glVertex2f(150.5f, 200.0f);
    glVertex2f(149.0f, 200.0f);
    glEnd();

    //Right shadow
    glColor3ub(250, 128, 114); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(150.5f, 75.0f);
    glVertex2f(151.5f, 75.0f);
    glVertex2f(151.5f, 195.0f);
    glVertex2f(150.5f, 200.0f);
    glEnd();

    //2nd building
    glColor3ub(233, 150, 122); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(132.0f, 200.0f);
    glVertex2f(149.0f, 200.0f);
    glVertex2f(149.0f, 300.0f);
    glVertex2f(132.0f, 300.0f);
    glEnd();

    //white border
    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(131.5f, 200.0f);
    glVertex2f(133.0f, 200.0f);
    glVertex2f(133.0f, 300.0f);
    glVertex2f(131.5f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(134.0f, 200.0f);
    glVertex2f(135.0f, 200.0f);
    glVertex2f(135.0f, 300.0f);
    glVertex2f(134.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(136.0f, 200.0f);
    glVertex2f(137.0f, 200.0f);
    glVertex2f(137.0f, 300.0f);
    glVertex2f(136.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(138.0f, 200.0f);
    glVertex2f(139.0f, 200.0f);
    glVertex2f(139.0f, 300.0f);
    glVertex2f(138.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, 200.0f);
    glVertex2f(141.0f, 200.0f);
    glVertex2f(141.0f, 300.0f);
    glVertex2f(140.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(142.0f, 200.0f);
    glVertex2f(143.0f, 200.0f);
    glVertex2f(143.0f, 300.0f);
    glVertex2f(142.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(144.0f, 200.0f);
    glVertex2f(145.0f, 200.0f);
    glVertex2f(145.0f, 300.0f);
    glVertex2f(144.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(146.0f, 200.0f);
    glVertex2f(147.0f, 200.0f);
    glVertex2f(147.0f, 300.0f);
    glVertex2f(146.0f, 300.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(148.0f, 200.0f);
    glVertex2f(149.5f, 200.0f);
    glVertex2f(149.5f, 300.0f);
    glVertex2f(148.0f, 300.0f);
    glEnd();

    //Right shadow
    glColor3ub(250, 128, 114); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(149.5f, 200.0f);
    glVertex2f(150.25f, 200.0f);
    glVertex2f(150.25f, 295.0f);
    glVertex2f(149.5f, 300.0f);
    glEnd();

    //3rd building
    glColor3ub(233, 150, 122); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(133.0f, 300.0f);
    glVertex2f(148.0f, 300.0f);
    glVertex2f(148.0f, 380.0f);
    glVertex2f(133.0f, 380.0f);
    glEnd();

    //White border
    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(132.5f, 300.0f);
    glVertex2f(134.0f, 300.0f);
    glVertex2f(134.0f, 380.0f);
    glVertex2f(132.5f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(135.0f, 300.0f);
    glVertex2f(136.0f, 300.0f);
    glVertex2f(136.0f, 380.0f);
    glVertex2f(135.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(137.0f, 300.0f);
    glVertex2f(138.0f, 300.0f);
    glVertex2f(138.0f, 380.0f);
    glVertex2f(137.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(139.0f, 300.0f);
    glVertex2f(140.0f, 300.0f);
    glVertex2f(140.0f, 380.0f);
    glVertex2f(139.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(141.0f, 300.0f);
    glVertex2f(142.0f, 300.0f);
    glVertex2f(142.0f, 380.0f);
    glVertex2f(141.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(143.0f, 300.0f);
    glVertex2f(144.0f, 300.0f);
    glVertex2f(144.0f, 380.0f);
    glVertex2f(143.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(145.0f, 300.0f);
    glVertex2f(146.0f, 300.0f);
    glVertex2f(146.0f, 380.0f);
    glVertex2f(145.0f, 380.0f);
    glEnd();

    glColor3ub(255, 255, 225); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(147.0f, 300.0f);
    glVertex2f(148.5f, 300.0f);
    glVertex2f(148.5f, 380.0f);
    glVertex2f(147.0f, 380.0f);
    glEnd();

    //Right shadow
    glColor3ub(250, 128, 114); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(148.5f, 300.0f);
    glVertex2f(149.25f, 300.0f);
    glVertex2f(149.25f, 375.0f);
    glVertex2f(148.5f, 380.0f);
    glEnd();
}

void building_7_night()
{
    glColor3ub(255, 255, 102); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(70.0f, 75.0f);
    glVertex2f(83.0f, 75.0f);
    glVertex2f(83.0f, 250.0f);
    glVertex2f(70.0f, 250.0f);
    glEnd();

    //left 1st line window
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 90.0f);
    glVertex2f(73.0f, 90.0f);
    glVertex2f(73.0f, 100.0f);
    glVertex2f(71.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 105.0f);
    glVertex2f(73.0f, 105.0f);
    glVertex2f(73.0f, 115.0f);
    glVertex2f(71.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 120.0f);
    glVertex2f(73.0f, 120.0f);
    glVertex2f(73.0f, 130.0f);
    glVertex2f(71.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 135.0f);
    glVertex2f(73.0f, 135.0f);
    glVertex2f(73.0f, 145.0f);
    glVertex2f(71.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 150.0f);
    glVertex2f(73.0f, 150.0f);
    glVertex2f(73.0f, 160.0f);
    glVertex2f(71.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 165.0f);
    glVertex2f(73.0f, 165.0f);
    glVertex2f(73.0f, 175.0f);
    glVertex2f(71.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 180.0f);
    glVertex2f(73.0f, 180.0f);
    glVertex2f(73.0f, 190.0f);
    glVertex2f(71.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 195.0f);
    glVertex2f(73.0f, 195.0f);
    glVertex2f(73.0f, 205.0f);
    glVertex2f(71.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 210.0f);
    glVertex2f(73.0f, 210.0f);
    glVertex2f(73.0f, 220.0f);
    glVertex2f(71.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(71.0f, 225.0f);
    glVertex2f(73.0f, 225.0f);
    glVertex2f(73.0f, 235.0f);
    glVertex2f(71.0f, 235.0f);
    glEnd();

    //left 2nd line
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 90.0f);
    glVertex2f(76.0f, 90.0f);
    glVertex2f(76.0f, 100.0f);
    glVertex2f(74.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 105.0f);
    glVertex2f(76.0f, 105.0f);
    glVertex2f(76.0f, 115.0f);
    glVertex2f(74.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 120.0f);
    glVertex2f(76.0f, 120.0f);
    glVertex2f(76.0f, 130.0f);
    glVertex2f(74.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 135.0f);
    glVertex2f(76.0f, 135.0f);
    glVertex2f(76.0f, 145.0f);
    glVertex2f(74.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 150.0f);
    glVertex2f(76.0f, 150.0f);
    glVertex2f(76.0f, 160.0f);
    glVertex2f(74.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 165.0f);
    glVertex2f(76.0f, 165.0f);
    glVertex2f(76.0f, 175.0f);
    glVertex2f(74.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 180.0f);
    glVertex2f(76.0f, 180.0f);
    glVertex2f(76.0f, 190.0f);
    glVertex2f(74.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 195.0f);
    glVertex2f(76.0f, 195.0f);
    glVertex2f(76.0f, 205.0f);
    glVertex2f(74.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 210.0f);
    glVertex2f(76.0f, 210.0f);
    glVertex2f(76.0f, 220.0f);
    glVertex2f(74.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(74.0f, 225.0f);
    glVertex2f(76.0f, 225.0f);
    glVertex2f(76.0f, 235.0f);
    glVertex2f(74.0f, 235.0f);
    glEnd();

    //3rd line window
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 90.0f);
    glVertex2f(79.0f, 90.0f);
    glVertex2f(79.0f, 100.0f);
    glVertex2f(77.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 105.0f);
    glVertex2f(79.0f, 105.0f);
    glVertex2f(79.0f, 115.0f);
    glVertex2f(77.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 120.0f);
    glVertex2f(79.0f, 120.0f);
    glVertex2f(79.0f, 130.0f);
    glVertex2f(77.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 135.0f);
    glVertex2f(79.0f, 135.0f);
    glVertex2f(79.0f, 145.0f);
    glVertex2f(77.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 150.0f);
    glVertex2f(79.0f, 150.0f);
    glVertex2f(79.0f, 160.0f);
    glVertex2f(77.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 165.0f);
    glVertex2f(79.0f, 165.0f);
    glVertex2f(79.0f, 175.0f);
    glVertex2f(77.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 180.0f);
    glVertex2f(79.0f, 180.0f);
    glVertex2f(79.0f, 190.0f);
    glVertex2f(77.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 195.0f);
    glVertex2f(79.0f, 195.0f);
    glVertex2f(79.0f, 205.0f);
    glVertex2f(77.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 210.0f);
    glVertex2f(79.0f, 210.0f);
    glVertex2f(79.0f, 220.0f);
    glVertex2f(77.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(77.0f, 225.0f);
    glVertex2f(79.0f, 225.0f);
    glVertex2f(79.0f, 235.0f);
    glVertex2f(77.0f, 235.0f);
    glEnd();

    //4th line window
    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 90.0f);
    glVertex2f(82.0f, 90.0f);
    glVertex2f(82.0f, 100.0f);
    glVertex2f(80.0f, 100.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 105.0f);
    glVertex2f(82.0f, 105.0f);
    glVertex2f(82.0f, 115.0f);
    glVertex2f(80.0f, 115.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 120.0f);
    glVertex2f(82.0f, 120.0f);
    glVertex2f(82.0f, 130.0f);
    glVertex2f(80.0f, 130.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 135.0f);
    glVertex2f(82.0f, 135.0f);
    glVertex2f(82.0f, 145.0f);
    glVertex2f(80.0f, 145.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 150.0f);
    glVertex2f(82.0f, 150.0f);
    glVertex2f(82.0f, 160.0f);
    glVertex2f(80.0f, 160.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 165.0f);
    glVertex2f(82.0f, 165.0f);
    glVertex2f(82.0f, 175.0f);
    glVertex2f(80.0f, 175.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 180.0f);
    glVertex2f(82.0f, 180.0f);
    glVertex2f(82.0f, 190.0f);
    glVertex2f(80.0f, 190.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 195.0f);
    glVertex2f(82.0f, 195.0f);
    glVertex2f(82.0f, 205.0f);
    glVertex2f(80.0f, 205.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 210.0f);
    glVertex2f(82.0f, 210.0f);
    glVertex2f(82.0f, 220.0f);
    glVertex2f(80.0f, 220.0f);
    glEnd();

    glColor3ub(51, 255, 153); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(80.0f, 225.0f);
    glVertex2f(82.0f, 225.0f);
    glVertex2f(82.0f, 235.0f);
    glVertex2f(80.0f, 235.0f);
    glEnd();

    //Right shadow
    glColor3ub(230, 200, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(83.0f, 75.0f);
    glVertex2f(84.0f, 75.0f);
    glVertex2f(84.0f, 240.0f);
    glVertex2f(83.0f, 250.0f);
    glEnd();

    //upper white box
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(72.0f, 250.0f);
    glVertex2f(76.0f, 250.0f);
    glVertex2f(76.0f, 265.0f);
    glVertex2f(72.0f, 265.0f);
    glEnd();

    //upper white box right shadow
    glColor3ub(128, 128, 128); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(76.0f, 250.0f);
    glVertex2f(76.5f, 250.0f);
    glVertex2f(76.5f, 260.0f);
    glVertex2f(76.0f, 265.0f);
    glEnd();
}

void cloud_night()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_cloud, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 22, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 30, y + 290);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 40, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 35, y + 312);
    }
    glEnd();
    glPopMatrix();
}

void cloud1_night()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_cloud1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 122, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 130, y + 290);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 140, y + 302);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(200, 200, 200);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 135, y + 312);
    }
    glEnd();
    glPopMatrix();
}

void moon()
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 255, 255);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 8.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 185, y + 292);
    }
    glEnd();
}

void boat_night()
{
    //body
    glColor3ub(139, 69, 19); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_boat, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(60.0f, -70.0f);
    glVertex2f(80.0f, -70.0f);
    glVertex2f(90.0f, -30.0f);
    glVertex2f(50.0f, -30.0f);
    glEnd();

    //boat pal holder
    glColor3ub(0, 0, 0);
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(60.0f, -30.0f);
    glVertex2f(60.0f, 50.0f);
    glEnd();

    //boat pal
    glColor3ub(138, 43, 226);
    glLineWidth(7.0f);
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(60.0f, -25.0f);
    glVertex2f(80.0f, -25.0f);
    glVertex2f(60.0f, 45.0f);
    glEnd();
    glPopMatrix();
}

void boat_1_night()
{
    //body
    glColor3ub(180, 35, 50); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_boat_1, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(120.0f, -85.0f);
    glVertex2f(140.0f, -85.0f);
    glVertex2f(150.0f, -45.0f);
    glVertex2f(110.0f, -45.0f);
    glEnd();

    //boat pal holder
    glColor3ub(0, 0, 0);
    glLineWidth(7.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, -45.0f);
    glVertex2f(140.0f, 35.0f);
    glEnd();

    //boat pal
    glColor3ub(240, 15, 130);
    glLineWidth(7.0f);
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(140.0f, -40.0f);
    glVertex2f(120.0f, -40.0f);
    glVertex2f(140.0f, 30.0f);
    glEnd();
    glPopMatrix();
}

void ship_night()
{
    //bottom red
    glColor3ub(230, 0, 0); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(10.0f, -170.0f);
    glVertex2f(110.0f, -170.0f);
    glVertex2f(110.0f, -140.0f);
    glVertex2f(10.0f, -140.0f);
    glEnd();

    //middle white
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(10.0f, -140.0f);
    glVertex2f(110.0f, -140.0f);
    glVertex2f(110.0f, -120.0f);
    glVertex2f(10.0f, -120.0f);
    glEnd();

    //deck room
    glColor3ub(65, 120, 170); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(18.0f, -120.0f);
    glVertex2f(40.0f, -120.0f);
    glVertex2f(40.0f, -50.0f);
    glVertex2f(18.0f, -50.0f);
    glEnd();

    //deck room 2D
    glColor3ub(68, 58, 130); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(40.0f, -120.0f);
    glVertex2f(41.0f, -120.0f);
    glVertex2f(41.0f, -50.0f);
    glVertex2f(40.0f, -50.0f);
    glEnd();

    //deck room first left window
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(245, 240, 175);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 22, y - 60);
    }
    glEnd();

    //deck room second left window
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(245, 240, 175);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 29, y - 60);
    }
    glEnd();

    //deck room third left window
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(245, 240, 175);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.8f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 36, y - 60);
    }
    glEnd();

    //control room
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(23.0f, -50.0f);
    glVertex2f(40.0f, -50.0f);
    glVertex2f(42.0f, 10.0f);
    glVertex2f(23.0f, 10.0f);
    glEnd();

    //control room 2D
    glColor3ub(120, 120, 120); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(40.0f, -50.0f);
    glVertex2f(41.0f, -50.0f);
    glVertex2f(42.0f, 10.0f);
    glVertex2f(41.0f, 10.0f);
    glEnd();

    //control room left first window
    glColor3ub(0, 200, 202); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(24.0f, -10.0f);
    glVertex2f(27.0f, -10.0f);
    glVertex2f(27.0f, 8.0f);
    glVertex2f(24.0f, 8.0f);
    glEnd();

    //control room left second window
    glColor3ub(0, 200, 202);// Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(28.0f, -10.0f);
    glVertex2f(31.0f, -10.0f);
    glVertex2f(31.0f, 8.0f);
    glVertex2f(28.0f, 8.0f);
    glEnd();

    //control room left third window
    glColor3ub(0, 200, 202); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(32.0f, -10.0f);
    glVertex2f(35.0f, -10.0f);
    glVertex2f(35.0f, 8.0f);
    glVertex2f(32.0f, 8.0f);
    glEnd();

    //control room left fourth window
    glColor3ub(0, 200, 202); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(36.0f, -10.0f);
    glVertex2f(39.5f, -10.0f);
    glVertex2f(40.0f, 8.0f);
    glVertex2f(36.0f, 8.0f);
    glEnd();

    //control room roof top
    glColor3ub(65, 120, 170); // Clear the color buffer (background)
    glLineWidth(12.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(21.0f, 10.0f);
    glVertex2f(43.0f, 10.0f);
    glEnd();

    //control room light holder
    glColor3ub(192, 192, 192); // Clear the color buffer (background)
    glLineWidth(8.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(33.0f, 13.0f);
    glVertex2f(33.0f, 55.0f);
    glEnd();

    //control room top light
    glColor3ub(255, 255, 0); // Clear the color buffer (background)
    glLineWidth(8.0f);
    glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(42.0f, 47.0f);
    glVertex2f(33.0f, 33.0f);
    glVertex2f(42.0f, 19.0f);
    glEnd();

    //exhaustor white part
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 15.0f);
    glVertex2f(30.0f, 15.0f);
    glVertex2f(30.0f, 40.0f);
    glVertex2f(25.0f, 40.0f);
    glEnd();

    //exhaustor black part
    glColor3ub(0, 0, 0); // Clear the color buffer (background)
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glVertex2f(25.0f, 40.0f);
    glVertex2f(30.0f, 40.0f);
    glVertex2f(30.0f, 45.0f);
    glVertex2f(25.0f, 50.0f);
    glEnd();

    //control room front glass
    glColor3ub(0, 200, 202); // Clear the color buffer (background)
    glLineWidth(6.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(41.0f, -16.0f);
    glVertex2f(41.5f, 2.0f);
    glEnd();

    //deck roof top
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glLineWidth(12.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(13.0f, -50.0f);
    glVertex2f(43.0f, -50.0f);
    glEnd();

    //deck roof top 2D
    glColor3ub(120, 120, 120); // Clear the color buffer (background)
    glLineWidth(12.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(43.0f, -50.0f);
    glVertex2f(44.0f, -50.0f);
    glEnd();

    //body to deck line1
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glLineWidth(15.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(14.0f, -100.0f);
    glVertex2f(14.0f, -50.0f);
    glEnd();

    //body to deck line2
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glLineWidth(10.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    glVertex2f(18.0f, -100.0f);
    glVertex2f(18.0f, -50.0f);
    glEnd();

    //upper white tail part
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(10.0f, -120.0f);
    glVertex2f(40.0f, -120.0f);
    glVertex2f(35.0f, -100.0f);
    glVertex2f(10.0f, -100.0f);
    glEnd();

    //upper white front part
    glColor3ub(245, 245, 245); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(85.0f, -120.0f);
    glVertex2f(110.0f, -120.0f);
    glVertex2f(120.0f, -90.0f);
    glVertex2f(90.0f, -90.0f);
    glEnd();
    glPopMatrix();
}

void containers_night()
{
    //left first container
    glColor3ub(0, 0, 245); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(45.0f, -120.0f);
    glVertex2f(62.0f, -120.0f);
    glVertex2f(62.0f, -85.0f);
    glVertex2f(45.0f, -85.0f);
    glEnd();

    //left first container 2D
    glColor3ub(0, 0, 100); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(62.0f, -85.0f);
    glVertex2f(63.0f, -85.0f);
    glVertex2f(63.0f, -120.0f);
    glVertex2f(62.0f, -120.0f);
    glEnd();

    //left second container
    glColor3ub(245, 160, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(65.0f, -120.0f);
    glVertex2f(82.0f, -120.0f);
    glVertex2f(82.0f, -85.0f);
    glVertex2f(65.0f, -85.0f);
    glEnd();

    //left second container 2D
    glColor3ub(150, 105, 0); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(82.0f, -85.0f);
    glVertex2f(83.0f, -85.0f);
    glVertex2f(83.0f, -120.0f);
    glVertex2f(82.0f, -120.0f);
    glEnd();

    //top container
    glColor3ub(245, 120, 75); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(56.5f, -85.0f);
    glVertex2f(73.5f, -85.0f);
    glVertex2f(73.5f, -50.0f);
    glVertex2f(56.5f, -50.0f);
    glEnd();

    //top container 2D
    glColor3ub(130, 70, 50); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(73.5f, -50.0f);
    glVertex2f(74.5f, -50.0f);
    glVertex2f(74.5f, -85.0f);
    glVertex2f(73.5f, -85.0f);
    glEnd();
    glPopMatrix();
}

//Windmill
//first blade
void first_blade_night()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(16.0f, 185.0f, 0.0f);
    glRotatef(angle_1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-16.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(15.0f, 178.0f);
    glVertex2f(17.0f, 178.0f);
    glVertex2f(17.0f, 192.0f);
    glVertex2f(15.0f, 192.0);
    glEnd();
    glPopMatrix();
}

//Windmill
//second blade
void second_blade_night()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(16.0f, 185.0f, 0.0f);
    glRotatef(angle_2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-16.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(9.0f, 184.0f);
    glVertex2f(23.0f, 184.0f);
    glVertex2f(23.0f, 186.0f);
    glVertex2f(9.0f, 186.0f);
    glEnd();
    glPopMatrix();
}

//windmill
void windmill_stand_night()
{
    glColor3ub(165, 42, 42);
    glBegin(GL_QUADS);
    glVertex2f(15.5f, 80.0f);
    glVertex2f(16.5f, 80.0f);
    glVertex2f(16.5f, 185.0f);
    glVertex2f(15.5f, 185.0f);
    glEnd();
}

//second Windmill
//first blade
void right_first_blade_night()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(33.0f, 185.0f, 0.0f);
    glRotatef(angle_1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-33.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(32.0f, 178.0f);
    glVertex2f(34.0f, 178.0f);
    glVertex2f(34.0f, 192.0f);
    glVertex2f(32.0f, 192.0);
    glEnd();
    glPopMatrix();
}

//Windmill
//second blade
void right_second_blade_night()
{
    glColor3ub(165, 42, 42);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(33.0f, 185.0f, 0.0f);
    glRotatef(angle_2, 0.0f, 0.0f, 1.0f);
    glTranslatef(-33.0f, -185.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(26.0f, 184.0f);
    glVertex2f(40.0f, 184.0f);
    glVertex2f(40.0f, 186.0f);
    glVertex2f(26.0f, 186.0f);
    glEnd();
    glPopMatrix();
}

//windmill
void right_windmill_stand_night()
{
    glColor3ub(165, 42, 42);
    glBegin(GL_QUADS);
    glVertex2f(32.5f, 80.0f);
    glVertex2f(33.5f, 80.0f);
    glVertex2f(33.5f, 185.0f);
    glVertex2f(32.5f, 185.0f);
    glEnd();
}

//Airplane
void air_plane_night()
{
    //main body
    glColor3ub(60, 95, 215);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_airplane, 0.0f, 0.0f);//for move
    glBegin(GL_QUADS);
    glVertex2f(160.0f, 318.0f);
    glVertex2f(183.0f, 318.0f);
    glVertex2f(183.0f, 343.0f);
    glVertex2f(160.0f, 343.0f);
    glEnd();

    //body light
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(159.5f, 314.5f);
    glVertex2f(160.5f, 314.5f);
    glVertex2f(160.5f, 318.0f);
    glVertex2f(159.5f, 318.0f);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(178.0f, 314.5f);
    glVertex2f(179.0f, 314.5f);
    glVertex2f(179.0f, 318.0f);
    glVertex2f(178.0f, 318.0f);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(180.0f, 314.5f);
    glVertex2f(181.0f, 314.5f);
    glVertex2f(181.0f, 318.0f);
    glVertex2f(180.0f, 318.0f);
    glEnd();

    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(183.0f, 358.5f);
    glVertex2f(184.0f, 358.5f);
    glVertex2f(184.0f, 364.0f);
    glVertex2f(183.0f, 364.0f);
    glEnd();

    //front part bottom
    glColor3ub(70, 0, 115);
    glBegin(GL_QUADS);
    glVertex2f(160.0f, 330.5f);
    glVertex2f(155.0f, 330.5f);
    glVertex2f(158.0f, 318.0f);
    glVertex2f(160.0f, 318.0f);
    glEnd();

    //front part upper
    glColor3ub(70, 0, 115);
    glBegin(GL_QUADS);
    glVertex2f(155.0f, 330.5f);
    glVertex2f(160.0f, 330.5f);
    glVertex2f(160.0f, 343.0f);
    glVertex2f(158.0f, 343.0f);
    glEnd();

    //left wings
    glColor3ub(245, 155, 0);
    glBegin(GL_QUADS);
    glVertex2f(163.0f, 330.5f);
    glVertex2f(168.0f, 298.0f);
    glVertex2f(173.0f, 295.0f);
    glVertex2f(168.0f, 330.5f);
    glEnd();

    //left wing light
    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(169.0f, 300.0f);
    glVertex2f(167.5f, 300.0f);
    glVertex2f(167.5f, 295.0f);
    glVertex2f(169.0f, 295.0f);
    glEnd();

    //right wings
    glColor3ub(245, 155, 0);
    glBegin(GL_QUADS);
    glVertex2f(165.0f, 343.0f);
    glVertex2f(170.0f, 343.0f);
    glVertex2f(173.0f, 363.0f);
    glVertex2f(168.0f, 360.5f);
    glEnd();

    //right wing light
    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(169.0f, 363.0f);
    glVertex2f(167.5f, 363.0f);
    glVertex2f(167.5f, 358.0f);
    glVertex2f(169.0f, 358.0f);
    glEnd();

    //tail
    glColor3ub(245, 155, 0);
    glBegin(GL_QUADS);
    glVertex2f(178.0f, 343.0f);
    glVertex2f(183.0f, 343.0f);
    glVertex2f(183.0f, 365.0f);
    glVertex2f(181.0f, 365.5f);
    glEnd();
    glPopMatrix();
}

void speed_board_night()
{
    //deck
    glColor3ub(0, 0, 128);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_speed_boat, 0.0f, 0.0f);//for move
    glBegin(GL_QUADS);
    glVertex2f(135.0f, -44.0f);
    glVertex2f(167.0f, -60.0f);
    glVertex2f(164.0f, -30.0f);
    glVertex2f(140.0f, -10.0f);
    glEnd();

    //windows
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(137.0f, -39.0f);
    glVertex2f(165.0f, -51.0f);
    glVertex2f(163.0f, -34.0f);
    glVertex2f(141.0f, -15.0f);
    glEnd();

    //window line
    glColor3ub(0, 0, 128);
    glLineWidth(8.0f);
    glBegin(GL_LINES);
    glVertex2f(145.0f, -52.0f);
    glVertex2f(145.0f, -16.0f);
    glVertex2f(151.0f, -52.0f);
    glVertex2f(151.0f, -19.0f);
    glVertex2f(157.0f, -52.0f);
    glVertex2f(157.0f, -25.5f);
    glEnd();

    //middle body
    glColor3ub(141, 162, 2);
    glBegin(GL_QUADS);
    glVertex2f(132.0f, -85.0f);
    glVertex2f(173.0f, -85.0f);
    glVertex2f(177.0f, -60.0f);
    glVertex2f(123.0f, -38.0f);
    glEnd();

    //bottom body
    glColor3ub(0, 0, 128);
    glBegin(GL_QUADS);
    glVertex2f(135.0f, -105.0f);
    glVertex2f(170.0f, -105.0f);
    glVertex2f(173.0f, -85.0f);
    glVertex2f(130.0f, -76.0f);
    glEnd();
    glPopMatrix();
}
//NIGHT END


//RAIN START
void sky_rain()
{
    glColor3ub(36, 52, 71);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0.0f, 80.0f);
    glVertex2f(200.0f, 80.0f);
    glVertex2f(200.0f, 400.0f);
    glVertex2f(0.0f, 400.0f);
    glEnd();
}

void rainCloud()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y + 350);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7, y + 390);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 7, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 15, y + 360);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 20, y + 382);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 30, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 35, y + 360);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 33, y + 390);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 40, y + 382);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 45, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 20, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 5, y + 378);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 97, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 107, y + 390);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 85, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 90, y + 378);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 107, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 115, y + 360);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 125, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 120, y + 382);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 130, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 135, y + 360);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 133, y + 390);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 140, y + 382);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 145, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 120, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(180, 180, 180);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 105, y + 378);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 47, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 57, y + 370);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 35, y + 352);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 40, y + 358);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 57, y + 352);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 65, y + 340);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 75, y + 352);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 70, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 80, y + 352);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 85, y + 340);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 83, y + 370);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 90, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 95, y + 352);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 70, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 55, y + 358);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 157, y + 367);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 167, y + 365);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 145, y + 347);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 150, y + 353);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 167, y + 347);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 175, y + 335);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 185, y + 347);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 180, y + 357);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 190, y + 347);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 195, y + 335);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 193, y + 365);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 200, y + 357);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 180, y + 367);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 165, y + 353);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 57, y + 382);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 67, y + 380);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 45, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 50, y + 368);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 67, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 75, y + 350);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 85, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 80, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 90, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 95, y + 350);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 93, y + 380);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 100, y + 372);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 105, y + 362);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 80, y + 382);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(170, 170, 170);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 65, y + 368);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 57, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 67, y + 395);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 45, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 50, y + 383);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 67, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 75, y + 365);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 85, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 80, y + 387);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 90, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 95, y + 365);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 93, y + 395);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 100, y + 387);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 105, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 80, y + 397);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 65, y + 383);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 157, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 167, y + 395);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 145, y + 392);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 150, y + 383);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 167, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 11.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 175, y + 365);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 185, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 180, y + 387);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 190, y + 377);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 195, y + 365);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 9.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 193, y + 395);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 200, y + 387);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 180, y + 397);
    }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(160, 160, 160);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 10.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 165, y + 383);
    }
    glEnd();
    glPopMatrix();
}

void rainDrops()
{
    glLineWidth(1.0f);
    glColor3ub(255, 255, 255);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_rain, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(1, 330); glVertex2f(0, 320); glVertex2f(1, 300); glVertex2f(0, 290); glVertex2f(1, 270); glVertex2f(0, 260); glVertex2f(1, 240); glVertex2f(0, 230); glVertex2f(1, 210); glVertex2f(0, 200); glVertex2f(1, 180); glVertex2f(0, 170); glVertex2f(1, 150); glVertex2f(0, 140); glVertex2f(1, 120); glVertex2f(0, 110); glVertex2f(1, 90); glVertex2f(0, 80); glVertex2f(1, 60); glVertex2f(0, 50); glVertex2f(1, 30); glVertex2f(0, 20); glVertex2f(1, 0); glVertex2f(0, -10); glVertex2f(1, -30); glVertex2f(0, -40); glVertex2f(1, -60); glVertex2f(0, -70); glVertex2f(1, -90); glVertex2f(0, -100); glVertex2f(1, -120); glVertex2f(0, -130); glVertex2f(1, -150); glVertex2f(0, -160); glVertex2f(1, -180); glVertex2f(0, -190);
    glVertex2f(7, 315); glVertex2f(6, 305); glVertex2f(7, 285); glVertex2f(6, 275); glVertex2f(7, 255); glVertex2f(6, 245); glVertex2f(7, 225); glVertex2f(6, 215); glVertex2f(7, 195); glVertex2f(6, 185); glVertex2f(7, 165); glVertex2f(6, 155); glVertex2f(7, 135); glVertex2f(6, 125); glVertex2f(7, 105); glVertex2f(6, 95); glVertex2f(7, 75); glVertex2f(6, 65); glVertex2f(7, 45); glVertex2f(6, 35); glVertex2f(7, 15); glVertex2f(6, 5); glVertex2f(7, -15); glVertex2f(6, -25); glVertex2f(7, -45); glVertex2f(6, -55); glVertex2f(7, -75); glVertex2f(6, -85); glVertex2f(7, -105); glVertex2f(6, -115); glVertex2f(7, -135); glVertex2f(6, -145); glVertex2f(7, -165); glVertex2f(6, -175);
    glVertex2f(13, 330); glVertex2f(12, 320); glVertex2f(13, 300); glVertex2f(12, 290); glVertex2f(13, 270); glVertex2f(12, 260); glVertex2f(13, 240); glVertex2f(12, 230); glVertex2f(13, 210); glVertex2f(12, 200); glVertex2f(13, 180); glVertex2f(12, 170); glVertex2f(13, 150); glVertex2f(12, 140); glVertex2f(13, 120); glVertex2f(12, 110); glVertex2f(13, 90); glVertex2f(12, 80); glVertex2f(13, 60); glVertex2f(12, 50); glVertex2f(13, 30); glVertex2f(12, 20); glVertex2f(13, 0); glVertex2f(12, -10); glVertex2f(13, -30); glVertex2f(12, -40); glVertex2f(13, -60); glVertex2f(12, -70); glVertex2f(13, -90); glVertex2f(12, -100); glVertex2f(13, -120); glVertex2f(12, -130); glVertex2f(13, -150); glVertex2f(12, -160); glVertex2f(13, -180); glVertex2f(12, -190);
    glVertex2f(19, 315); glVertex2f(18, 305); glVertex2f(19, 285); glVertex2f(18, 275); glVertex2f(19, 255); glVertex2f(18, 245); glVertex2f(19, 225); glVertex2f(18, 215); glVertex2f(19, 195); glVertex2f(18, 185); glVertex2f(19, 165); glVertex2f(18, 155); glVertex2f(19, 135); glVertex2f(18, 125); glVertex2f(19, 105); glVertex2f(18, 95); glVertex2f(19, 75); glVertex2f(18, 65); glVertex2f(19, 45); glVertex2f(18, 35); glVertex2f(19, 15); glVertex2f(18, 5); glVertex2f(19, -15); glVertex2f(18, -25); glVertex2f(19, -45); glVertex2f(18, -55); glVertex2f(19, -75); glVertex2f(18, -85); glVertex2f(19, -105); glVertex2f(18, -115); glVertex2f(19, -135); glVertex2f(18, -145); glVertex2f(19, -165); glVertex2f(18, -175);
    glVertex2f(25, 330); glVertex2f(24, 320); glVertex2f(25, 300); glVertex2f(24, 290); glVertex2f(25, 270); glVertex2f(24, 260); glVertex2f(25, 240); glVertex2f(24, 230); glVertex2f(25, 210); glVertex2f(24, 200); glVertex2f(25, 180); glVertex2f(24, 170); glVertex2f(25, 150); glVertex2f(24, 140); glVertex2f(25, 120); glVertex2f(24, 110); glVertex2f(25, 90); glVertex2f(24, 80); glVertex2f(25, 60); glVertex2f(24, 50); glVertex2f(25, 30); glVertex2f(24, 20); glVertex2f(25, 0); glVertex2f(24, -10); glVertex2f(25, -30); glVertex2f(24, -40); glVertex2f(25, -60); glVertex2f(24, -70); glVertex2f(25, -90); glVertex2f(24, -100); glVertex2f(25, -120); glVertex2f(24, -130); glVertex2f(25, -150); glVertex2f(24, -160); glVertex2f(25, -180); glVertex2f(24, -190);
    glVertex2f(31, 315); glVertex2f(30, 305); glVertex2f(31, 285); glVertex2f(30, 275); glVertex2f(31, 255); glVertex2f(30, 245); glVertex2f(31, 225); glVertex2f(30, 215); glVertex2f(31, 195); glVertex2f(30, 185); glVertex2f(31, 165); glVertex2f(30, 155); glVertex2f(31, 135); glVertex2f(30, 125); glVertex2f(31, 105); glVertex2f(30, 95); glVertex2f(31, 75); glVertex2f(30, 65); glVertex2f(31, 45); glVertex2f(30, 35); glVertex2f(31, 15); glVertex2f(30, 5); glVertex2f(31, -15); glVertex2f(30, -25); glVertex2f(31, -45); glVertex2f(30, -55); glVertex2f(31, -75); glVertex2f(30, -85); glVertex2f(31, -105); glVertex2f(30, -115); glVertex2f(31, -135); glVertex2f(30, -145); glVertex2f(31, -165); glVertex2f(30, -175);
    glVertex2f(37, 330); glVertex2f(36, 320); glVertex2f(37, 300); glVertex2f(36, 290); glVertex2f(37, 270); glVertex2f(36, 260); glVertex2f(37, 240); glVertex2f(36, 230); glVertex2f(37, 210); glVertex2f(36, 200); glVertex2f(37, 180); glVertex2f(36, 170); glVertex2f(37, 150); glVertex2f(36, 140); glVertex2f(37, 120); glVertex2f(36, 110); glVertex2f(37, 90); glVertex2f(36, 80); glVertex2f(37, 60); glVertex2f(36, 50); glVertex2f(37, 30); glVertex2f(36, 20); glVertex2f(37, 0); glVertex2f(36, -10); glVertex2f(37, -30); glVertex2f(36, -40); glVertex2f(37, -60); glVertex2f(36, -70); glVertex2f(37, -90); glVertex2f(36, -100); glVertex2f(37, -120); glVertex2f(36, -130); glVertex2f(37, -150); glVertex2f(36, -160); glVertex2f(37, -180); glVertex2f(36, -190);
    glVertex2f(43, 315); glVertex2f(42, 305); glVertex2f(43, 285); glVertex2f(42, 275); glVertex2f(43, 255); glVertex2f(42, 245); glVertex2f(43, 225); glVertex2f(42, 215); glVertex2f(43, 195); glVertex2f(42, 185); glVertex2f(43, 165); glVertex2f(42, 155); glVertex2f(43, 135); glVertex2f(42, 125); glVertex2f(43, 105); glVertex2f(42, 95); glVertex2f(43, 75); glVertex2f(42, 65); glVertex2f(43, 45); glVertex2f(42, 35); glVertex2f(43, 15); glVertex2f(42, 5); glVertex2f(43, -15); glVertex2f(42, -25); glVertex2f(43, -45); glVertex2f(42, -55); glVertex2f(43, -75); glVertex2f(42, -85); glVertex2f(43, -105); glVertex2f(42, -115); glVertex2f(43, -135); glVertex2f(42, -145); glVertex2f(43, -165); glVertex2f(42, -175);
    glVertex2f(49, 330); glVertex2f(48, 320); glVertex2f(49, 300); glVertex2f(48, 290); glVertex2f(49, 270); glVertex2f(48, 260); glVertex2f(49, 240); glVertex2f(48, 230); glVertex2f(49, 210); glVertex2f(48, 200); glVertex2f(49, 180); glVertex2f(48, 170); glVertex2f(49, 150); glVertex2f(48, 140); glVertex2f(49, 120); glVertex2f(48, 110); glVertex2f(49, 90); glVertex2f(48, 80); glVertex2f(49, 60); glVertex2f(48, 50); glVertex2f(49, 30); glVertex2f(48, 20); glVertex2f(49, 0); glVertex2f(48, -10); glVertex2f(49, -30); glVertex2f(48, -40); glVertex2f(49, -60); glVertex2f(48, -70); glVertex2f(49, -90); glVertex2f(48, -100); glVertex2f(49, -120); glVertex2f(48, -130); glVertex2f(49, -150); glVertex2f(48, -160); glVertex2f(49, -180); glVertex2f(48, -190);
    glVertex2f(55, 315); glVertex2f(54, 305); glVertex2f(55, 285); glVertex2f(54, 275); glVertex2f(55, 255); glVertex2f(54, 245); glVertex2f(55, 225); glVertex2f(54, 215); glVertex2f(55, 195); glVertex2f(54, 185); glVertex2f(55, 165); glVertex2f(54, 155); glVertex2f(55, 135); glVertex2f(54, 125); glVertex2f(55, 105); glVertex2f(54, 95); glVertex2f(55, 75); glVertex2f(54, 65); glVertex2f(55, 45); glVertex2f(54, 35); glVertex2f(55, 15); glVertex2f(54, 5); glVertex2f(55, -15); glVertex2f(54, -25); glVertex2f(55, -45); glVertex2f(54, -55); glVertex2f(55, -75); glVertex2f(54, -85); glVertex2f(55, -105); glVertex2f(54, -115); glVertex2f(55, -135); glVertex2f(54, -145); glVertex2f(55, -165); glVertex2f(54, -175);
    glVertex2f(61, 330); glVertex2f(60, 320); glVertex2f(61, 300); glVertex2f(60, 290); glVertex2f(61, 270); glVertex2f(60, 260); glVertex2f(61, 240); glVertex2f(60, 230); glVertex2f(61, 210); glVertex2f(60, 200); glVertex2f(61, 180); glVertex2f(60, 170); glVertex2f(61, 150); glVertex2f(60, 140); glVertex2f(61, 120); glVertex2f(60, 110); glVertex2f(61, 90); glVertex2f(60, 80); glVertex2f(61, 60); glVertex2f(60, 50); glVertex2f(61, 30); glVertex2f(60, 20); glVertex2f(61, 0); glVertex2f(60, -10); glVertex2f(61, -30); glVertex2f(60, -40); glVertex2f(61, -60); glVertex2f(60, -70); glVertex2f(61, -90); glVertex2f(60, -100); glVertex2f(61, -120); glVertex2f(60, -130); glVertex2f(61, -150); glVertex2f(60, -160); glVertex2f(61, -180); glVertex2f(60, -190);
    glVertex2f(67, 315); glVertex2f(66, 305); glVertex2f(67, 285); glVertex2f(66, 275); glVertex2f(67, 255); glVertex2f(66, 245); glVertex2f(67, 225); glVertex2f(66, 215); glVertex2f(67, 195); glVertex2f(66, 185); glVertex2f(67, 165); glVertex2f(66, 155); glVertex2f(67, 135); glVertex2f(66, 125); glVertex2f(67, 105); glVertex2f(66, 95); glVertex2f(67, 75); glVertex2f(66, 65); glVertex2f(67, 45); glVertex2f(66, 35); glVertex2f(67, 15); glVertex2f(66, 5); glVertex2f(67, -15); glVertex2f(66, -25); glVertex2f(67, -45); glVertex2f(66, -55); glVertex2f(67, -75); glVertex2f(66, -85); glVertex2f(67, -105); glVertex2f(66, -115); glVertex2f(67, -135); glVertex2f(66, -145); glVertex2f(67, -165); glVertex2f(66, -175);
    glVertex2f(73, 330); glVertex2f(72, 320); glVertex2f(73, 300); glVertex2f(72, 290); glVertex2f(73, 270); glVertex2f(72, 260); glVertex2f(73, 240); glVertex2f(72, 230); glVertex2f(73, 210); glVertex2f(72, 200); glVertex2f(73, 180); glVertex2f(72, 170); glVertex2f(73, 150); glVertex2f(72, 140); glVertex2f(73, 120); glVertex2f(72, 110); glVertex2f(73, 90); glVertex2f(72, 80); glVertex2f(73, 60); glVertex2f(72, 50); glVertex2f(73, 30); glVertex2f(72, 20); glVertex2f(73, 0); glVertex2f(72, -10); glVertex2f(73, -30); glVertex2f(72, -40); glVertex2f(73, -60); glVertex2f(72, -70); glVertex2f(73, -90); glVertex2f(72, -100); glVertex2f(73, -120); glVertex2f(72, -130); glVertex2f(73, -150); glVertex2f(72, -160); glVertex2f(73, -180); glVertex2f(72, -190);
    glVertex2f(79, 315); glVertex2f(78, 305); glVertex2f(79, 285); glVertex2f(78, 275); glVertex2f(79, 255); glVertex2f(78, 245); glVertex2f(79, 225); glVertex2f(78, 215); glVertex2f(79, 195); glVertex2f(78, 185); glVertex2f(79, 165); glVertex2f(78, 155); glVertex2f(79, 135); glVertex2f(78, 125); glVertex2f(79, 105); glVertex2f(78, 95); glVertex2f(79, 75); glVertex2f(78, 65); glVertex2f(79, 45); glVertex2f(78, 35); glVertex2f(79, 15); glVertex2f(78, 5); glVertex2f(79, -15); glVertex2f(78, -25); glVertex2f(79, -45); glVertex2f(78, -55); glVertex2f(79, -75); glVertex2f(78, -85); glVertex2f(79, -105); glVertex2f(78, -115); glVertex2f(79, -135); glVertex2f(78, -145); glVertex2f(79, -165); glVertex2f(78, -175);
    glVertex2f(85, 315); glVertex2f(84, 305); glVertex2f(85, 285); glVertex2f(84, 275); glVertex2f(85, 255); glVertex2f(84, 245); glVertex2f(85, 225); glVertex2f(84, 215); glVertex2f(85, 195); glVertex2f(84, 185); glVertex2f(85, 165); glVertex2f(84, 155); glVertex2f(85, 135); glVertex2f(84, 125); glVertex2f(85, 105); glVertex2f(84, 95); glVertex2f(85, 75); glVertex2f(84, 65); glVertex2f(85, 45); glVertex2f(84, 35); glVertex2f(85, 15); glVertex2f(84, 5); glVertex2f(85, -15); glVertex2f(84, -25); glVertex2f(85, -45); glVertex2f(84, -55); glVertex2f(85, -75); glVertex2f(84, -85); glVertex2f(85, -105); glVertex2f(84, -115); glVertex2f(85, -135); glVertex2f(84, -145); glVertex2f(85, -165); glVertex2f(84, -175);
    glVertex2f(91, 330); glVertex2f(90, 320); glVertex2f(91, 300); glVertex2f(90, 290); glVertex2f(91, 270); glVertex2f(90, 260); glVertex2f(91, 240); glVertex2f(90, 230); glVertex2f(91, 210); glVertex2f(90, 200); glVertex2f(91, 180); glVertex2f(90, 170); glVertex2f(91, 150); glVertex2f(90, 140); glVertex2f(91, 120); glVertex2f(90, 110); glVertex2f(91, 90); glVertex2f(90, 80); glVertex2f(91, 60); glVertex2f(90, 50); glVertex2f(91, 30); glVertex2f(90, 20); glVertex2f(91, 0); glVertex2f(90, -10); glVertex2f(91, -30); glVertex2f(90, -40); glVertex2f(91, -60); glVertex2f(90, -70); glVertex2f(91, -90); glVertex2f(90, -100); glVertex2f(91, -120); glVertex2f(90, -130); glVertex2f(91, -150); glVertex2f(90, -160); glVertex2f(91, -180); glVertex2f(90, -190);
    glVertex2f(97, 315); glVertex2f(96, 305); glVertex2f(97, 285); glVertex2f(96, 275); glVertex2f(97, 255); glVertex2f(96, 245); glVertex2f(97, 225); glVertex2f(96, 215); glVertex2f(97, 195); glVertex2f(96, 185); glVertex2f(97, 165); glVertex2f(96, 155); glVertex2f(97, 135); glVertex2f(96, 125); glVertex2f(97, 105); glVertex2f(96, 95); glVertex2f(97, 75); glVertex2f(96, 65); glVertex2f(97, 45); glVertex2f(96, 35); glVertex2f(97, 15); glVertex2f(96, 5); glVertex2f(97, -15); glVertex2f(96, -25); glVertex2f(97, -45); glVertex2f(96, -55); glVertex2f(97, -75); glVertex2f(96, -85); glVertex2f(97, -105); glVertex2f(96, -115); glVertex2f(97, -135); glVertex2f(96, -145); glVertex2f(97, -165); glVertex2f(96, -175);
    glVertex2f(103, 330); glVertex2f(102, 320); glVertex2f(103, 300); glVertex2f(102, 290); glVertex2f(103, 270); glVertex2f(102, 260); glVertex2f(103, 240); glVertex2f(102, 230); glVertex2f(103, 210); glVertex2f(102, 200); glVertex2f(103, 180); glVertex2f(102, 170); glVertex2f(103, 150); glVertex2f(102, 140); glVertex2f(103, 120); glVertex2f(102, 110); glVertex2f(103, 90); glVertex2f(102, 80); glVertex2f(103, 60); glVertex2f(102, 50); glVertex2f(103, 30); glVertex2f(102, 20); glVertex2f(103, 0); glVertex2f(102, -10); glVertex2f(103, -30); glVertex2f(102, -40); glVertex2f(103, -60); glVertex2f(102, -70); glVertex2f(103, -90); glVertex2f(102, -100); glVertex2f(103, -120); glVertex2f(102, -130); glVertex2f(103, -150); glVertex2f(102, -160); glVertex2f(103, -180); glVertex2f(102, -190);
    glVertex2f(109, 315); glVertex2f(108, 305); glVertex2f(109, 285); glVertex2f(108, 275); glVertex2f(109, 255); glVertex2f(108, 245); glVertex2f(109, 225); glVertex2f(108, 215); glVertex2f(109, 195); glVertex2f(108, 185); glVertex2f(109, 165); glVertex2f(108, 155); glVertex2f(109, 135); glVertex2f(108, 125); glVertex2f(109, 105); glVertex2f(108, 95); glVertex2f(109, 75); glVertex2f(108, 65); glVertex2f(109, 45); glVertex2f(108, 35); glVertex2f(109, 15); glVertex2f(108, 5); glVertex2f(109, -15); glVertex2f(108, -25); glVertex2f(109, -45); glVertex2f(108, -55); glVertex2f(109, -75); glVertex2f(108, -85); glVertex2f(109, -105); glVertex2f(108, -115); glVertex2f(109, -135); glVertex2f(108, -145); glVertex2f(109, -165); glVertex2f(108, -175);
    glVertex2f(115, 315); glVertex2f(114, 305); glVertex2f(115, 285); glVertex2f(114, 275); glVertex2f(115, 255); glVertex2f(114, 245); glVertex2f(115, 225); glVertex2f(114, 215); glVertex2f(115, 195); glVertex2f(114, 185); glVertex2f(115, 165); glVertex2f(114, 155); glVertex2f(115, 135); glVertex2f(114, 125); glVertex2f(115, 105); glVertex2f(114, 95); glVertex2f(115, 75); glVertex2f(114, 65); glVertex2f(115, 45); glVertex2f(114, 35); glVertex2f(115, 15); glVertex2f(114, 5); glVertex2f(115, -15); glVertex2f(114, -25); glVertex2f(115, -45); glVertex2f(114, -55); glVertex2f(115, -75); glVertex2f(114, -85); glVertex2f(115, -105); glVertex2f(114, -115); glVertex2f(115, -135); glVertex2f(114, -145); glVertex2f(115, -165); glVertex2f(114, -175);
    glVertex2f(121, 330); glVertex2f(120, 320); glVertex2f(121, 300); glVertex2f(120, 290); glVertex2f(121, 270); glVertex2f(120, 260); glVertex2f(121, 240); glVertex2f(120, 230); glVertex2f(121, 210); glVertex2f(120, 200); glVertex2f(121, 180); glVertex2f(120, 170); glVertex2f(121, 150); glVertex2f(120, 140); glVertex2f(121, 120); glVertex2f(120, 110); glVertex2f(121, 90); glVertex2f(120, 80); glVertex2f(121, 60); glVertex2f(120, 50); glVertex2f(121, 30); glVertex2f(120, 20); glVertex2f(121, 0); glVertex2f(120, -10); glVertex2f(121, -30); glVertex2f(120, -40); glVertex2f(121, -60); glVertex2f(120, -70); glVertex2f(121, -90); glVertex2f(120, -100); glVertex2f(121, -120); glVertex2f(120, -130); glVertex2f(121, -150); glVertex2f(120, -160); glVertex2f(121, -180); glVertex2f(120, -190);
    glVertex2f(127, 315); glVertex2f(126, 305); glVertex2f(127, 285); glVertex2f(126, 275); glVertex2f(127, 255); glVertex2f(126, 245); glVertex2f(127, 225); glVertex2f(126, 215); glVertex2f(127, 195); glVertex2f(126, 185); glVertex2f(127, 165); glVertex2f(126, 155); glVertex2f(127, 135); glVertex2f(126, 125); glVertex2f(127, 105); glVertex2f(126, 95); glVertex2f(127, 75); glVertex2f(126, 65); glVertex2f(127, 45); glVertex2f(126, 35); glVertex2f(127, 15); glVertex2f(126, 5); glVertex2f(127, -15); glVertex2f(126, -25); glVertex2f(127, -45); glVertex2f(126, -55); glVertex2f(127, -75); glVertex2f(126, -85); glVertex2f(127, -105); glVertex2f(126, -115); glVertex2f(127, -135); glVertex2f(126, -145); glVertex2f(127, -165); glVertex2f(126, -175);
    glVertex2f(133, 330); glVertex2f(132, 320); glVertex2f(133, 300); glVertex2f(132, 290); glVertex2f(133, 270); glVertex2f(132, 260); glVertex2f(133, 240); glVertex2f(132, 230); glVertex2f(133, 210); glVertex2f(132, 200); glVertex2f(133, 180); glVertex2f(132, 170); glVertex2f(133, 150); glVertex2f(132, 140); glVertex2f(133, 120); glVertex2f(132, 110); glVertex2f(133, 90); glVertex2f(132, 80); glVertex2f(133, 60); glVertex2f(132, 50); glVertex2f(133, 30); glVertex2f(132, 20); glVertex2f(133, 0); glVertex2f(132, -10); glVertex2f(133, -30); glVertex2f(132, -40); glVertex2f(133, -60); glVertex2f(132, -70); glVertex2f(133, -90); glVertex2f(132, -100); glVertex2f(133, -120); glVertex2f(132, -130); glVertex2f(133, -150); glVertex2f(132, -160); glVertex2f(133, -180); glVertex2f(132, -190);
    glVertex2f(139, 315); glVertex2f(138, 305); glVertex2f(139, 285); glVertex2f(138, 275); glVertex2f(139, 255); glVertex2f(138, 245); glVertex2f(139, 225); glVertex2f(138, 215); glVertex2f(139, 195); glVertex2f(138, 185); glVertex2f(139, 165); glVertex2f(138, 155); glVertex2f(139, 135); glVertex2f(138, 125); glVertex2f(139, 105); glVertex2f(138, 95); glVertex2f(139, 75); glVertex2f(138, 65); glVertex2f(139, 45); glVertex2f(138, 35); glVertex2f(139, 15); glVertex2f(138, 5); glVertex2f(139, -15); glVertex2f(138, -25); glVertex2f(139, -45); glVertex2f(138, -55); glVertex2f(139, -75); glVertex2f(138, -85); glVertex2f(139, -105); glVertex2f(138, -115); glVertex2f(139, -135); glVertex2f(138, -145); glVertex2f(139, -165); glVertex2f(138, -175);
    glVertex2f(145, 315); glVertex2f(144, 305); glVertex2f(145, 285); glVertex2f(144, 275); glVertex2f(145, 255); glVertex2f(144, 245); glVertex2f(145, 225); glVertex2f(144, 215); glVertex2f(145, 195); glVertex2f(144, 185); glVertex2f(145, 165); glVertex2f(144, 155); glVertex2f(145, 135); glVertex2f(144, 125); glVertex2f(145, 105); glVertex2f(144, 95); glVertex2f(145, 75); glVertex2f(144, 65); glVertex2f(145, 45); glVertex2f(144, 35); glVertex2f(145, 15); glVertex2f(144, 5); glVertex2f(145, -15); glVertex2f(144, -25); glVertex2f(145, -45); glVertex2f(144, -55); glVertex2f(145, -75); glVertex2f(144, -85); glVertex2f(145, -105); glVertex2f(144, -115); glVertex2f(145, -135); glVertex2f(144, -145); glVertex2f(145, -165); glVertex2f(144, -175);
    glVertex2f(151, 330); glVertex2f(150, 320); glVertex2f(151, 300); glVertex2f(150, 290); glVertex2f(151, 270); glVertex2f(150, 260); glVertex2f(151, 240); glVertex2f(150, 230); glVertex2f(151, 210); glVertex2f(150, 200); glVertex2f(151, 180); glVertex2f(150, 170); glVertex2f(151, 150); glVertex2f(150, 140); glVertex2f(151, 120); glVertex2f(150, 110); glVertex2f(151, 90); glVertex2f(150, 80); glVertex2f(151, 60); glVertex2f(150, 50); glVertex2f(151, 30); glVertex2f(150, 20); glVertex2f(151, 0); glVertex2f(150, -10); glVertex2f(151, -30); glVertex2f(150, -40); glVertex2f(151, -60); glVertex2f(150, -70); glVertex2f(151, -90); glVertex2f(150, -100); glVertex2f(151, -120); glVertex2f(150, -130); glVertex2f(151, -150); glVertex2f(150, -160); glVertex2f(151, -180); glVertex2f(150, -190);
    glVertex2f(157, 315); glVertex2f(156, 305); glVertex2f(157, 285); glVertex2f(156, 275); glVertex2f(157, 255); glVertex2f(156, 245); glVertex2f(157, 225); glVertex2f(156, 215); glVertex2f(157, 195); glVertex2f(156, 185); glVertex2f(157, 165); glVertex2f(156, 155); glVertex2f(157, 135); glVertex2f(156, 125); glVertex2f(157, 105); glVertex2f(156, 95); glVertex2f(157, 75); glVertex2f(156, 65); glVertex2f(157, 45); glVertex2f(156, 35); glVertex2f(157, 15); glVertex2f(156, 5); glVertex2f(157, -15); glVertex2f(156, -25); glVertex2f(157, -45); glVertex2f(156, -55); glVertex2f(157, -75); glVertex2f(156, -85); glVertex2f(157, -105); glVertex2f(156, -115); glVertex2f(157, -135); glVertex2f(156, -145); glVertex2f(157, -165); glVertex2f(156, -175);
    glVertex2f(163, 330); glVertex2f(162, 320); glVertex2f(163, 300); glVertex2f(162, 290); glVertex2f(163, 270); glVertex2f(162, 260); glVertex2f(163, 240); glVertex2f(162, 230); glVertex2f(163, 210); glVertex2f(162, 200); glVertex2f(163, 180); glVertex2f(162, 170); glVertex2f(163, 150); glVertex2f(162, 140); glVertex2f(163, 120); glVertex2f(162, 110); glVertex2f(163, 90); glVertex2f(162, 80); glVertex2f(163, 60); glVertex2f(162, 50); glVertex2f(163, 30); glVertex2f(162, 20); glVertex2f(163, 0); glVertex2f(162, -10); glVertex2f(163, -30); glVertex2f(162, -40); glVertex2f(163, -60); glVertex2f(162, -70); glVertex2f(163, -90); glVertex2f(162, -100); glVertex2f(163, -120); glVertex2f(162, -130); glVertex2f(163, -150); glVertex2f(162, -160); glVertex2f(163, -180); glVertex2f(162, -190);
    glVertex2f(169, 315); glVertex2f(168, 305); glVertex2f(169, 285); glVertex2f(168, 275); glVertex2f(169, 255); glVertex2f(168, 245); glVertex2f(169, 225); glVertex2f(168, 215); glVertex2f(169, 195); glVertex2f(168, 185); glVertex2f(169, 165); glVertex2f(168, 155); glVertex2f(169, 135); glVertex2f(168, 125); glVertex2f(169, 105); glVertex2f(168, 95); glVertex2f(169, 75); glVertex2f(168, 65); glVertex2f(169, 45); glVertex2f(168, 35); glVertex2f(169, 15); glVertex2f(168, 5); glVertex2f(169, -15); glVertex2f(168, -25); glVertex2f(169, -45); glVertex2f(168, -55); glVertex2f(169, -75); glVertex2f(168, -85); glVertex2f(169, -105); glVertex2f(168, -115); glVertex2f(169, -135); glVertex2f(168, -145); glVertex2f(169, -165); glVertex2f(168, -175);
    glVertex2f(175, 315); glVertex2f(174, 305); glVertex2f(175, 285); glVertex2f(174, 275); glVertex2f(175, 255); glVertex2f(174, 245); glVertex2f(175, 225); glVertex2f(174, 215); glVertex2f(175, 195); glVertex2f(174, 185); glVertex2f(175, 165); glVertex2f(174, 155); glVertex2f(175, 135); glVertex2f(174, 125); glVertex2f(175, 105); glVertex2f(174, 95); glVertex2f(175, 75); glVertex2f(174, 65); glVertex2f(175, 45); glVertex2f(174, 35); glVertex2f(175, 15); glVertex2f(174, 5); glVertex2f(175, -15); glVertex2f(174, -25); glVertex2f(175, -45); glVertex2f(174, -55); glVertex2f(175, -75); glVertex2f(174, -85); glVertex2f(175, -105); glVertex2f(174, -115); glVertex2f(175, -135); glVertex2f(174, -145); glVertex2f(175, -165); glVertex2f(174, -175);
    glVertex2f(181, 330); glVertex2f(180, 320); glVertex2f(181, 300); glVertex2f(180, 290); glVertex2f(181, 270); glVertex2f(180, 260); glVertex2f(181, 240); glVertex2f(180, 230); glVertex2f(181, 210); glVertex2f(180, 200); glVertex2f(181, 180); glVertex2f(180, 170); glVertex2f(181, 150); glVertex2f(180, 140); glVertex2f(181, 120); glVertex2f(180, 110); glVertex2f(181, 90); glVertex2f(180, 80); glVertex2f(181, 60); glVertex2f(180, 50); glVertex2f(181, 30); glVertex2f(180, 20); glVertex2f(181, 0); glVertex2f(180, -10); glVertex2f(181, -30); glVertex2f(180, -40); glVertex2f(181, -60); glVertex2f(180, -70); glVertex2f(181, -90); glVertex2f(180, -100); glVertex2f(181, -120); glVertex2f(180, -130); glVertex2f(181, -150); glVertex2f(180, -160); glVertex2f(181, -180); glVertex2f(180, -190);
    glVertex2f(187, 315); glVertex2f(186, 305); glVertex2f(187, 285); glVertex2f(186, 275); glVertex2f(187, 255); glVertex2f(186, 245); glVertex2f(187, 225); glVertex2f(186, 215); glVertex2f(187, 195); glVertex2f(186, 185); glVertex2f(187, 165); glVertex2f(186, 155); glVertex2f(187, 135); glVertex2f(186, 125); glVertex2f(187, 105); glVertex2f(186, 95); glVertex2f(187, 75); glVertex2f(186, 65); glVertex2f(187, 45); glVertex2f(186, 35); glVertex2f(187, 15); glVertex2f(186, 5); glVertex2f(187, -15); glVertex2f(186, -25); glVertex2f(187, -45); glVertex2f(186, -55); glVertex2f(187, -75); glVertex2f(186, -85); glVertex2f(187, -105); glVertex2f(186, -115); glVertex2f(187, -135); glVertex2f(186, -145); glVertex2f(187, -165); glVertex2f(186, -175);
    glVertex2f(193, 330); glVertex2f(192, 320); glVertex2f(193, 300); glVertex2f(192, 290); glVertex2f(193, 270); glVertex2f(192, 260); glVertex2f(193, 240); glVertex2f(192, 230); glVertex2f(193, 210); glVertex2f(192, 200); glVertex2f(193, 180); glVertex2f(192, 170); glVertex2f(193, 150); glVertex2f(192, 140); glVertex2f(193, 120); glVertex2f(192, 110); glVertex2f(193, 90); glVertex2f(192, 80); glVertex2f(193, 60); glVertex2f(192, 50); glVertex2f(193, 30); glVertex2f(192, 20); glVertex2f(193, 0); glVertex2f(192, -10); glVertex2f(193, -30); glVertex2f(192, -40); glVertex2f(193, -60); glVertex2f(192, -70); glVertex2f(193, -90); glVertex2f(192, -100); glVertex2f(193, -120); glVertex2f(192, -130); glVertex2f(193, -150); glVertex2f(192, -160); glVertex2f(193, -180); glVertex2f(192, -190);
    glVertex2f(199, 315); glVertex2f(198, 305); glVertex2f(199, 285); glVertex2f(198, 275); glVertex2f(199, 255); glVertex2f(198, 245); glVertex2f(199, 225); glVertex2f(198, 215); glVertex2f(199, 195); glVertex2f(198, 185); glVertex2f(199, 165); glVertex2f(198, 155); glVertex2f(199, 135); glVertex2f(198, 125); glVertex2f(199, 105); glVertex2f(198, 95); glVertex2f(199, 75); glVertex2f(198, 65); glVertex2f(199, 45); glVertex2f(198, 35); glVertex2f(199, 15); glVertex2f(198, 5); glVertex2f(199, -15); glVertex2f(198, -25); glVertex2f(199, -45); glVertex2f(198, -55); glVertex2f(199, -75); glVertex2f(198, -85); glVertex2f(199, -105); glVertex2f(198, -115); glVertex2f(199, -135); glVertex2f(198, -145); glVertex2f(199, -165); glVertex2f(198, -175);
    glEnd();
    glPopMatrix();
}
//RAIN END


//all update start from here
//left windmill first blade
void update_blade_1(int value)
{
    angle_1 += 2.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update_blade_1, 0); //Notify GLUT to call update again in 25 milliseconds
}

//windmill second blade
void update_blade_2(int value)
{
    angle_2 += 2.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update_blade_2, 0); //Notify GLUT to call update again in 25 milliseconds
}

//right windmill first blade
void update_right_blade_1(int value)
{
    right_angle_1 += 2.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update_right_blade_1, 0); //Notify GLUT to call update again in 25 milliseconds
}

//windmill second blade
void update_right_blade_2(int value)
{
    right_angle_2 += 2.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update_right_blade_2, 0); //Notify GLUT to call update again in 25 milliseconds
}

//ship and container movement
void update_ship_container(int value)
{
    move_ship_container += 0.5; //assume as moving speed
    if (move_ship_container > 190) //boundary for the positive x axis for last part of the box
    {
        move_ship_container = -120;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(25, update_ship_container, 0);
}

//boat update
void update_boat(int value)
{
    move_boat -= 0.5; //assume as moving speed
    if (move_boat < -90) //boundary for the positive x negative for last part of the box
    {
        move_boat = 150;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(35, update_boat, 0);
}

//boat_1 update
void update_boat_1(int value)
{
    move_boat_1 += 0.5; //assume as moving speed
    if (move_boat_1 > 90) //boundary for the positive x negative for last part of the box
    {
        move_boat_1 = -150;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(35, update_boat_1, 0);
}

//speed boat update
void update_speed_boat(int value)
{
    move_speed_boat -= 0.5; //assume as moving speed
    if (move_speed_boat < -177) //boundary for the positive x negative for last part of the box
    {
        move_speed_boat = 77;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(8, update_speed_boat, 0);
}

//airplane movement
void update_airplane(int value)
{
    move_airplane -= 0.5; //assume as moving speed
    if (move_airplane < -183) //boundary for the positive x negative for last part of the box
    {
        move_airplane = 45;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(10, update_airplane, 0);
}

//left car movement
void update_left_car(int value)
{
    move_left_car += 0.5; //assume as moving speed
    if (move_left_car > 195) //boundary for the positive x negative for last part of the box
    {
        move_left_car = -23;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(10, update_left_car, 0);
}

//left car_1 movement
void update_left_car_1(int value)
{
    move_left_car_1 += 0.5; //assume as moving speed
    if (move_left_car_1 > 95) //boundary for the positive x negative for last part of the box
    {
        move_left_car_1 = -123;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(10, update_left_car_1, 0);
}

//right car movement
void update_right_car(int value)
{
    move_right_car -= 0.5; //assume as moving speed
    if (move_right_car < -195) //boundary for the positive x negative for last part of the box
    {
        move_right_car = 24;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(10, update_right_car, 0);
}

//right car_1 movement
void update_right_car_1(int value)
{
    move_right_car_1 -= 0.5; //assume as moving speed
    if (move_right_car_1 < -95) //boundary for the positive x negative for last part of the box
    {
        move_right_car_1 = 124;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(10, update_right_car_1, 0);
}

//move cloud
void update_cloud(int value)
{
    move_cloud += 0.5; //assume as moving speed
    if (move_cloud > 185.5) //boundary for the positive x axis for last part of the box
    {
        move_cloud = -46;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(50, update_cloud, 0);
}

//move cloud1
void update_cloud1(int value)
{
    move_cloud1 += 0.5; //assume as moving speed
    if (move_cloud1 > 85.5) //boundary for the positive x axis for last part of the box
    {
        move_cloud1 = -146;//reappear the box
    }
    glutPostRedisplay();
    glutTimerFunc(50, update_cloud1, 0);
}

//wave update
void update_wave(int value)
{
    move_wave += 0.5; //assume as moving speed
    if (move_wave > 13) //water layer -35 |-45+13=-32
    {
        move_wave = -20;//-32+20=-52 then start form -52
    }
    glutPostRedisplay();
    glutTimerFunc(40, update_wave, 0);
}

//move rain
void update_rain(int value)
{
    move_rain += 0.5;
    if (move_rain > 5)
    {
        move_rain = 0;
    }
    glutPostRedisplay();
    glutTimerFunc(10, update_rain, 0);
}

void identity_axis()
{
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(0, 200, -200, 400); //resize the axis size
}


//FOR DAY
void day()
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    tree();
    road();
    water();
    beach_bench();
    wave();
    first_blade();
    second_blade();
    windmill_stand();
    right_first_blade();
    right_second_blade();
    right_windmill_stand();
    sun();
    cloud();
    cloud1();
    air_plane();
    building_1();
    building_2();
    building_3();
    building_4();
    building_5();
    building_6();
    building_7();
    bench();
    lamppost();
    left_car();
    left_car_1();
    right_car();
    right_car_1();
    umbrella();
    boat();
    boat_1();
    speed_board();
    ship();
    containers();
    glFlush(); // Render now
}


//FOR NIGHT
void night()
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky_night();
    tree_night();
    road_night();
    water_night();
    beach_bench_night();
    wave_night();
    first_blade_night();
    second_blade_night();
    windmill_stand_night();
    right_first_blade_night();
    right_second_blade_night();
    right_windmill_stand_night();
    moon();
    cloud_night();
    cloud1_night();
    air_plane_night();
    building_1_night();
    building_2_night();
    building_3_night();
    building_4_night();
    building_5_night();
    building_6_night();
    building_7_night();
    bench_night();
    lamppost_night();
    left_car_night();
    left_car_1_night();
    right_car_night();
    right_car_1_night();
    umbrella();
    boat_night();
    boat_1_night();
    speed_board_night();
    ship_night();
    containers_night();
    glFlush(); // Render now
}


//FOR RAIN
void rain()
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky_rain();
    tree_night();
    road_night();
    water_night();
    beach_bench_night();
    wave_night();
    first_blade_night();
    second_blade_night();
    windmill_stand_night();
    right_first_blade_night();
    right_second_blade_night();
    right_windmill_stand_night();
    rainCloud();
    building_1_night();
    building_2_night();
    building_3_night();
    building_4_night();
    building_5_night();
    building_6_night();
    building_7_night();
    bench_night();
    lamppost_night();
    left_car_night();
    left_car_1_night();
    right_car_night();
    right_car_1_night();
    umbrella();
    boat_night();
    boat_1_night();
    speed_board_night();
    ship_night();
    containers_night();
    rainDrops();
    glFlush(); // Render now
}


void handleKeypress(unsigned char key, int x, int y)
{
    switch (key) {

    case 'd':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;

    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;

    case 'r':
        glutDisplayFunc(rain);
        glutPostRedisplay();
        break;

    case 'q':
        exit(0);
    }

    if (key == '1')
    {
        sndPlaySound(L"water.wav", SND_ASYNC);
    }
    if (key == '2')
    {
        sndPlaySound(L"ship-horn.wav", SND_ASYNC);
    }
    if (key == '3')
    {
        sndPlaySound(L"wind.wav", SND_ASYNC);
    }
    if (key == '4')
    {
        sndPlaySound(L"rain.wav", SND_ASYNC);
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutCreateWindow("Seaport City View");
    glutInitWindowSize(800, 400);// Set the window's initial width & height
    glutDisplayFunc(day);// Register display callback handler for window re-paint
    glutKeyboardFunc(handleKeypress);
    identity_axis();

    glutTimerFunc(25, update_ship_container, 0); //Add a timer
    glutTimerFunc(20, update_blade_1, 0); //Add a timer
    glutTimerFunc(20, update_blade_2, 0); //Add a timer
    glutTimerFunc(20, update_right_blade_1, 0); //Add a timer
    glutTimerFunc(20, update_right_blade_2, 0); //Add a timer
    glutTimerFunc(20, update_airplane, 0);
    glutTimerFunc(10, update_left_car, 0);
    glutTimerFunc(10, update_left_car_1, 0);
    glutTimerFunc(10, update_right_car, 0);
    glutTimerFunc(10, update_right_car_1, 0);
    glutTimerFunc(50, update_cloud, 0);
    glutTimerFunc(50, update_cloud1, 0);
    glutTimerFunc(10, update_rain, 0);
    glutTimerFunc(40, update_wave, 0);
    glutTimerFunc(35, update_boat, 0);
    glutTimerFunc(35, update_boat_1, 0);
    glutTimerFunc(8, update_speed_boat, 0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
