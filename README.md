# Huỳnh Tấn Phát

 **Bài báo cáo loop**

 1.[Vòng lặp For.](#for)
 <a name="for">  
 
 2.[Vòng lặp While.](#WHILE)
 <a name="WHILE">  
 
 3.[Vòng lặp Do...While.](#Do...While)
 <a name="Do...While">  
 
 **1. FOR**  
 ***Cú pháp:***  
  `*for ( khởi tạo biến; điều kiện; cập nhật giá trị mới cho biến) { \\\Lệnh hoặc khối lệnh}*`  
  **Trong đó:**  
    <li> Khởi tạo biến: là phép toán gán giá trị ban đầu cho biến điều khiển.  
    <li> Điều kiện : biểu thức điều kiện để thực hiện vòng lặp.  
    <li> Cập nhật giá trị mới cho biến: tăng hoặc giảm giá trị của biến điều khiển.  
    <li> Lưu đồ:  
       ![](https://camo.githubusercontent.com/bce0af631579c9ea04027e188f450aaf4b6717ab/687474703a2f2f766965746a61636b2e636f6d2f6c61705f7472696e685f632f696d616765732f766f6e675f6c61705f666f725f74726f6e675f632e6a7067)  
       <li> Bước 1: Gán giá trị đầu cho biến điều khiển.
       <li> Bước 2: Xác định giá trị biểu thức điều kiện.
       <li> Bước 3: Nếu đúng thì thực hiện lệnh hoặc khối lệnh, sai thì dừng vòng lặp.
       <li> Bước 4: Cập nhật giá trị mới cho biến điều khiển và quay lại bước 2.  
    **Ví dụ**  
    `For( i=100;i>10; i--) {tinh hieu -=;}`  
    <li> Giá trị ban đầu của biến i = 100.
    <li> Mỗi vòng lặp i giảm xuống 1.
    <li> Giá trị cuối của i=10-1
    <li> Biến tổng có giá trị : hieu =100-1-2...-10.
    <li> Khi i=10-1, biểu thức điều kiện có giá trị là False, vòng lặp dừng.  
    
  **2. WHILE**  
  
  ***Cú pháp:***  
    `*while(biểu thức) { lệnh hoặc khối lệnh; }*`  
       **Trong đó:**  
       <li> Biểu thức: nếu biểu thức cho giá trị True hì các "lệnh hoặc khối lệnh" được thực hiện. Nếu biểu thức cho giá trị False thì dừng vòng lặp.  
       <li>Khi hoàn thành lệnh hoặc khối lệnh thì quay về bước kiểm tra biểu thứ và tiếp tục vòng lặp.  
       <li>Cần lưu ý tránh trường hợp lặp vô tận.  
       <li>Lưu đồ :  
       ![](https://camo.githubusercontent.com/5d959bcdd121a638b9a19941fb510da8b5d18c11/687474703a2f2f766965746a61636b2e636f6d2f63706c7573706c75732f696d616765732f766f6e675f6c61705f7768696c655f74726f6e675f6370702e6a7067)  
       **Ví dụ:**  
                  `i=0; While (i < n) { i++; s+=i;}`  
             <li>giá trị đầu của i=0  
             <li>giá trị cuối của i=n  
             <li>S=1+2+3+...+n  
             
   **3.Do...While**  
   
   ***Cú pháp:***  
     `do {lệnh hoặc khối lệnh;} while( biểu thức );`  
   ***Trong đó:***  
     <li>Lệnh( khối lệnh): được thực hiện ngay khi bắt đầu vòng lặp.  
     <li>Biểu thức : được kiểm tra sau khi thực hiện lệnh (khối lệnh). Nếu biểu thức cho giá trị True quay lại thực hiện tiếp lệnh hoặc khối lệnh. Ngược lại nếu biểu thức có giá trị False thì dừng vòng lặp.  
     <li>Lưu ý : cần chú ý trường hợp lặp vô hạn  
     <li>Lưu đồ:  
     ![](https://camo.githubusercontent.com/531e1139c8a3e008d7c3078c80bb3b8cf8a1c98e/687474703a2f2f766965746a61636b2e636f6d2f6c61705f7472696e685f632f696d616765732f766f6e675f6c61705f646f5f7768696c655f74726f6e675f632e6a7067)  
     
   **Ví dụ:**  
        `i=0; do {i++; s+=i;} while (i<n);`  
       <li>giá trị đầu của i =0
       <li>giá trị cuối của i=n
       <li>s=1+2+3+...+n
       <li>giá trị cuối của i=n
