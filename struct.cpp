#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float persentaseKehadiran;
};

int main() {
    Mahasiswa mahasiswa[40] = {
        {"103012400196", "ZHAFRAN LINKY SISWARA", 100.0},
        {"103012400278", "GANDA SETYA RAMADHANA", 50.0},
        {"103012400406", "MUHAMMAD ABRAR SINURAT", 100.0},
        {"103012500025", "FARID ALVARO SITEPU", 100.0},
        {"103012500037", "CHARLES NATHAN MARCELINO", 100.0},
        {"103012500038", "ARYA AWAL ADRIANSYAH", 100.0},
        {"103012500044", "MUHAMMAD ANDHIKA BAGASKOR", 100.0},
        {"103012500055", "MOCHAMAD RIZKYKA ZAINAL R", 100.0},
        {"103012500071", "NAYLA FAUZYA KHAIRUNNISA", 100.0},
        {"103012500072", "NAYAGA RADITHYA", 100.0},
        {"103012500078", "RILLO RAIHAN DWI SATRIA", 100.0},
        {"103012500088", "AL FATHIR ABIMANYU GAZAAL", 100.0},
        {"103012500092", "MUHAMMAD DZAKI LUKMANUL H", 100.0},
        {"103012500099", "SAMUEL DIPTA YOGI TARUNA", 100.0},
        {"103012500104", "AHMAD DHANI NUR RIDWAN", 100.0},
        {"103012500158", "MUHAMMAD RAFIKI HANNAN", 100.0},
        {"103012500217", "AHMAD RADHIN PRADITYA", 100.0},
        {"103012500226", "MAULANA NAUFAL MAHRUS", 100.0},
        {"103012500236", "NABILA NURUL ALIFAH", 50.0},
        {"103012500243", "ABIDZAR ALGHIFARI", 100.0},
        {"103012500266", "REVAN PUTRA ANDRIAN", 100.0},
        {"103012500276", "TSANIA RAHMA HALIZA", 100.0},
        {"103012500295", "LAZHI NADRI RAMADHAN", 100.0},
        {"103012500304", "MUHAMMAD ZEIN", 50.0},
        {"103012500315", "NABILA SYAKIRA ANDRIANI S", 100.0},
        {"103012500325", "MUHAMMAD GHASSAN FIRDIAN", 100.0},
        {"103012500331", "NUGRAHA AKMAL YOGA", 100.0},
        {"103012500339", "RIFQI BHADRIKA ADWITIYA", 100.0},
        {"103012500349", "FAUZAN NUR ABDILLAH", 100.0},
        {"103012500389", "ANINDA MARETHANINGTYAS CE", 100.0},
        {"103012500397", "LUKMAN HAKIM", 100.0},
        {"103012530009", "RAYYA IZZATUL MILA", 100.0},
        {"103012530017", "RADEN HASBI RADHITYA NATA", 100.0},
        {"103012530021", "RAYHAN MUZAB FAUZAN", 100.0},
        {"103012530033", "GAZA RAUSHAN FIKRI", 50.0},
        {"103012530040", "RAYYAN NAKHLAH PRAYATA", 100.0},
        {"103012530045", "IMAN ABDI ILAHI", 100.0},
        {"103012530055", "DUNCAN AGASTYA KURNIAWAN", 100.0},
        {"1301213218",   "ADAM TEGUH MAULAANAA", 50.0},
        {"1301223394",   "RAFLI NUJJIYA MAULANA", 50.0}
    };

    cout << "=== DAFTAR MAHASISWA ===" << endl;
    for (int i = 0; i < 40; i++) {
        cout << i + 1 << "\t| " << mahasiswa[i].nim << " | " << mahasiswa[i].nama << " | " << mahasiswa[i].persentaseKehadiran << "%" << endl;
    }
    cout << "Total Mahasiswa: 40\n\n";

    string targetNim = "103012530045";
    float kehadiranBaru = 85.0;
    bool ditemukan = false;

    cout << "--- MENCARI DAN UPDATE DATA ---" << endl;
    cout << "Mencari mahasiswa dengan NIM " << targetNim << "...\n" << endl;

    for (int i = 0; i < 40 && !ditemukan; i++) {
        if (mahasiswa[i].nim == targetNim) {
            ditemukan = true; 
            
            cout << "[SEBELUM UPDATE]" << endl;
            cout << "NIM       : " << mahasiswa[i].nim << "\nNama      : " << mahasiswa[i].nama << "\nKehadiran : " << mahasiswa[i].persentaseKehadiran << "%\n" << endl;
            
            mahasiswa[i].persentaseKehadiran = kehadiranBaru;
            
            cout << "[SESUDAH UPDATE]" << endl;
            cout << "NIM       : " << mahasiswa[i].nim << "\nNama      : " << mahasiswa[i].nama << "\nKehadiran : " << mahasiswa[i].persentaseKehadiran << "%\n\n";
        }
    }

    if (!ditemukan) {
        cout << "NIM " << targetNim << " tidak ditemukan di dalam data.\n\n";
    }

    return 0;
}