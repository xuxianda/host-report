#include <iostream>


class SysUtils {

public:

    SysUtils();


	/// <summary>
	///		��ȡ��ǰϵͳ����
	/// </summary>
	/// <returns>
	///		ϵͳ�����ַ���
	/// </returns>
	std::string getLocalSystemType();


	/// <summary>
	/// ��ȡӦ�ó�������·��
	/// </summary>
	/// <returns></returns>
	std::string getApplicationPath();

};