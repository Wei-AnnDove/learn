背景：malloc、free是c语言库函数，new、delete是c++操作符

a	new自动计算分配内存大小，malloc手动
b	new返回的是对象类型指针，malloc返回的是void*，之后进行类型转换
c	new分配失败抛出异常，malloc失败返回NULL
d	new在free store上分配内存，malloc在堆上分配

malloc
	分配虚拟内存 break堆   超过128k->mmap文件映射区

new
	free store:{
		1.operator new		void* operator new(
		2.申请足够的空间
		3.调用构造函数，初始化成员变量(拥有物理内存)
	}