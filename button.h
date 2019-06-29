//
//  button.h
//  CoreUI
//
//  Created by George on 29/06/2019.
//

#ifndef button_h
#define button_h

#include "view.h"

namespace coreui {
  class Button : public View {
  public:
    using View::View;
    
    Button() = default;
    ~Button() = default;
  };
}


#endif /* button_h */
