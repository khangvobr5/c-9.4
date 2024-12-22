#include <stdio.h>
#define MAX_SIZE 100
int arr[MAX_SIZE];
int currentLength = 0;
void nhapMang() {
    printf("Nhap so phan tu: ");
    int n;
    scanf("%d", &n);
    if (n > 0 && n <= MAX_SIZE) {
        currentLength = n;
        printf("Nhap cac phan tu: ");
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
    } else {
        printf("So luong phan tu khong hop le!\n");
    }
}
void hienThiMang() {
    printf("Mang hien tai: ");
    for (int i = 0; i < currentLength; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void themPhanTu() {
    int addValue, addIndex;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri muon them: ");
    scanf("%d", &addIndex);

    if (addIndex >= 0 && addIndex <= currentLength && currentLength < MAX_SIZE) {
        for (int i = currentLength; i > addIndex; --i) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    } else {
        printf("Vi tri hoac kich thuoc khong hop le!\n");
    }
}
void suaPhanTu() {
    int editIndex, newValue;
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &editIndex);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    if (editIndex >= 0 && editIndex < currentLength) {
        arr[editIndex] = newValue;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}
void xoaPhanTu() {
    int deleteIndex;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &deleteIndex);
    if (deleteIndex >= 0 && deleteIndex < currentLength) {
        for (int i = deleteIndex; i < currentLength - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        currentLength--;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}
int main() {
    int choice;
    do {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: nhapMang(); break;
            case 2: hienThiMang(); break;
            case 3: themPhanTu(); break;
            case 4: suaPhanTu(); break;
            case 5: xoaPhanTu(); break;
            case 6: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n"); break;
        }
    } while (choice != 6);
    return 0;
}

