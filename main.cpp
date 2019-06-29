#include <iostream>
#include "window.h"
#include "button.h"
#include "text.h"

int main(int argc, const char** argv) {
  
  coreui::Window* win =
    new coreui::Window(
      new coreui::Button(
        new coreui::Text("Hello")
      )
    );
  
  auto window = new coreui::Window();
  window->title("My Window");
  {
    coreui::Button().id("1");
    {
      coreui::Text("My button").padding(10);
    }
  }
  
  std::cout << win->view() << std::endl;
  
  return 0;
}
