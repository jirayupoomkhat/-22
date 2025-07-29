#include <iostream>   //เป็นไดเร็กทิฟพรีโพรเซสเซอร์ที่แจ้งให้คอมไพเลอร์รวมiostreamไลบรารี ไว้
using namespace std;   // ประกาศว่าจะใช้std

int main() {   //ฟั้งชันหลักของตัวcode
  
  	// while loop to print numbers from 1 to 5
    int i = 0; //ตัวแปรiเท่ากับ0
    while (i <= 10) {  //ทำซ้ำเงื่อนไขจนกว่าiจะเท่ากับหรือน้อยกว่า10
        cout << "Hi  => i = " << i << endl; //แสดงค่าข้อมูลที่ทำซ้ำ
        i++;   //iมีค่าเพิ่อมขึ้นที่ละ1
    }

    return 0; //ไม่มีการย้อนกลับ
}  