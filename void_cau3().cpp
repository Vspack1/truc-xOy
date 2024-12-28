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
            else if (i == 0) {
                cout << "-"; // Gạch ngang trên trục x
            }
            else if (i == y && j == x * 2) {
                cout << "x"; // Đánh dấu tọa độ (x, y)
            }
            else {
                cout << " "; // Khoảng trống
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
    system("pause");
    return 0;
}