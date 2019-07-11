#include <iostream>
#include "window.h"
#include "button.h"
#include "text.h"

int main(int argc, const char** argv) {
  
  auto window = new coreui::Window();
  window->title("My Window");
  {
    coreui::Button().id("1");
    {
      coreui::Text("My button").padding(10);
    }
  }
  
  return 0;
}
