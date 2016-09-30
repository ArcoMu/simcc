/********************************************************************
    created:    2014/06/19
    created:    19:6:2014   11:10
    filename:   simcc/inherited_json.h
    author:     weizili

    purpose:
*********************************************************************/

#pragma once

#include "json_common.h"
#include "json_value.h"
#include "json_array.h"
#include "json_object.h"

namespace simcc {
namespace json {
class SIMCC_EXPORT InheritedConfJSONObject {
public:
    // @brief ��JSON��ʽ���ļ��н�����JSON����
    //     ���JSON�ļ�һ����һ�������ļ����������ļ�������� "inherited_from" ���key��
    // �����������ļ���ĳЩ�������Ǽ̳��� "inherited_from" ָ����ļ������ǳ�֮ΪĬ�����á�
    // ��ǰ��������ļ��е�������Ḳ��Ĭ��������ͬ��key��
    // @param[in] - const string& json_file_path
    // @return - json::JSONObjectPtr ���ʧ�ܻ᷵��һ���ն���
    static json::JSONObjectPtr Parse(const string& json_file_path);
};

}
}