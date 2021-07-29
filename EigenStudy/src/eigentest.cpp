//
// Created by Steph
//
#include "utility.h"
#include <eigen3/Eigen/Geometry>

int main()
{
    cout << "Hello Eigen !\n" << endl;

    //声明一个2×3的矩阵
    Eigen::Matrix<double, 2, 3> m_23;
    //简单进行赋值
    m_23 << 1, 2, 3, 3, 2, 1;
    //输出矩阵m_23
    cout << "m_23:\n" << m_23 << "\n" << endl;

    //Eigen中的内置类型：3×3
    Eigen::Matrix3d m_33;
    //初始化为单位阵
    m_33.setIdentity();
    //等价于 
    //Eigen::Matrix3d m_33 = Eigen::Matrix3d::Identity();

    //3×1向量（矩阵）,并初始化为零 
    Eigen::Vector3d v_31 = Eigen::Vector3d::Zero();
    //同样的，等价于
    //v_31.setZero();

    //输出m_33和v_31
    cout << "m_33:\n" << m_33 << "\n" << endl;
    cout << "v_31:\n" << v_31 << "\n" << endl;

}