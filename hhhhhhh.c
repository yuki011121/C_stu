typedef struct users  //typedef 可以定义结构体别名
{
  char usersid[11]; //账号
  char userspassword[20]; //密码
  char name[15];//姓名为字符串
  char sex; //性别为单个字符
  char groups{10}//民族
  long phone; //电话号码为长整型
}users;
