#include <iostream>
#include "window.h"
#include "button.h"
#include "text.h"

int main(int argc, const char** argv) {
  
  auto window = new coreui::Window();
  window->title("CoreUI");
  {
    coreui::Button* button = new coreui::Button("Button");
    window->add(button);
    {
      coreui::Text* label = new coreui::Text("Hello, World!");
      button->add(label);
    }
  }
  
  return 0;
}
