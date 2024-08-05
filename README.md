# QtxUI  

### What it QtxUI  

QtxUI is a collection of Qt wrappers for [ftxui](https://github.com/ArthurSonzogni/FTXUI) components.  
My goal will be to provide methods, signals, and slots modeled after the respective QtWidget equivalents..

---

### Why is QtxUI  

As much of a fan of ftxui as I am, I still feel that using it is slightly cumbersome at times.  
E.g. having to provide a reference to the value that each component is supposed to use, or never be able to access it at all.
Or not being able to easily change what happens on a `on_enter` after the object has been created.

These are all issues which could be circumvented if the components were more Qt-like, which is exactly what this project aims to do.  

---

### Requirements  

- [QtCore](https://www.qt.io/download-dev) 6 (5 *probably* works fine, but no guarantees)
- [FTXUI](https://github.com/ArthurSonzogni/FTXUI)
