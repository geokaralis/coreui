//
//  window.cpp
//  coreui
//
//  Created by George on 28/06/2019.
//

#include "window.h"

namespace coreui {

std::string Window::title() {
  return _title;
}
  
std::string Window::title(std::string title) {
  return _title = title;
}
  
int Window::width() {
  return _width;
}
  
int Window::height() {
  return _height;
}
  
Window::Window(std::string title) : _title(title) {}
    
Window::Window(int width, int height) : _width(width), _height(height) {}
    
Window::Window(std::string title, int width, int height) : _title(title), _width(width), _height(height) {}
    
} // namespace coreui
