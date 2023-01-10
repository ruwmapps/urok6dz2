#pragma once

class Counter
{
private:
    int num = 1;

public:
    Counter();
    Counter(int num);
    void set_plus();
    void set_minus();
    int get_result();
};
