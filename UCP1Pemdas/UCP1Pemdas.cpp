//Nama  : Gibran Fathoni Belva
//NIM   : 20230140174

#include <iostream>
using namespace std;

int n;

struct nilaiUjian
{
	float matematika;
	float bahasaInggris;
};

struct dataUjian
{
	nilaiUjian nilai;
	string nama;
};

	void input(dataUjian data[20], int& val) {
		cout << "Masukkan jumlah peserta ujian : ";
		cin >> val;

		cout << endl;
		cout << "===============================" << endl;
		cout << "Inputkan Nama dan Nilai Peserta" << endl;
		cout << "===============================" << endl;
		for (int i = 0; i < val; i++)
		{
			cout << "Nama Peserta : ";
			cin >> data[i].nama;
			cout << "Nilai Matematika : ";
			cin >> data[i].nilai.matematika;
			cout << "Nilai Bahasa Inggris : ";
			cin >> data[i].nilai.bahasaInggris;
			cout << endl;
		};
	}

	float Rerata(float mtk, float bing) {
		return (mtk + bing) / 2;
	}

	void output(dataUjian data[20], int val) {
		cout << endl;
		cout << "========================" << endl;
		cout << "Status Kelulusan Peserta" << endl;
		cout << "========================" << endl;
		cout << "Nama\tStatus" << endl;
		for (int i = 0; i < val; i++)
		{
			cout << data[i].nama << "\t";
			cout << (Rerata(data[i].nilai.matematika, data[i].nilai.bahasaInggris) >= 70 || data[i].nilai.matematika > 80 ? "Lulus" : "Tidak Lulus") << endl;

		}
};

int main()
{
	dataUjian Data[20];
	string pilihan;

	do
	{		
		
		input(Data, n);
		output(Data, n);

		cout << endl;
		cout << "Apakah Ingin Melanjutkan Program ? ((y/t) : ";
		cin >> pilihan;
	} while (pilihan == "y" || pilihan == "Y");
}

//1. int panjang, float luas, dan string nama

//2. int pilihan
// int main() {
// cout << "Masukkan pilihan : ";
// cin >> pilihan;
// if (pilihan == 1) {
//cout << "anda menginput angka 1" << endl;
//}
//else if(pilihan == 2) {
//cout << "anda menginput angka 2" << endl;
//}
//else {
// cout << "error : hanya angka 1 dan 2 yang boleh di input" << endl;
//};
//}

//3. struct Mahasiswa
//{
//    string nama;
//    string nim;
//    int umur;
//    string prodi;
//};
//int main() {
//	Mahasiswa mhs;
//	mhs.nama = "joko";
//	mhs.nim = "20230140174";
//	mhs.umur = 20;
//	mhs.prodi = "TI";
// return 0;
//}

//4. - implementasi prosedur untuk menginput makanan kesukaan :
// string makananMinuman, kategori;

//void input() {
//    cout << "makanan / minuman kesukaan : ";
//    cin >> makananMinuman;
//    cout << "Kategori (Makanan/minuman) :";
//    cin >> kategori;
//};
//int main(){
//input();
//return 0;
//}

//- implementasi fungsi pengembalian nilai luas persegi panjang :
// float luasan(float panjang, float lebar) {
//return panjang * lebar;
//}
//int main() {
//cout << "luas persegi panjang : " << luasan(3,4) << endl;
//return 0;
//}

//5. looping untuk menampilkan tulisan TI sebanyak 5 kali :
//int main(){
// for (int i = 0; i < 5; i++)
//{
//	cout << "TI" << endl;
//}
//}