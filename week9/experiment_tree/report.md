PK
    V�^I��i�b  b    实验报告 week7.mdup ��?�实验报告 week7.md实验报告 week7
===

`罗剑杰  教务三班  15331229`

> 实验环境： Ubuntu 16.04lts

源程序
---
已经存在于目录里面，具体的文件结构如下:
```
.
├── binary_tree.cpp
├── binary_tree.hpp
├── compileAndRun.sh
├── main
├── main.cpp
├── report.md
└── 体会.md

0 directories, 7 filess
```
**运行sh脚本compileAndRun立即可以编译运行**

**各种功能实现主要以递归形式实现**
**主要的invert() 翻转树的方法的代码如下**
```cpp
void binaryTree::invert(Node* parent) {
  // 如果需要提高效率的话，可以在这个if中间加上排除叶节点的情况
  if (parent == nullptr) {
    return;
  } else {
    swap(parent->lchild, parent->rchild);
    invert(parent->lchild);
    invert(parent->rchild);
  }
}
```
要翻转整棵树，只需要传入root指针即可

-------


运行结果
---

 标准输入
```
longj@longj-working-bench:~/Data_Structure/week9/experiment_tree$ ./compileAndRun.sh 
running the programe
0 for the standard input and other for freedom input
0
The old tree
r:R
    l:A
        l:C
            l:G
            r:H
        r:D
            l:I
    r:B
        l:E
        r:F
The tree after invert
r:R
    l:B
        l:F
        r:E
    r:A
        l:D
            r:I
        r:C
            l:H
            r:G

```
发现翻转符合题意。PK 
    V�^I��i�b  b                  实验报告 week7.mdup ��?�实验报告 week7.mdPK      a   �    