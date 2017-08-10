#include <iostream>
#include <string>
using namespace std;

class phuongTienVanTai {
public:
	void setId(int maXe) {
		Id = maXe;
	}
	int getId() {
		return Id;
	}
	void setNSX(string NSX) {
		nhaSanXuat = NSX;
	}
	string getNSX() {
		return nhaSanXuat;
	}
	void setGiaGoc(long int Gia) {
		giaGoc = Gia;
	}
	long int getGiaGoc() {
		return giaGoc;
	}
	void setNgayXX(int ngay) {
		ngayxx = ngay;
	}
	int getNgayXX() {
		return ngayxx;
	}
	void setThangXX(int thang) {
		thangxx = thang;
	}
	int getThangXX() {
		return thangxx;
	}
	void setNamXX(int nam) {
		namxx = nam;
	}
	int getNamXX() {
		return namxx;
	}
	void setThue(int thue) {
		thue = thue;
	}
	int getThue() {
		return thue;
	}
protected:
	int Id;
	string nhaSanXuat;
	long int giaGoc;
	int ngayxx;
	int thangxx;
	int namxx;
	int thue;
};
class tuongTac {
	int NId;
	int NngayXX;
	int NthangXX;
	int NnamXX;
	string NnhaSanXuat;
	long int NgiaGoc;
	phuongTienVanTai Nhap;

public:
	void nhapDL() {
		cout << endl;
		cout << "Nhap New ID" << endl;
		cin >> NId;
		Nhap.setId(NId);
		cout << "Nhap ngay - thang - nam xuat xuong" << endl;
		cin >> NngayXX >> NthangXX >> NnamXX;
		Nhap.setNgayXX(NngayXX);
		Nhap.setThangXX(NthangXX);
		Nhap.setNamXX(NnamXX);
		cout << "Nhap Nha San xuat" << endl;
		cin.ignore(1);
		getline(cin, NnhaSanXuat);
		Nhap.setNSX(NnhaSanXuat);
		cout << "Nhap gia goc" << endl;
		cin >> NgiaGoc;
		Nhap.setGiaGoc(NgiaGoc);
	}
public:
	void xuatDL() {
		cout << endl;
		cout << "ID: " << Nhap.getId() << endl;
		cout << "Ngay xuat xuong: " << Nhap.getNgayXX() << "-" << Nhap.getThangXX() << "-" << Nhap.getNamXX() << endl;
		cout << "Nha san xuat: " << Nhap.getNSX() << endl;
		cout << "Gia goc: " << Nhap.getGiaGoc() << " VND" << endl;
		cout << "Gia sau thue: " << Nhap.getGiaGoc()*Nhap.getThue() << " VND" << endl;
	}
};
void main() {
	phuongTienVanTai Chon;
	tuongTac newTuongTac;
	int loaiXe;
	cout << endl;
	cout << "chon xe cua ban bang cac so: " << endl;
	cout << "1: xe dap. " << endl;
	cout << "2: xe may. " << endl;
	cout << "3: oto khach. " << endl;
	cout << "4: oto tai. " << endl;
	cout << endl;
	cin >> loaiXe;

	switch (loaiXe)
	{
	case 1:
		Chon.setThue(1);
		cout << "Xe dap: Khong tinh thue. " << endl;
		newTuongTac.nhapDL();
		newTuongTac.xuatDL();
		break;
	case 2:
		Chon.setThue(0.15);
		cout << "Xe may: Thue cua ban 10% VAT + 5% truoc ba. " << endl;
		newTuongTac.nhapDL();
		newTuongTac.xuatDL();
		break;
	case 3:
		cout << "Nhap so ghe ngoi: " << endl;
		int soGhe;
		cin >> soGhe;
		if (soGhe >= 5) {
			Chon.setThue(0.6);
			cout << "Oto Khach: Thue cua ban 10% VAT + 20% truoc ba + 30% thue tieu thu dac biet. " << endl;
			newTuongTac.nhapDL();
			newTuongTac.xuatDL();
		}
		else
		{
			Chon.setThue(0.8);
			cout << "Oto Khach: Thue cua ban 10% VAT + 20% truoc ba + 50% thue tieu thu dac biet. " << endl;
			newTuongTac.nhapDL();
			newTuongTac.xuatDL();
		}
		break;
	case 4:
		Chon.setThue(01.2);
		cout << "Oto tai: Thue cua ban 10% VAT + 2% truoc ba. " << endl;
		newTuongTac.nhapDL();
		newTuongTac.xuatDL();
		break;
	default:
		cout << "Nhap vao sai" << endl;
	}
	system("pause");
}