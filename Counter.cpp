#include "Counter.h"

Counter::Counter() : num(1){}

Counter::Counter(int y) : num(y) {}

void Counter::set_plus() {
    this->num++;
}
void Counter::set_minus() {
    this->num--;
}
int Counter::get_result() {
    return this->num;
}