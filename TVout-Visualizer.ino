#include <TVout.h>
TVout TV;
int reading;
int avrReading;

int values[120] = {};
void setup() {
  TV.begin(_PAL, 120, 96);
}

void loop() {
  for (int i = 0; i < 121; i++) {

    values[i] = map(analogRead(A5), 0, 1024, 0, 96);
      //      TV.draw_line(i - 1, 70 - values[i - 1], i, 70 - values[i], 1); // good one
      //      TV.draw_line(i - 1, 26 + values[i - 1], i, 26 + values[i], 1);

      TV.draw_line(i, 90, i, 90 - values[i], 1);
      //      TV.draw_line(i, 48, i, 48 + values[i], 1);
  }
//  delay(700);
  TV.draw_rect(0, 0, 120, 96, 0, 0);



  //  for (int i = 0; i < 121; i++) {
  //
  //    values[i] = map(analogRead(A5), 0, 1024, 0, 96);
  //    //    TV.set_pixel(i, 96 - values[i], 1);
  //    //    TV.set_pixel(i, values[i], 1);
  //    if (i > 0) {
  //      TV.draw_line(i - 1, 48 - values[i - 1], i, 48 - values[i], 1);
  //      TV.draw_line(i - 1, 48 + values[i - 1], i, 48 + values[i], 1);
  //
  //    }
  //  }
  //  TV.draw_rect(0, 0, 120, 96, 0, 0);
  //  delay(5);
}
