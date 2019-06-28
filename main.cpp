#include <iostream>
#include "window.h"

int main(int argc, const char** argv) {
  coreui::Window *win = new coreui::Window("Hello, CoreUI!");
  std::cout << "Title: " << win->title()
    << ", Width: " << win->width()
    << ", Height: " << win->height() << std::endl;

  
  return 0;
}
