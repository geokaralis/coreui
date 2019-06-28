//
//  view.hpp
//  coreui
//
//  Created by George on 28/06/2019.
//

#ifndef view_h
#define view_h

#include <iostream>

namespace coreui {
class View {
public:
  std::string id();
  View& id(std::string id);
  View(View* view);
  View() = default;
  ~View() = default;
protected:
  std::string _id;
};
} // namespace coreui

#endif /* view_h */
&
