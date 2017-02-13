#include <stdio.h>
#include <math.h>

int capSoCong(int nSoHangDau, int phanTuDau, int congSai){
    if(nSoHangDau == 0)
        return phanTuDau;
    return phanTuDau + (nSoHangDau - 1)*congSai + capSoCong(nSoHangDau - 1, phanTuDau, congSai);
}
int capSoNhan(int congBoi, int soHangDauTien, int nSoHang){
    if(nSoHang < 1)
        return 0;
    return soHangDauTien*pow(congBoi, nSoHang - 1) + capSoNhan(congBoi, soHangDauTien, nSoHang - 1);

}

void main(){
    printf("Tong cap so nhan: %d, Tong cap so cong %d", capSoNhan(2, 1, 3), capSoCong(3, 1, 2));
}
