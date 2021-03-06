#include <python2.7/python.h>

// 1 c/cpp中的函数
int my_c_function(const char *arg) {
  int n = system(arg);
  return n;
}
// 2 python 包装
static PyObject * wrap_my_c_fun(PyObject *self, PyObject *args) {
  const char * command;
  int n;
  if (!PyArg_ParseTuple(args, "s", &command))//这句是把python的变量args转换成c的变量command
    return NULL;
  n = my_c_function(command);//调用c的函数
  return Py_BuildValue("i", n);//把c的返回值n转换成python的对象
}
// 3 方法列表
static PyMethodDef MyCppMethods[] = {
    //MyCppFun1是python中注册的函数名，wrap_my_c_fun是函数指针
    { "MyCppFun1", wrap_my_c_fun, METH_VARARGS, "Execute a shell command." },
    { NULL, NULL, 0, NULL }
};
// 4 模块初始化方法
PyMODINIT_FUNC initMyCppModule(void) {
  //初始模块，把MyCppMethods初始到MyCppModule中
  PyObject *m = Py_InitModule("MyCppModule", MyCppMethods);
  if (m == NULL)
    return;
}
