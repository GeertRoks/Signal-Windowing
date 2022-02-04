#include <iostream>

int main() {
    const int buf_size = 4;
    float* buf1 = new float[buf_size]();
    float* buf2 = new float[buf_size]();
    float* buf3 = new float[buf_size]();
    float* buf4 = new float[buf_size]();

    // fill buffers
    for(auto i = 0; i < buf_size; i++) {
        *(buf1+i) = i;
        *(buf2+i) = i + buf_size;
        *(buf3+i) = i + 2*buf_size;
        *(buf4+i) = i + 3*buf_size;
    }


    // Print buffers
    for(auto i = 0; i < buf_size; i++) {
        std::cout << *(buf1 + i) << ", " << *(buf2 + i) << ", " << *(buf3 + i) << ", " << *(buf4 + i) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "--------" << std::endl;
    std::cout << std::endl;

    float* output_buffer = new float[2*buf_size]();


    return 0;
}
