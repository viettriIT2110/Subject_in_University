#include <bits/stdc++.h>

using namespace std;
class SINHVIEN
{
private:
    char Masv[50];
    char Hoten[50];
    int Tuoi;
    int Diem;
public:
    void nhap(); void xuat();
};
void SINHVIEN::nhap()
{
    cout<<setw(15)<<"Ma sv : ";          fflush(stdin);  gets(Masv);
    cout<<setw(15)<<"Hoten : ";            fflush(stdin);  gets(Hoten);
    cout<<setw(14)<<"Tuoi : ";            cin >> Tuoi;
    cout<<setw(14)<<"Diem : ";            cin >> Diem;
}
void SINHVIEN::xuat()
{
    cout<<setw(15)<<"Ma SV : "<<Masv <<endl;
    cout<<setw(15)<<"Hoten : "<<Hoten<<endl;
    cout<<setw(14)<<"Tuoi :"<<Tuoi<<endl;
    cout<<setw(14)<<"Diem: "<<Diem<<endl;
}
int main()
{
    SINHVIEN a,b;
    cout << "Nhap sinh vien a : " << endl;
    a.nhap();
    cout << "Nhap sinh vien b :" << endl;
    b.nhap();
    cout << "-------------------------Danh Sach SV----------------------------"<<endl;
    cout << "sinh vien  a : " << endl;
    a.xuat();
    cout << "sinh vien  b : " << endl;
    b.xuat();
}
