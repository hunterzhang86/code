#include <python2.7/python.h>

// 1 c/cpp�еĺ���
int my_c_function(const char *arg) {
  int n = system(arg);
  return n;
}
// 2 python ��װ
static PyObject * wrap_my_c_fun(PyObject *self, PyObject *args) {
  const char * command;
  int n;
  if (!PyArg_ParseTuple(args, "s", &command))//����ǰ�python�ı���argsת����c�ı���command
    return NULL;
  n = my_c_function(command);//����c�ĺ���
  return Py_BuildValue("i", n);//��c�ķ���ֵnת����python�Ķ���
}
// 3 �����б�
static PyMethodDef MyCppMethods[] = {
    //MyCppFun1��python��ע��ĺ�������wrap_my_c_fun�Ǻ���ָ��
    { "MyCppFun1", wrap_my_c_fun, METH_VARARGS, "Execute a shell command." },
    { NULL, NULL, 0, NULL }
};
// 4 ģ���ʼ������
PyMODINIT_FUNC initMyCppModule(void) {
  //��ʼģ�飬��MyCppMethods��ʼ��MyCppModule��
  PyObject *m = Py_InitModule("MyCppModule", MyCppMethods);
  if (m == NULL)
    return;
}
