# Dịch chuyển tức thời
## Đề bài:
 Cho một dãy A gồm n ô trống được đánh số từ 1 tới n với giá trị khởi tạo ban đầu toàn bộ các ô đều = 0.  Ban đầu, con chip được đặt vào ô số 1. Trong mỗi lượt chơi, người chơi chỉ được thực hiện 1 trong 2 thao tác sau:
* Dịch chuyển con chip từ ô thứ i sang ô thứ i + 1.
* Dịch chuyển tức thời con chip đến 1 ô bất kỳ trong dãy (từ ô thứ i sang ô thứ j với điều kiện j != i + 1)

Sau mỗi lượt chơi, giá trị trong ô có con chip sẽ được tăng lên 1 đơn vị
Người chơi phải thực hiện 1 loạt các thao tác trên dãy A sao cho kết quả thu được là 1 dãy B cho trước.
Hỏi có ít nhất bao nhiêu lần dịch chuyển tức thời được sử dụng ?

### Ví dụ:
Dãy B được nhập từ bàn phím: 1 1 2 2 1
Ban đầu dãy A: 1 0 0 0 0
Bước 1: Nhảy sang ô tiếp theo ta được dãy A: 1 1 0 0 0
Bước 2: Nhảy sang ô tiếp theo ta được dãy A: 1 1 1 0 0 
Bước 3: Nhảy sang ô tiếp theo ta được dãy A: 1 1 1 1 0
Bước 4: Nhảy sang ô tiếp theo ta được dãy A: 1 1 1 1 1
Buoc 5: Dịch chuyển tức thì sang ô thứ 3 ta được dãy A: 1 1 2 1 1
Buoc 6: Nhảy sang ô tiếp theo ta được dãy A: 1 1 2 2 1.
**Kết thúc. Trả về số lần dịch chuyển ít nhất là: 1.**
>
**Input:** 
* Dòng đầu tiên chứa 1 giá trị T:  số lượng testcase với 1 < T < $10^4$.
    * Mỗi testcase chứa 2 dòng:
      * Dòng thứ nhất chứa n: số lượng phần tử của dãy B với  1< n < $2.10^5$.
      * Dòng thứ 2 chứa  $b_1, b_2$, ..... lần lượt là các giá trị của dãy B với  1< $b_i$ < $10 ^9$ .
      * 
**Ouput**:
Gồm 1 số duy nhất là số lần dịch chuyển tối thiểu

**Ví dụ:**
#### input
```
4
4
1 2 2 1
5
1 0 1 0 1
5
5 4 3 2 1
1
12
```
#### output
```
1
2
4
11
```

