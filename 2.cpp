// thêm file vô passworf
void savePasswordToFile(const char *password) {
    FILE *file = fopen("password.txt", "w");  // Mở file để ghi (w: ghi đè file cũ)
    if (file == NULL) {
        printf("Loi khi mo file!\n");
        return;
    }
    fprintf(file, "%s", password);  // Ghi mật khẩu vào file
    fclose(file);  // Đóng file
    printf("Mật khẩu đã được lưu vào file.\n");
}
