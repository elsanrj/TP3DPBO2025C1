# Janji
Saya Elsa Nurjanah dengan NIM 2306026 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![TP3_diagram](https://github.com/user-attachments/assets/c93814aa-102d-408b-8f24-32287e909156)

# Alur Program
Program terinspirasi dari farm life simulation role-playing video game yaitu Stardew Valley
## 1. Daftar Class dan Atributnya
### **Karakter dan Pemain**
1. **Character**

   - `name: str` → Nama karakter
   - `lives_at: str` → Tempat tinggal karakter
   - `main_skill: str` → Skill utama karakter

2. **Player**

   - `HP: int` → Health Point player
   - `farm: Farm` → Farm yang dimiliki
   - `quest: list<Quest>` → List misi yang dapat diselesaikan
   - `tools: list<Tools>` → List alat yang dimiliki
   - `weapon: Weapon` → Senjata yang dimiliki

3. **Villager**

   - `likes: list<str>` → List hal yang disukai
   - `occupation: str` → Pekerjaan
   - `store: Store` → Toko yang dimiliki

4. **Monster**

   - `HP: int` → Kesehatan monster
   - `item_drops: list<str>` → List item yang diberikan setelah dikalahkan
   - `damage_effect: str` → Efek serangan monster

### **Sistem Bisnis dan Pertanian**

5. **Business**

   - `owner: str` → Pemilik bisnis
   - `name: str` → Nama bisnis
   - `address: str` → Alamat bisnis

6. **Store**

   - `mainly_sell: str` → Jenis barang utama yang dijual
   - `opening_day: list<str>` → Hari buka toko
   - `opening_hour: tuple<int, int>` → Jam operasional toko

7. **Farm**

   - `type: str` → Jenis lahan Farm
   - `crops: list<Crops>` → List tanaman yang sedang ditanam
   - `animals: list<Animal>` → List hewan ternak yang dipelihara

8. **Crops**

   - `name: str` → Nama tanaman
   - `type: str` → Jenis tanaman
   - `season: str` → Musim cocok untuk tumbuh

9. **Animal**

   - `name: str` → Nama hewan
   - `diet: str` → Makanan utama hewan
   - `produce: str` → Hasil produksi dari hewan

### **Sistem Quest dan Peralatan**

10. **Quest**

    - `name: str` → Nama misi
    - `description: str` → Deskripsi misi
    - `reward: list<str>` → Hadiah yang didapatkan jika menyelesaikannya
    - `EXP: int` → Poin EXP yang diperoleh

11. **Equipment**

    - `name: str` → Nama peralatan
    - `purpose: str` → Fungsi peralatan

12. **Weapon**

    - `obtained_by: str` → Cara mendapatkan senjata
    - `level: int` → Level senjata
    - `damage: int` → Jumlah damage yang diberikan

13. **Tools**

    - `cost: int` → Harga alat
    - `main_ingredient: str` → Bahan utama alat
    - `improvement: str` → Peningkatan dari alat

---

## 2. Hubungan Inheritance

- **Player, Villager, dan Monster adalah subclass dari Character**

  - Semua memiliki `name`, `lives_at`, dan `main_skill` dari **Character**.
  - **Player** menambahkan `HP`, `farm`, `quest`, `tools`, dan `weapon` sebagai atribut tambahan.
  - **Monster** menambahkan `HP`, `item_drops`, dan `damage_effect` sebagai atribut tambahan.
  - **Villager** menambahkan `likes`, `occupation`, dan `store`.

- **Store dan Farm adalah subclass dari Business**

  - Semua memiliki `name`, `address`, dan `owner` dari Business.
  - Store menambahkan  `mainly_sell`, `opening_day`, `opening_hour` sebagai atribut tambahan.
  - **Farm** menambahkan `type`, `crops`, dan `animals` sebagai atribut tambahan.

- **Weapon dan Tools adalah subclass dari Equipment**

  - Semua memiliki `name` dan `purpose` dari Equipment.

  - **Weapon** memiliki atribut tambahan `obtained_by`, `level`, dan `damage`.

  - **Tools** memiliki atribut tambahan `cost`, `main_ingredient`, dan `improvement`.

---

## 3. Hubungan Composition (Has-A)

- **Player memiliki Farm, Quest, Tools, dan satu Weapon**

  - Seorang **Player** memiliki satu **Farm**.
  - Seorang **Player** dapat memiliki beberapa **Quest** yang sedang dijalankan.
  - Seorang **Player** memiliki daftar alat (**Tools**).
  - Seorang **Player** hanya memiliki satu **Weapon**.

- **Villager memiliki Store**

  - Setiap **Villager** memiliki sebuah **Store**.

- **Farm memiliki Crop dan Animal**

  - **Farm** memiliki daftar tanaman (**Crop**) yang sedang ditanam dan hewan (**Animal**) yang dipelihara.

# Dokumentasi
![CPP.1](https://github.com/elsanrj/TP3DPBO2025C1/blob/main/C++/Dokumentasi/1.png?raw=true)
![CPP.1](https://github.com/elsanrj/TP3DPBO2025C1/blob/main/C++/Dokumentasi/2.png?raw=true)
![CPP.1](https://github.com/elsanrj/TP3DPBO2025C1/blob/main/C++/Dokumentasi/3.png?raw=true)
