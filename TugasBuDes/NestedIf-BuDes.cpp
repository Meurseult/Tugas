/* Anggra Alhera Nasmita Utomo
 * Gema Pratama
 * Muhammad P.W
 * */

#include <iostream>

using namespace std;

int main() {
    cout << "                                     Selamat datang, ditempat pencucian motor Setuka"
         << "\n                                         Pencucian kendaraan terbaik di Sumatera      "
         << "\n                              -----------------------------------------------------------"
         << endl;
         
         
    cout << "\n\n*Kami Melayani pencucian segala jenis kendaraan darat"
         <<     "\n*tidak termasuk Ranpur TNI seperti Tank Leopard, atau artileri darat."
         <<     "\n*karena kami perusahaan asing kami hanya menerima dollar($)"
         <<     "\n\n+----------------------------------------------------------------------------------------------------------+"
         <<     "\n+    Setiap pencucian kendaraan $1000 dan keatas anda mendapat diskon 30% dan link souvenir                +"
         <<     "\n+   Setiap pencucian kendaraan diatas $500 dan keatas anda mendapat diskon 20% dan link souvenir lucu      +"
         <<     "\n+            Setiap pencucian kendaraan $250 dan keatas anda mendapat diskon 5%                            +"
         <<     "\n+               Pencucian selain dari 3 diatas akan mendapat dalil Al-Qur'an                               +"
         <<     "\n+----------------------------------------------------------------------------------------------------------+"
         <<endl;
         
         
         double mobilRoda4, mobilRoda6, mobilRoda8, motorGede, motorKecil, total;
         
         
         cout   << "\n\n                       Biaya Pencucian"
                << "\n\n+--------------------------------+-----------------------------+"
                << "\n|           Mobil roda 4         |$ " <<25<<"                         |"
                << "\n+--------------------------------+-----------------------------+"
                << "\n|           Mobil roda 6         |$ " <<50<<"                         |"
                << "\n+--------------------------------+-----------------------------+"
                << "\n|           Mobil roda 8         |$ " <<90<< "                         |"
                << "\n+--------------------------------+-----------------------------+"
                << "\n|            Motor Gede          |$ " <<19<< "                         |"
                << "\n+--------------------------------+-----------------------------+"
                << "\n|            Motor Kecil         |$ " <<10<< "                         |"
                << "\n+--------------------------------+-----------------------------+"
                << endl;
                
                cout << "Tolong Masukkan jumlah kendaraan roda 4: "; cin >> mobilRoda4;
                cout << "Tolong Masukkan jumlah kendaraan roda 6: "; cin >> mobilRoda6;
                cout << "Tolong masukkan jumlah kendaraan roda 8: "; cin >> mobilRoda8;
                cout << "Tolong masukkan jumlah motor gede: "; cin >> motorGede;
                cout << "Tolong masukkan jumlah motor kecil: "; cin >> motorKecil;
                total = ((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) + (((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) *0.05) + 
                        (((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) *0.02);
                cout << total << endl;
                
                
                
                if (total>=1000) {
                    
                    cout << "\n                PENCUCIAN MOTOR SETUKA"
                         << "\n             Jl. K.H Nasution - Pekanbaru"
                         << "\n                  Telp. 081376267281"
                         << "\n==========================================================";
                    cout << "\n\n"
                         << "\nMobil roda 4                      "<<mobilRoda4 <<    "           $ " <<mobilRoda4*25
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 6                      "<<mobilRoda6 <<    "           $ " <<mobilRoda6*50
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 8                      "<<mobilRoda8 <<    "           $ " <<mobilRoda8*90
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Gede                        "<<motorGede <<     "           $ " <<motorGede*19
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Kecil                       "<<motorKecil <<    "           $ " <<motorKecil*10
                         << "\n+-----------------------------------------------------"
                         << "\nRetribusi 5%                              $ " << ((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.05
                         << "\n+-----------------------------------------------------"
                         << "\nPajak Bumi Bangunan 2%                    $ " <<((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.02
                         << "\n+-----------------------------------------------------"
                         << "\nHarga awal                                $ " <<total
                         << "\n+-----------------------------------------------------"
                         << "\nDiskon 30%                                $ " <<total*0.3
                         << "\n+-----------------------------------------------------"
                         << "\nTotal                                     $ " <<total-(total*0.3)
                         << "\n======================================================"
                         << "\n            Struk ini berlaku hingga " << 30 << " hari"
                         << "\n         Karena anda mencuci $1000 dan keatas dollar"
                         << "\n                 Anda mendapat hadiah"
                         << "\n      klik link ini untuk mengambil souvenir anda"     
                         << "\n           https://i.ibb.co/6R3MRmz/cat.jpg\n"
                         << endl << endl;
                
                    } else if(total>=500) {
                        
                    cout << "\n                PENCUCIAN MOTOR SETUKA"
                         << "\n             Jl. K.H Nasution - Pekanbaru"
                         << "\n                  Telp. 081376267281"
                         << "\n==========================================================";
                    cout << "\n\n"
                         << "\nMobil roda 4                      "<<mobilRoda4 <<    "           $ " <<mobilRoda4*25
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 6                      "<<mobilRoda6 <<    "           $ " <<mobilRoda6*50
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 8                      "<<mobilRoda8 <<    "           $ " <<mobilRoda8*90
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Gede                        "<<motorGede <<     "           $ " <<motorGede*19
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Kecil                       "<<motorKecil <<    "           $ " <<motorKecil*10
                         << "\n+-----------------------------------------------------"
                         << "\nRetribusi 5%                              $ " << ((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.05
                         << "\n+-----------------------------------------------------"
                         << "\nPajak Bumi Bangunan 2%                    $ " <<((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.02
                         << "\n+-----------------------------------------------------"
                         << "\nHarga awal                                $ " <<total
                         << "\n+-----------------------------------------------------"
                         << "\nDiskon 20%                                $ " <<total*0.2
                         << "\n+-----------------------------------------------------"
                         << "\nTotal                                     $ " <<total-(total*0.2)
                         << "\n======================================================"
                         << "\n            Struk ini berlaku hingga " << 30 << " hari"
                         << "\n       Karena anda mencuci $500 dan keatas "
                         << "\n                 Anda mendapat hadiah"
                         << "\n      klik link ini untuk mengambil souvenir anda"     
                         << "\n           https://i.ibb.co/6R3MRmz/cat.jpg\n"
                         << endl << endl;
                         
                    } else if(total>=250) {
                    cout << "\n                PENCUCIAN MOTOR SETUKA"
                         << "\n             Jl. K.H Nasution - Pekanbaru"
                         << "\n                  Telp. 081376267281"
                         << "\n==========================================================";
                    cout << "\n\n"
                         << "\nMobil roda 4                      "<<mobilRoda4 <<    "           $ " <<mobilRoda4*25
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 6                      "<<mobilRoda6 <<    "           $ " <<mobilRoda6*50
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 8                      "<<mobilRoda8 <<    "           $ " <<mobilRoda8*90
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Gede                        "<<motorGede <<     "           $ " <<motorGede*19
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Kecil                       "<<motorKecil <<    "           $ " <<motorKecil*10
                         << "\n+-----------------------------------------------------"
                         << "\nRetribusi 5%                              $ " << ((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.05
                         << "\n+-----------------------------------------------------"
                         << "\nPajak Bumi Bangunan 2%                    $ " <<((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.02
                         << "\n+-----------------------------------------------------"
                         << "\nHarga awal                                $ " <<total
                         << "\n+-----------------------------------------------------"
                         << "\nDiskon 5%                                 $ " <<total*0.05
                         << "\n+-----------------------------------------------------"
                         << "\nTotal                                     $ " <<total-(total*0.05)
                         << "\n======================================================"
                         << "\n            Struk ini berlaku hingga " << 30 << " hari"
                         << endl << endl;
                        
                        } else {
                            
                    cout << "\n                PENCUCIAN MOTOR SETUKA"
                         << "\n             Jl. K.H Nasution - Pekanbaru"
                         << "\n                  Telp. 081376267281"
                         << "\n==========================================================";
                         
                    cout << "\n\n"
                         << "\nMobil roda 4                      "<<mobilRoda4 <<    "           $ " <<mobilRoda4*25
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 6                      "<<mobilRoda6 <<    "           $ " <<mobilRoda6*50
                         << "\n+-----------------------------------------------------"
                         << "\nMobil roda 8                      "<<mobilRoda8 <<    "           $ " <<mobilRoda8*90
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Gede                        "<<motorGede <<     "           $ " <<motorGede*19
                         << "\n+-----------------------------------------------------"
                         << "\nMotor Kecil                       "<<motorKecil <<    "           $ " <<motorKecil*10
                         << "\n+-----------------------------------------------------"
                         << "\nRetribusi 5%                                   $ " << ((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.05
                         << "\n+-----------------------------------------------------"
                         << "\nPajak Bumi Bangunan 2%                         $ " <<((mobilRoda4*25) + (mobilRoda6*50) + (mobilRoda8*90) + (motorGede*19) + (motorKecil*10)) * 0.02
                         << "\n+-----------------------------------------------------"
                         << "\nTotal                                          $ " << total
                         << "\n======================================================"
                         << "\n            Struk ini berlaku hingga " << 30 << " hari"
                         << "\nSesungguhnya Allah tidak merobah keadaan sesuatu kaum sehingga"
                         << "\nmereka merobah keadaan yang ada pada diri mereka sendiri."
                         << "\n               (QS. Ar Rad[13]: 11)                     "
                         << endl << endl;
                            }
                

    return 0;
}