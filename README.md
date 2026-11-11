# PFR192

Thực hành code môn PRF192.

Tổng hợp bài thực hành C từ các workshop, buổi học và bài tự luyện. Repository gồm **92 tệp C**; nội dung mã nguồn và tên tệp gốc được giữ nguyên khi sắp xếp.

## Cấu trúc

| Thư mục | Nội dung |
| --- | --- |
| [`basics/`](basics/) | Nhập xuất, khai báo biến, điều kiện và bài cơ bản |
| [`lessons/`](lessons/) | Bài theo buổi: slot 04–09, 11–13, 15, 17 và 19 |
| [`workshops/workshop-02/`](workshops/workshop-02/) | Workshop 02: mã nguồn, đề PDF và CMake |
| [`workshops/workshop-03/`](workshops/workshop-03/) | Workshop 03: mã nguồn, đề PDF và CMake |
| [`practice/exercises/`](practice/exercises/) | Các bài tự luyện riêng lẻ |
| [`practice/sets/`](practice/sets/) | Ba bộ bài tự luyện, chia thư mục theo bộ |
| [`practice/exams/`](practice/exams/) | Bài luyện đề |
| [`examples/`](examples/) | Mã mẫu và ví dụ mảng, sắp xếp |

Xem [bảng đối chiếu nguồn mã](docs/source-map.md) để tìm vị trí mới của từng tệp trong `PRF192_new` và commit đã nhập từ ba repository cũ. Lịch sử commit của ba repository cũ được giữ lại.

## Biên dịch một bài

Cần trình biên dịch C như GCC hoặc Clang. Chạy từ thư mục gốc repository:

```sh
mkdir -p build
cc -std=c11 basics/Hello.c -o build/hello
./build/hello
```

Thay `basics/Hello.c` bằng đường dẫn bài muốn chạy. Nếu bài dùng hàm toán học và trình biên dịch yêu cầu, thêm `-lm` vào cuối lệnh biên dịch. Mỗi tệp C thường là một bài độc lập; không ghép toàn bộ các tệp có `main()` vào một chương trình.

Các workshop và slot 13 giữ file `CMakeLists.txt` của repository gốc để tiếp tục dùng với CMake/CLion.

## Ghi chú học tập

- Một số tệp là ví dụ trên lớp hoặc bài đang làm; đây không phải bộ đáp án đã được kiểm chứng toàn bộ.
- `lessons/slot-19/SL19.FscanfFprintf.c` giữ đường dẫn tệp đầu vào trên máy cũ. Đổi đường dẫn trong bài cho phù hợp trước khi chạy.
- Lưu kết quả biên dịch vào `build/`; thư mục này và các tệp debug đã được đưa vào `.gitignore`.
- Thư mục `PRF192_new` trên máy được giữ nguyên.
