//
//  view.hpp
//  TestScope
//
//  Created by George on 10/06/2019.
//  Copyright © 2019 George. All rights reserved.
//

#ifndef view_hpp
#define view_hpp

#include <stdio.h>

namespace coreui {
class View {
public:
    View(View *view);
    View() = default;
    ~View() = default;
        
};
}

#endif /* view_hpp */
