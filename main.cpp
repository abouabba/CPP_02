#include <iostream>


class Buffer {
    private:
        int* data;
    
    public:
        Buffer() {
            data = new int(10);
        }
    
        // Copy assignment بدون شرط
        Buffer& operator=(const Buffer& other) {
            delete data;           // 1) كانمسحو البيانات القديمة
            data = new int(*other.data); // 2) كننسخو من other
            return *this;
        }
    
        ~Buffer() {
            delete data;
        }
    };
    
int main() {
    Buffer buf1;
    buf1 = buf1; // Copy assignment بدون شرط
    return 0;
}
