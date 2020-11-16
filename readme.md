# 随机方法
## 包装函数
在[random_method.hpp](./random_method.hpp)中:
* randint(m, n)产生$[m, n]$内的均匀随机整数
* randreal()产生随机实数$x: x \in [0, 1)$
## 打乱一个数组的算法
* 在[random_method.hpp](./random_method.hpp)声明了相关函数，[random_method.hpp](./random_method.hpp)里描述了具体细节
   * 注意在[random_method.hpp](./random_method.hpp)中使用
   ```c++
   std::chrono::system_clock::now().time_since_epoch().count()
   ```
   作为随机数种子来保证每次调用程序产生的随机数不同
* 在[main.cpp](./main.cpp)里给出了一个例子
