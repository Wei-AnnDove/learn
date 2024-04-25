#2024/3/6
nio  非阻塞io
    不适合网络编程

bio  阻塞io

aio  异步io
  fdset(fd, cd)
  callback()回调函数
  对于不需要大量io 文件、磁盘好用

reactor  反应堆
  抽象出的epoll 
  每个IO对应的回调函数
