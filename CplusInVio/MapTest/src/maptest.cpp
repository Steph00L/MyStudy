//
// Created by Steph
//
#include <iostream>
#include <map>
#include <vector>
#include <random>
#include <chrono>

struct feature       //特征点
{
    int id;          //特征点id
    int uv[2];       //特征点像素坐标
    feature(int id_, int a, int b) : id(id_) { uv[0] = a; uv[1] = b; }
};

struct keyFrame                          //关键帧
{
    int id;                              //关键帧id
    std::vector<feature> features;       //该帧中的特征点集合
    keyFrame(int id_) : id(id_) {}
};

int main()
{
    size_t m = 0;                          //feature id从0开始不断累加
    std::map<int, keyFrame> keyFrames;     //用map来实现关键帧存储，便于对关键帧进行任意插入与删除

    //随机生成 [10, 30] 之间的int数字以作为特征点坐标
    std::random_device rd;                 
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis1(10, 30);

    std::chrono::steady_clock::time_point t_start = std::chrono::steady_clock::now();

    //构建5个关键帧
    for (size_t i = 0; i < 5; ++i)
    {
        keyFrame KF(i);

        //每帧构建4个特征点，并假设没有共视点
        for (size_t j = 0; j < 4; ++j)
        {
            int a = dis1(gen);
            int b = dis1(gen);
            feature fea(m + j, a, b);
            KF.features.push_back(fea);    //构建特征点并存入关键帧
        }

        m += 4;

        keyFrames.insert(std::make_pair(i, KF));     //将关键帧及其对应id存入关键帧集合
    }

    //输出每个关键帧中第三个特征点的uv
    for (auto kf : keyFrames)
    {
        int u_t = kf.second.features[2].uv[0];
        int v_t = kf.second.features[2].uv[1];
        int id_t = kf.second.features[2].id;
        std::cout << "第" << kf.first + 1 
                  << "个关键帧中第三个特征点的坐标及编号为：" 
                  << "u = " << u_t << " v = " << v_t
                  << " id = " << id_t <<"\n";
    }

    //下面尝试对其中某个关键帧进行删除
    //以第二帧为例,通过key值来删除（id = 1）
    keyFrames.erase(1);

    //查看剩余帧数
    std::cout << "keyFrames中剩余关键帧数为： " << keyFrames.size() << "\n";
    //若存在id为1的关键帧，则输出true
    std::cout << static_cast<bool>(keyFrames.find(1) != keyFrames.end()) << "\n";

    //下面尝试插入新的id为1的关键帧,并存入一个特征点
    keyFrame KF_1(1);
    feature f(m, 0, 0);
    KF_1.features.push_back(f);
    keyFrames.insert(std::make_pair(KF_1.id, KF_1));

    //输出
    //若存在id为1的关键帧，则输出true
    std::cout << "keyFrames中最终的关键帧数为： " << keyFrames.size() << "\n";
    std::cout << static_cast<bool>(keyFrames.find(1) != keyFrames.end()) << "\n";
    std::cout << "第二个关键帧中特征点的坐标及编号为：" 
              << "u = " << keyFrames.at(1).features[0].uv[0]
              << " v = " << keyFrames.at(1).features[0].uv[0] 
              << " id = " << keyFrames.at(1).features[0].id << "\n";

    std::chrono::steady_clock::time_point t_end = std::chrono::steady_clock::now();
    std::chrono::duration<float, std::micro> t_pass = (t_end - t_start) / 1000;
    std::cout << "程序总耗时为： " << t_pass.count() << "ms" << "\n";
}