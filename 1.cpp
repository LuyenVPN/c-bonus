// xóa các sản phẩm trong danh muc khi xoa danh mục

while (1) {
                printf("Ban co chac chan muon xoa danh muc nay? (Y/N): ");
                fgets(reply, sizeof(reply), stdin); 
                reply[strcspn(reply, "\n")] = '\0'; 
                if (strcmp(reply, "Y") == 0 || strcmp(reply, "y") == 0) {
                	for (j = 0; j < productCount; ) {
                        if (strcmp(menu[j].categoryname, list[i].name) == 0) {
                        	int k; 
                            for (k = j; k < productCount - 1; k++) {
                                menu[k] = menu[k + 1];
                            }
                            memset(&menu[productCount - 1], 0, sizeof(Product));
                            productCount--;
                        } else {
                            j++;
                        }
                    }
                    for (j = i; j < count - 1; j++) {
                        list[j] = list[j + 1];  
                    }
                    memset(&list[count - 1], 0, sizeof(Category));  
					int k; 
                    for ( k = 0; k < count - 1; k++) {
                        list[k].id = k + 1; 
                    }
                    count--; 
                    printf("Danh muc da duoc xoa thanh cong!\n");
                    saveCategoriesToFile();
                    break;
                } else if (strcmp(reply, "N") == 0 || strcmp(reply, "n") == 0) {
                    printf("Da huy thao tac xoa danh muc.\n");
                    break;
                } else {
                    printf("Lua chon khong hop le! Vui long nhap lai (Y/N).\n");
                }
            }
            break;
        }
    }
    if (!found) {
        printf("ID danh muc khong ton tai!\n"); 
    }
}
