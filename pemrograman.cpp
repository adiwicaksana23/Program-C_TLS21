#include <iostream>

using namespace std;

float t_bdn, b_bdn, bmi;
char jenis_kelamin;
int main()
{
    cout<<"\t\t\t\tKALKULATOR BMI (Body Mass Index)";
    cout<<"\n\nBMI adalah nilai ukur untuk mengetahui status gizi seseorang berdasarkan berat dan tinggi badannya.\n";
    cout<<"Nilai BMI (IMT) juga dapat menjadi alat skrining awal untuk mengetahui risiko seseorang terhadap \nsuatu penyakit.\n\n";
    cout<<"L: Laki Laki\nP: Perempuan";
    cout<<"\nPilih Jenis Kelamin: ";
    cin>>jenis_kelamin;
    switch(jenis_kelamin){
        case 'L':
          cout<<"Masukkan tinggi badan Anda dalam meter:";
          cin>>t_bdn;
          cout<<"Masukkan berat badan Anda dalam kilogram:";
          cin>>b_bdn;
          bmi=b_bdn/(t_bdn*t_bdn);
          cout<<"\nBMI Anda adalah "<<bmi<<"\n";
          cout<<"KETERANGAN: ";
          if(bmi<18){
                cout<<"Perbanyak gizi makanan";
                }
                else if(bmi>=18&&bmi<=25){
                        cout<<"Selamat! Badan Anda Ideal";
                }
                else if(bmi>25&&bmi<=27){
                        cout<<"Atur pola makan";
                }
                else {
                        cout<<"Obesitas";
                }
            break;
        case 'P':
            cout<<"Masukkan tinggi badan Anda dalam meter:";
            cin>>t_bdn;
            cout<<"Masukkan berat badan Anda dalam kilogram:";
            cin>>b_bdn;
            bmi=b_bdn/(t_bdn*t_bdn);
            cout<<"\nBMI Anda adalah "<<bmi<<"\n";
            cout<<"KETERANGAN: ";
            if(bmi<17){
                cout<<"Perbanyak gizi makanan";
                }
                else if(bmi>=17&&bmi<=23){
                        cout<<"Selamat! Badan Anda Ideal";
                }
                else if(bmi>23&&bmi<=27){
                        cout<<"Atur pola makan";
                }
                else {
                        cout<<"Obesitas";
                }
            break;
                }
    cout<<"\n\n===========TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI!=============";
    return 0;
}
