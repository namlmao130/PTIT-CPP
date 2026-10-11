#include <iostream>

const int MAXLIST = 10000;

// Khai báo struct đúng theo đề
struct list {
    int n;
    int nodes[MAXLIST];
};

// --- CHƯƠNG TRÌNH CON ---
void thongKe(struct list ds) {
    // Mảng đánh dấu xem vị trí đó đã được xử lý chưa
    // 0 = chưa, 1 = rồi
    int daIn[MAXLIST] = {0};

    for (int i = 0; i < ds.n; i++) {
        // Chỉ xét những số chưa được in
        if (daIn[i] == 0) {
            int count = 1; // Đếm chính nó

            // Quét các số phía sau để tìm trùng
            for (int j = i + 1; j < ds.n; j++) {
                if (ds.nodes[i] == ds.nodes[j]) {
                    count++;     // Tăng biến đếm
                    daIn[j] = 1; // Đánh dấu số phía sau là đã xử lý
                }
            }

            // In ra màn hình: Giá trị + Số lần
            std::cout << ds.nodes[i] << " " << count << "\n";
        }
    }
}

// --- MAIN (Đã nhồi sẵn dữ liệu) ---
int main() {
    struct list ds;

    // 1. Gán số lượng phần tử
    ds.n = 7;

    // 2. Tạo mảng dữ liệu mẫu (5 5 3 4 3 2 5)
    int dataMau[] = {5, 5, 3, 4, 3, 2, 5};

    // 3. Đổ dữ liệu vào struct
    // (C++ không cho gán ds.nodes = {...} trực tiếp nên phải for)
    for(int i = 0; i < ds.n; i++) {
        ds.nodes[i] = dataMau[i];
    }

    // 4. Chạy chương trình con
    thongKe(ds);

    return 0;
}
