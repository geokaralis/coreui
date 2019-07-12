//
//  window.cpp
//  coreui
//
//  Created by George on 29/06/2019.
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
  
  View* Window::view() {
    return _view;
  }
  
  View* Window::view(View* view) {
    return _view = view;
  }
  
  Window& Window::add(View* view) {
    return *this;
  }
  
  Window::Window(std::string title) : _title(title) {}
  
  Window::Window(int width, int height) : _width(width), _height(height) {}
  
  Window::Window(std::string title, int width, int height) : _title(title), _width(width), _height(height) {}
  
  Window::Window(View* view) : _view(view) {}
  
  Window::Window(View view) {}
  
  Window::Window() {
    showNativeWindow();
  }
}
