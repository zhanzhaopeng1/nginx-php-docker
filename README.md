# nginx-php-docker

包含 nginx、PHP的docker

PHP 添加了 mysql、redis、yaf、kafka、mongodb 扩展

运行步骤：
1、保证本地已安装docker 和 docker-compose
2、git clone 代码
3、执行docker-compose up -d 
4、浏览器 http://127.0.0.1:8000/index.php
5、如果需要调试代码  
  a、首先将代码 copy 到 ./nginx/www 下
  b、然后修改 default.conf 目录
  c、最后执行 docker-compose restart
