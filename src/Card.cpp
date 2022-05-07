
#include <iostream>

class Card {
    private:
        int value;
        bool visible;

    public:
        Card(int newValue) {
            value = newValue;
            visible = false;
        }

        int get_value() {
            return value;
        }

        void flip() {
            visible = !visible;
        }

        bool is_visible() {
            return visible;
        }
};