//
//  main.cpp
//  TestScope
//
//  Created by George on 09/06/2019.
//  Copyright © 2019 George. All rights reserved.
//

#include <iostream>
#include <vector>
#include "window.hpp"

#include "text.hpp"


class Text {
public:
    Text Padding(int padding) {
        std::cout << padding;
        return *this;
    }
    Text Color(std::string color) {
         std::cout << color;
        return *this;
    }
    Text(std::string text) {
        std::cout << text;
    }
    Text(const Text &text) {}
    ~Text() {}
};

class List {
public:
    List() {}
    ~List() {}
};

class View {
public:
    View() {}
    View(Text text, List list) {}
    ~View() {}
};

template<typename T>
T list(T v) {
    return v;
}

template<typename T, typename... Args>
T list(T first, Args... args) {
    return list(args...);
}


class X{
public:
    std::vector<int> v;
  
    X(int n) {
        v.push_back(n);
    }
    template <class... T2>
    X(T2... rest) {
        //v.push_back(n);
        X(rest...);
    }
};

template <class... Ts> struct tuple {};

template <class T, class... Ts>
struct tuple<T, Ts...> : tuple<Ts...> {
    tuple(T t, Ts... ts) : tuple<Ts...>(ts...), tail(t) {}
    
    T tail;
};

int main(int argc, const char * argv[]) {
    
//    coreui::Window* window = new coreui::Window(
//        "My Window",
//        0,
//        0,
//        800,
//        600
//    );
    
    //X<int> obj(1, 2, 3);
    
//    X *x = new X(1,2);
//
//    tuple<double, std::string, std::string>* t1 = new tuple<double, std::string, std::string>(12.2, "42", "d");
    
    
    new coreui::Window(
        new coreui::Text("My Window"),
        new coreui::View(
            new coreui::Text("View text")
        )
    );
    
//    std::cout << t1->tail << std::endl;
//
//    new coreui::Window(
//        new coreui::View(
//            new coreui::Text("AAAA")
//        )
//    );
    // insert code here...
    
//    Text t = Text("World!\n").Color("j");
//
//    std::vector<Text> v { Text("World!\n").Color("j") };
//    list(
//         Text("Hello"),
//         Text(", "),
//         Text("World"),
//         Text("!").Color("\n")
//    );
//
//    new View {
//        Text("Hello"),
//        List()
////        List<Text, Text> (
////              Text(", "),
////              Text("World!").Color("white").Padding(10)
////        )
//    };
    
//    View(
//         Text("Hello"),
//         List()
//    );
    
//    View();
//    {
//        Text("Heading\n");
//        List();
//        {
//            Text("My label").Color("gray");
//            Text("My label").Color("red");
//            Text("My label").Color("blue");
//            Text("My label").Color("green");
//        }
//    }
    
    return 0;
}
