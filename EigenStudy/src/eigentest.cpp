//
// Created by Steph
//
#include "utility.h"
#include <eigen3/Eigen/Geometry>

int main()
{
    //.....................Start here!.........................
    cout << "Hello Eigen !\n" << endl;


    //.....................1-简单创建矩阵与向量，并初始化.........................
    cout << "*********************************第一节开始************************************" << endl;
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

    //随机数
    Eigen::Vector3d vec1 = Eigen::Vector3d::Random();     
    //转为单位向量并输出模长
    vec1.normalize();
    cout << "vec1:\n" << vec1 << "\n" << "vec1.norm: " << vec1.norm() << "\n";
    cout << "*********************************第一节结束************************************" << endl << endl;


    //.....................2-旋转向量、旋转矩阵、四元数的相互转换，使用API，非手撕.........................
    cout << "*********************************第二节开始************************************" << endl;
    //2.1-轴角操作
    //绕x轴旋转60度的旋转向量
    Eigen::AngleAxisd v1(M_PI / 3, Eigen::Vector3d(1, 0, 0));
    //转化为旋转矩阵
    Eigen::Matrix3d m2 = v1.toRotationMatrix();
    //或者 Eigen::Matrix3d m1 = vec1.matrix();
    //转化为四元数
    Eigen::Quaterniond q1(v1);
    //输出
    cout << "m2:\n" << m2 << "\n" << endl; 
    cout << "q1:\n" << q1.x() << " " 
                    << q1.y() << " "
                    << q1.z() << " "
                    << q1.w() << "\n" << endl; 

    //2.2-四元数操作
    //依旧以q1为例
    Eigen::Matrix3d m3 = q1.toRotationMatrix();
    //或者Eigen::Matrix3d m3 = q1.Matrix();
    Eigen::AngleAxisd v2(q1);
    //输出m3
    cout << "m2:\n" << m3 << "\n" << endl; 

    //2.3-旋转矩阵操作
    Eigen::Matrix3d R1 = Eigen::Matrix3d::Identity();
    //转化为向量
    Eigen::AngleAxisd v3(R1);
    //或者 v3.fromRotationMatrix(R1);   
    //转化为四元数
    Eigen::Quaterniond q3(R1);
    //输出
    cout << "q3:\n" << q3.coeffs() << "\n" << endl;   

}
