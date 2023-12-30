# Ước chung lớn nhất
## Đề bài :
* Với 1 số nguyên dương n, trong tất cả các cặp số nguyên a, b thỏa mãn $(1 \le a < b \le n)$ (1) và với gcd(a, b) là ước chung lớn nhất của 2 số a và b. Tìm ra giá trị gcd lớn nhất trong tất cả các gcd của cặp số a, b thỏa mãn điều kiện (1) trên.

###### Ví dụ:
```
n = 4;
gcd(1, 2) = 1
gcd(1, 3) = 1
gcd(1, 4) = 1
gcd(2, 3) = 1
gcd(2, 4) = 2
gcd(3, 4) = 1
```
**gcd(a,b) lớn nhất có giá trị: 2**

=> Trả về kết quả 2

**Input**
* Dòng thứ nhất chứa 1 số T, số lượng testcase với 1 < T < 1000
  * Mỗi test case gồm 1 số nguyên dương  1 < n < $10^6$.

**output**
* Mỗi test case trả về 1 giá trị duy nhất 

**input**
> 2 5 3


**output**
> 2 1


