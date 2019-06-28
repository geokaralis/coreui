//
//  view.cpp
//  coreui
//
//  Created by George on 28/06/2019.
//

#include "view.h"

namespace coreui {
  
std::string View::id() {
  return _id;
}
  
View& View::id(std::string id) {
  _id = id;
  return *this;
}

View::View(View* view) {}

} // namespace coreui
