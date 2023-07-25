#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode; // gdriver stands for graph driver
 // DETECT is a macro in the header file that detects the graph driver dynamically
 // gmode stands for graphics mode that generates the image using pixels
   int xmax, ymax; // Maximum coordinates of window (x,y)
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, ""); // Initializes a graphic system by loading a graphics driver from disk
  // then putting the system into graphics mode
   /* read result of initialization */
   errorcode = graphresult(); // graphresult returns the error code for the last graphics operation
  // that reported an error and resets the error level to grOk (No error)
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   setcolor(getmaxcolor());
   xmax = getmaxx(); // getmaxx returns the maximum x value for the current graphics driver and mode.
   ymax = getmaxy(); // getmaxy returns the maximum y value for the current graphics driver and mode.
   /* draw a diagonal line */
   line(0, 0, xmax, ymax); // Draws a line having 4 parameters (0, 0, xmax, ymax)
   /* clean up */
   getch(); // Used to pause the screen till the user hits any button
   closegraph(); // Closes the graph mode and deallocates all the allocated memory
   return 0;
}

