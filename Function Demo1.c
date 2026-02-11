#include<stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
int a, b, c, d, e;
double r, s, t, u, v;
// function calling (a-k)

functionM(); 
// รันได้ — ฟังก์ชันไม่รับพารามิเตอร์ และไม่ต้องรับค่า return
a = functionM();  
// รันได้ — แปลง double เป็น int อัตโนมัติ (ค่าทศนิยมอาจหาย)
b = functionN(a, b);  
// รันได้ — b แปลงจาก int เป็น double ส่งเข้าได้
r = functionO(r,a,s,b);  
// รันได้ — ชนิดพารามิเตอร์ตรงทั้งหมด
s = functionP(a,b,c,d,e);  
// รันไม่ได้ — ส่งอาร์กิวเมนต์เกิน ฟังก์ชันรับ 4 ตัว
u = functionM();  
// รันได้ — double รับค่าจาก double
c = d + functionN(r,s);  
// รันได้ — r แปลงเป็น int อัตโนมัติ
t = s * functionO(r, a, r, a);  
// รันได้ — ชนิดข้อมูลถูกต้อง
a = v + functionP(r, s, t, t);  
// รันได้ — double แปลงเป็น int ก่อนเข้า function
functionP(functionN(a, a), s, t, t+r);  
// รันได้ — พารามิเตอร์ถูกแปลงเป็น int อัตโนมัติ
v = functionP(functionN(a, a), s, t, t+r);  
// รันได้ — รับค่าที่คืนกลับเป็น double

return 0;
}