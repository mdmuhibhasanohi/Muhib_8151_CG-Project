#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;

int main()
{
    int Choice;
    cout << "-----PROGRAM ----\n\n";
    cout << " 1.Car \n 2.Name ID \n 3.Cycle \n 4.Emoji \n 5.Flag \n 6.Home";
    cout << "\n=============================\n";
    while(1)
    {
        cout << "\nEnter your Choice:";
        cin  >> Choice;
        cout << "The Current program:\n";

        switch (Choice)
        {
        case 1:
            {


            int gd=DETECT,gm;
    initwindow(1000,1200,"House");

    line(0,390,639,398);

    line(50,370,90,370);
    arc(110,370,0,100,20);
    line(130,370,220,370);
    arc(240,370,0,180,20);
    line(260,370,300,370);
    line(300,370,300,350);
    line(300,350,240,330);
    line(240,330,200,300);
    line(200,300,110,300);
    line(110,300,80,330);
    line(80,330,50,340);
    line(50,340,50,370);


    line(180,300,180,330);
    line(165,330,230,330);
    line(230,330,195,305);
    line(195,305,165,305);

    line(160,305,160,330);
    line(160,330,95,330);
    line(95,330,120,305);
    line(120,305,160,305);

    circle(110,370,17);
    circle(240,370,17);





    getch();
    closegraph();
            }
            break;
        case 2:
          {

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //For O
    line(50,50,70,50);
    line(50,50,50,90);
    line(70,90,50,90);
    line(70,50,70,90);

    //For H
    line(85,50,85,90);
    line(105,50,105,90);
    line(85,70,105,70);



    //For I
    line(120,50,120,90);
    line(115,50,125,50);
    line(115,90,125,90);



    //For C
    line(50,110,50,150);
    line(50,110,70,110);
    line(50,150,70,150);

    //For S
    line(85,110,105,110);
    line(85,110,85,130);
    line(85,130,105,130);
    line(105,130,105,150);
    line(105,150,85,150);

    //For E
    line(120,110,120,150);
    line(120,110,135,110);
    line(120,130,135,130);
    line(120,150,135,150);

    //For 1
    line(150,110,150,150);

    //For 9
    line(160,110,180,110);
    line(180,110,180,130);
    line(160,110,160,130);
    line(160,130,180,130);
    line(180,130,180,150);

    //For 0
    line(195,110,195,150);
    line(195,110,215,110);
    line(195,150,215,150);
    line(215,110,215,150);

    //For 3
    line(250,110,250,150);
    line(230,110,250,110);
    line(230,130,250,130);
    line(230,150,250,150);


    //For 0
    line(260,110,260,150);
    line(260,110,275,110);
    line(260,150,275,150);
    line(275,110,275,150);

    //For 1
    line(290,110,290,150);

    //For 8
    line(310,110,330,110);
    line(330,110,330,130);
    line(310,110,310,130);
    line(310,130,330,130);
    line(330,130,330,150);
    line(310,130,310,150);
    line(310,150,330,150);


    //For 1
    line(345,110,345,150);

    //For 5
    line(365,110,365,130);
    line(365,110,385,110);
    line(365,130,385,130);
    line(385,130,385,150);
    line(365,150,385,150);
    line(365,150,365,145);

    //For 1
    line(395,110,395,150);






    getch();
    closegraph();
          }
            break;
        case 3:
            {
    int gd=DETECT,gm;
    initwindow(1000,1200,"House");

    //road

    line(10,401,630,401);

    //wheels
    circle(40,370,30);
    circle(150,370,30);

    line(40,370,100,370);
    line(40,370,60,340);
    line(100,370,120,340);
    line(120,340,60,335);
    line(60,340,60,335);
    line(55,335,65,335);

    line(150,370,100,320);
    line(100,320,90,320);


    getch();
}
            break;
        case 4:
            {   int gd=DETECT,gm;

    initgraph(&gd,&gm,"");
    initwindow(800,600,"Emoji");

    setcolor(BLUE);
    circle(400,350,150);
    setfillstyle(1,YELLOW);
    floodfill(410,360,BLUE);

    setcolor(RED);
    circle(350,300,30);
    setfillstyle(1,WHITE);
    floodfill(360,310,RED);

    setcolor(RED);
    circle(350,300,15);
    setfillstyle(1,BLACK);
    floodfill(360,310,RED);

    setcolor(RED);
    circle(450,300,30);
    setfillstyle(1,WHITE);
    floodfill(460,310,RED);

    setcolor(RED);
    circle(450,300,15);
    setfillstyle(1,BLACK);
    floodfill(460,310,RED);

    setcolor(RED);
    rectangle(390,330,410,370);
    setfillstyle(1,WHITE);
    floodfill(402,347,RED);

    setcolor(RED);
    arc(400,350,190,350,80);
    setfillstyle(1,BLACK);
    floodfill(402,347,RED);

    getch();
    closegraph();
    return 0;
}
            break;
        case 5:
            {
    int gd=DETECT,gm;
    initwindow(1000,1200,"House");

    setcolor(GREEN);
    rectangle(50,50,220,150);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);

    setcolor(WHITE);
    rectangle(40,40,50,300);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(41,41,WHITE);

    setcolor(RED);
    circle(130,100,30);
    setfillstyle(SOLID_FILL,RED);
    floodfill(131,101,RED);








    getch();
}
            break;
        case 6:
            {
    int gd=DETECT,gm;
    initwindow(1000,1200,"House");

    //home


    line(150,250,150,450);
    line(450,250,450,450);
    line(150,450,450,450);
    line(150,250,450,250);

    //Roof

    line(150,250,300,175);
    line(300,175,450,250);



    //Gate

    line(270,280,330,280);
    line(270,430,330,430);

    line(270,280,270,430);
    line(330,280,330,430);

    //first window

    line(170,310,220,310);
    line(170,360,220,360);
    line(170,310,170,360);
    line(220,310,220,360);

    //2nd window

    line(430,310,380,310);
    line(430,360,380,360);
    line(430,310,430,360);
    line(380,310,380,360);







    getch();
}
            break;

        default :
            cout << "SORRY.INVALID INPUT!!!";
            break;

        }
    }

    return 0;
}
