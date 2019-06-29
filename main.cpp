#include <iostream>
#include "window.h"
#include "button.h"
#include "text.h"

int main(int argc, const char** argv) {
  
  coreui::Window* win =
    new coreui::Window(
      coreui::Button(
        new coreui::Text("My Button")
      ).id("[Button]").padding(20)
    );
  
  std::cout << win->title("Hello, Window!") << std::endl;
  
  return 0;
}
