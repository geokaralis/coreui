//
//  view.h
//  CoreUI
//
//  Created by George on 29/06/2019.
//

#ifndef view_h
#define view_h

#include <iostream>

namespace coreui {
  class View {
  public:
    std::string id();
    View& padding(int padding);
    View& id(std::string id);
    View(View* view);
    View(View const &view);
    View() = default;
    ~View() = default;
  protected:
    View* _view;
    std::string _id;
    int _padding;
  };
}


#endif /* view_h */
