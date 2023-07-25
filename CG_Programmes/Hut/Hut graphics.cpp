#include<graphics.h>
int main()
{
 /* request auto detection */
 int gd = DETECT, gm; // gd stands for graph driver
                      // DETECT is a macro in the header file that detects the graph driver dynamically
                      // gm stands for graphics mode that generates the image using pixels
 /* initialize graphics and local variables  */
 initgraph(&gd, &gm,(char*) ""); // Initializes a graphic system by loading a graphics driver from disk
                          // then putting the system into graphics mode
 rectangle(150,180,250,300); // This function draws a rectangle (Door Wall) taking co-ordinates as left, top, right, and bottom
 rectangle(250,180,420,300); // Rectangle to form Window-wall
 rectangle(180,250,220,300); // Rectangle to form Door
 rectangle(300,200,370,250); // Rectangle to form Window
 /* Draws a line having 4 parameters (x1, y1, x2, y2) */
 line(200,100,150,180); // Used
 line(200,100,250,180); // to
 line(200,100,370,100); // draw
 line(370,100,420,180); // roof
 setfillstyle(SOLID_FILL, RED); // setfillstyle() function which sets the current fill pattern and fill color
 floodfill(152, 182, WHITE); // floodfill() function is used to fill an enclosed area
 floodfill(252, 182, WHITE);
 setfillstyle(SLASH_FILL, YELLOW);
 floodfill(182, 252, WHITE);
 setfillstyle(SOLID_FILL, GREEN);
 floodfill(300, 252, WHITE);
 setfillstyle(HATCH_FILL, CYAN);
 floodfill(200, 105, WHITE);
 floodfill(210, 105, WHITE);
 /* clean up */
 getch(); // Used to pause the screen till the user hits any button
 closegraph(); // Closes the graph mode and deallocates all the allocated memory
 return 0;
}

