// =====================================
// 🔹 Judul: Sistem Catatan Harian - "JurnalKu"
// =====================================

import java.util.*;

class Catatan {
    int id;
    String judul;
    String isi;
    Date tanggal;

    Catatan(int id, String judul, String isi) {
        this.id = id;
        this.judul = judul;
        this.isi = isi;
        this.tanggal = new Date();
    }

    void tampilkan() {
        System.out.println("\n📝 [" + id + "] " + judul);
        System.out.println("   Tanggal: " + tanggal);
        System.out.println("   " + isi);
    }
}

public class JurnalKu {
    private static final Scanner sc = new Scanner(System.in);
    private static final List<Catatan> daftarCatatan = new ArrayList<>();
    private static int nextId = 1;

    public static void main(String[] args) {
        int pilihan;
        do {
            System.out.println("\n===== 📘 SISTEM CATATAN HARIAN - JURNALKU =====");
            System.out.println("1. Tambah Catatan");
            System.out.println("2. Lihat Semua Catatan");
            System.out.println("3. Hapus Catatan");
            System.out.println("0. Keluar");
            System.out.print("Pilih menu: ");
            pilihan = getAngkaInput();

            switch (pilihan) {
                case 1 -> tambahCatatan();
                case 2 -> lihatCatatan();
                case 3 -> hapusCatatan();
                case 0 -> System.out.println("👋 Terima kasih telah menggunakan JurnalKu!");
                default -> System.out.println("Pilihan tidak valid, coba lagi.");
            }
        } while (pilihan != 0);
    }

    private static void tambahCatatan() {
        sc.nextLine(); // bersihkan buffer
        System.out.print("Masukkan judul catatan: ");
        String judul = sc.nextLine();
        System.out.print("Masukkan isi catatan: ");
        String isi = sc.nextLine();
        daftarCatatan.add(new Catatan(nextId++, judul, isi));
        System.out.println("✅ Catatan berhasil ditambahkan!");
    }

    private static void lihatCatatan() {
        if (daftarCatatan.isEmpty()) {
            System.out.println("Belum ada catatan.");
            return;
        }
        System.out.println("\n===== DAFTAR CATATAN =====");
        for (Catatan c : daftarCatatan) {
            c.tampilkan();
        }
    }

    private static void hapusCatatan() {
        System.out.print("Masukkan ID catatan yang ingin dihapus: ");
        int id = getAngkaInput();
        Catatan target = null;
        for (Catatan c : daftarCatatan) {
            if (c.id == id) target = c;
        }
        if (target != null) {
            daftarCatatan.remove(target);
            System.out.println("🗑️ Catatan berhasil dihapus!");
        } else {
            System.out.println("❌ Catatan tidak ditemukan.");
        }
    }

    private static int getAngkaInput() {
        while (!sc.hasNextInt()) {
            System.out.print("Masukkan angka yang benar: ");
            sc.next();
        }
        return sc.nextInt();
    }
}
