# 这个代码实现了打乱一个数组的算法
* 在[randomizeArray.h](./randomizeArray.h)声明了相关函数，[randomizeArray.cpp](./randomizeArray.cpp)里描述了具体细节
   * 注意在[randomizeArray.cpp](./randomizeArray.cpp)中使用
   ```c++
   std::chrono::system_clock::now().time_since_epoch().count()
   ```
   作为随机数种子来保证每次调用程序产生的随机数不同
* 在[main.cpp](./main.cpp)里给出了一个例子
