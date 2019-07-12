//
//  view.cpp
//  coreui
//
//  Created by George on 29/06/2019.
//

#include "view.h"

namespace coreui {
  std::string View::id() {
    return _id;
  }
  
  View& View::padding(int padding) {
    _padding = padding;
    return *this;
  }
  
  View& View::id(std::string id) {
    _id = id;
    return *this;
  }
  
  View& View::add(View* view) {
    _view = view;
    return *this;
  }
  
  View::View(View* view) {}
  
  View::View(View const &view) {}
}
