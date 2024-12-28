#include <iostream>
using namespace std;

void cau3() {
    int x, y;

    // Nhập tọa độ
    cout << "Nhap mot toa do (x y): ";
    cin >> x >> y;

    // Kiểm tra giới hạn tọa độ
    if (x < 0 || x > 5 || y < 0 || y > 5) {
        cout << "Toa do vuot qua gioi han (x: 0-5, y: 0-5). Vui long thu lai." << endl;
        return;
    }

    // Mảng để lưu trữ đồ thị
    char graph[6][12];

    // Khởi tạo mảng với khoảng trống và gạch ngang
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 12; j++) {
            if (i == 0) {
                graph[i][j] = '-'; // Gạch ngang trên trục x
            }
            else {
                graph[i][j] = ' '; // Khoảng trống
            }
        }
    }

    // Đánh dấu tọa độ (x, y)
    graph[y][x * 2] = 'x';

    // Vẽ đồ thị
    for (int i = 5; i >= 0; i--) { // Duyệt qua các hàng (trục y)
        if (i > 0) {
            cout << i << " |"; // Hiển thị trục y
        }
        else {
            cout << "0 "; // Hiển thị gốc tọa độ
        }

        for (int j = 0; j <= 11; j++) { // Vẽ nội dung các hàng
            if (i == 0 && j == 11) {
                cout << ">"; // Dấu mũi tên ở cuối trục x
            }
            else {
                cout << graph[i][j]; // Hiển thị nội dung từ mảng
            }
        }
        cout << endl;
    }

    // In trục số dưới trục gạch ngang
    cout << "  ";
    for (int j = 0; j <= 5; j++) {
        cout << j << " "; // Hiển thị số trên trục x
    }
    cout << endl;
}

int main() {
    cau3();
    return 0;
}