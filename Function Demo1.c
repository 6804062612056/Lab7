double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;
  	//function calling (a-k)

    //a)  functionM(); ถูก(ไม่มี error)
    //b)  a = functionM(); ผิด(functionM return เป็น double แต่ a เก็บ int)
    //c)  b = functionN(a, b); ผิด(parameter ตัวที่ 2 ของ functionN เป็น double แต่ b เป็น int)
    //d)  r = functionO(r,a,s,b); ถูก(ชนิดข้อมูลที่ฟังก์ชันรับตรงทุกตัว)
    //e)  s = functionP(a,b,c,d,e); ผิด(parameter เกิน)
    //f)  u = functionM(); ถูก(ชนิด u ตรงกับชนิดของค่า return จาก functionM)
    //g)  c = d + functionN(r,s); ผิดผิด(parameter ตัวที่ 1 ของ functionN เป็น double แต่ d เป็น int)
    //h)  t = s * functionO(r, a, r, a); ถูก(ชนิดข้อมูลที่ฟังก์ชันรับตรงทุกตัว)
    //i)  a = v + functionP(r, s, t, t); ผิด(a เป็น int แต่ functionP return เป็น double และ functionP ต้องการข้อมูลประเภท int แต่ส่งเป็น double)
    //j)  functionP(functionN(a, a), s, t, t+r); ผิด(functionN parameter ตัวที่2 ต้องรับเป็น double และ parameter ตัวที่ 2-4 ของ functionP ต้องรับเป็น int)
    //k)  v = functionP(functionN(a, a), s, t, t+r); ผิด(functionN parameter ตัวที่2 ต้องรับเป็น double และ parameter ตัวที่ 2-4 ของ functionP ต้องรับเป็น int)
}

double functionM(void) {
    return 1.5;
}

int functionN(int n, double x) {
    return n + x;
}

double functionO(double x1, int n1, double x2, int n2) {
    return x1 + n1 + x2 + n2;
}

double functionP(int a, int n, int b, int c) {
    return a + n + b + c;
}