#include <stdio.h>
#include <string.h>

struct Rubah {
    char nama[20];
    int energy;
    int loves;
};

struct Human {
    char nama[20];
    int energy;
    int loves;
};

// Fungsi untuk mengurutkan array rubah berdasarkan atribut loves
void sortByLoves(struct Rubah rubahs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (rubahs[j].loves < rubahs[j + 1].loves) {
                struct Rubah temp = rubahs[j];
                rubahs[j] = rubahs[j + 1];
                rubahs[j + 1] = temp;
            }
        }
    }
}

void simulasi(struct Rubah* noell, struct Rubah* changli, struct Rubah* kafka, struct Human* sukma, struct Human* anggara, struct Human* user, struct Rubah* raphtalia, struct Rubah* alice, struct Human* ayla, struct Human* aulin) {
    printf("Masukkan Perintah : ");
    char hsl[50], nam[50];
    scanf("%s %s", hsl, nam);
    
    if (strcmp(hsl, "ATTR") == 0) {
        if (strcmp(nam, "sukma") == 0) {
            printf("%s\n", sukma->nama);
            printf("%d\n", sukma->energy);
            printf("%d\n", sukma->loves);
        } else if (strcmp(nam, "anggara") == 0) {
            printf("%s\n", anggara->nama);
            printf("%d\n", anggara->energy);
            printf("%d\n", anggara->loves);
        } else if (strcmp(nam, user->nama) == 0) {
            printf("%s\n", user->nama);
            printf("%d\n", user->energy);
            printf("%d\n", user->loves);
        } else if (strcmp(nam, "ayla") == 0) {
            printf("%s\n", ayla->nama);
            printf("%d\n", ayla->energy);
            printf("%d\n", ayla->loves);
        } else if (strcmp(nam, "aulin") == 0) {
            printf("%s\n", aulin->nama);
            printf("%d\n", aulin->energy);
            printf("%d\n", aulin->loves);
        } else {
            printf("pegawai sudah resign >===< \n");
        }
    } else if (strcmp(hsl, "PETTING") == 0) {
        if (strcmp(nam, "noell") == 0) {
            printf("%s\n", noell->nama);
            noell->energy += 1;
            printf("%d\n", noell->energy);
            noell->loves += 1;
            printf("%d\n", noell->loves);
        } else if (strcmp(nam, "changli") == 0) {
            printf("%s\n", changli->nama);
            changli->energy += 1;
            printf("%d\n", changli->energy);
            changli->loves += 1;
            printf("%d\n", changli->loves);
        } else if (strcmp(nam, kafka->nama) == 0) {
            printf("%s\n", kafka->nama);
            kafka->energy += 1;
            printf("%d\n", kafka->energy);
            kafka->loves += 1;
            printf("%d\n", kafka->loves);
        } else if (strcmp(nam, raphtalia->nama) == 0) {
            printf("%s\n", raphtalia->nama);
            raphtalia->energy += 1;
            printf("%d\n", raphtalia->energy);
            raphtalia->loves += 1;
            printf("%d\n", raphtalia->loves);
        } else if (strcmp(nam, alice->nama) == 0) {
            printf("%s\n", alice->nama);
            alice->energy += 1;
            printf("%d\n", alice->energy);
            alice->loves += 1;
            printf("%d\n", alice->loves);
        } else {
            printf("pegawai sudah resign >===< \n");
        }
    } else if (strcmp(hsl, "SHOW") == 0 && strcmp(nam, "FOX") == 0) {
        // Array rubah untuk diurutkan
        struct Rubah rubahs[] = {*noell, *changli, *kafka, *raphtalia, *alice};
        int num_rubahs = sizeof(rubahs) / sizeof(rubahs[0]);
        sortByLoves(rubahs, num_rubahs);
        printf("Karakter berjenis Rubah berdasarkan loves tertinggi:\n");
        for (int i = 0; i < num_rubahs; i++) {
            printf("%s - Loves: %d\n", rubahs[i].nama, rubahs[i].loves);
        }
    }
}

int main() {
    //Nama      : I Putu Sukma Widyantara
    //NRP       : 5048241020

    struct Rubah noell = {"Noell", 5, 5};
    struct Rubah changli = {"Changli", 5, 5};
    struct Rubah kafka = {"Kafka", 5, 5};
    struct Rubah raphtalia = {"Raphtalia", 5, 5};
    struct Rubah alice = {"Alice", 5, 5};
    
    struct Human sukma = {"sukma", 10, 10};
    struct Human anggara = {"anggara", 10, 10};
    struct Human ayla = {"ayla", 10, 10};
    struct Human aulin = {"aulin", 10, 10};
    struct Human user;
    printf("selamat datang di pet cafes sukma's family \n");
    printf("     .5GGG5Y7?5PPYJ!^^!?JJJY     \n");   
    printf("     .YY5B##BB######BBP7~~?P    \n");   
    printf("     ?5GPY??JYPBBBBBBB5!~BJ        \n");
    printf("     ?GJ7?~~~~!JYG#BBGBGG#:        \n");
    printf("     ^P7^:~::^:^~^^YBBBBB&Y         \n");
    printf("    :P!:~~^~^^^~:~!!JGBBBBG.        \n");
    printf("    Y5~:JY?57~~^J55Y^!PBBB#7        \n");
    printf("  . ^YY7!7^^:...:~~~:^YB###Y        \n");
    printf("  .::^7JPG!^!~^:^~?J5GBG5?^         \n");
    printf("   ^^.!B#BPB&5P7^7GJ!~:.            \n");
    printf(" ... ~GBB#BGGB5YGBG^   ~7!^        \n");
    printf("       ~YBB###BB#BBBY77GG?7GP:      \n");
    printf("       .J#BBBGG#&###B#G!.  :G?      \n");
    printf("        .J##G5?!JJ75B5^             \n");
    printf("          7B#B#5                    \n");
    printf("           ^G#B&5.                  \n");
    printf("            5#BB?.                  \n");
    printf("            ?Y?:                    \n");
    printf("\n");
    printf("silahkan buat karakter terlebih dahulu \n");
    printf("masukkan nama karakter, energy dan nyawa :  \n");
    scanf("%s %d %d", user.nama, &user.energy, &user.loves);


    printf("\nKarakter yang ada di pet cafe : \n");
    printf("Rubah : \n");
    printf("%s\n", noell.nama);
    printf("%s\n", changli.nama);
    printf("%s\n", kafka.nama);
    printf("%s\n", raphtalia.nama);
    printf("%s\n", alice.nama);
    printf("\nPegawai : \n");
    printf("%s\n", sukma.nama);
    printf("%s\n", anggara.nama);
    printf("%s\n", ayla.nama);
    printf("%s\n", aulin.nama);
    printf("%s\n", user.nama);
    
    printf("\nList Perintah : \n");
    printf("ATTR [nama] ==> pegawai\n");
    printf("PETTING [nama] ==> rubah\n");
    printf("SHOW FOX LOVES ==> Menampilkan rubah berdasarkan loves\n");
    
    simulasi(&noell, &changli, &kafka, &sukma, &anggara, &user, &raphtalia, &alice, &ayla, &aulin);
    
    printf("\nMau main lagi ??? ya/tidak \n ");
    char jwb[50];
    scanf("%s", jwb);
    if (strcmp(jwb, "ya") == 0) {
        printf("\nKarakter yang ada di pet cafe : \n");
        printf("Rubah : \n");
        printf("%s\n", noell.nama);
        printf("%s\n", changli.nama);
        printf("%s\n", kafka.nama);
        printf("%s\n", raphtalia.nama);
        printf("%s\n", alice.nama);
        printf("\nPegawai : \n");
        printf("%s\n", sukma.nama);
        printf("%s\n", anggara.nama);
        printf("%s\n", ayla.nama);
        printf("%s\n", aulin.nama);
        printf("%s\n", user.nama);
        
        printf("\nList Perintah : \n");
        printf("ATTR [nama] ==> pegawai\n");
        printf("PETTING [nama] ==> rubah\n");
        printf("SHOW FOX LOVES ==> Menampilkan rubah berdasarkan loves\n");
        simulasi(&noell, &changli, &kafka, &sukma, &anggara, &user, &raphtalia, &alice, &ayla, &aulin);
    } else {
        printf("Terima kasih sudah mengunjungi pet cafes kami\n");
    }
    return 0;
}
