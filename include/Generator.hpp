#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <chrono>

class Generator
{
    std::random_device device;
    std::mt19937 randomNumberGenerator;
    std::uniform_int_distribution<int> ballsDistributor;
    std::uniform_real_distribution<double> probabilityGenerator;
    std::vector<char> ballsArray;

private:
    char transformIntToCharBall(int number);

public:
    Generator();
    void generateRandomly(std::vector<char> &ballsArray, int ballsArraySize);
    void generateProbabilistically(std::vector<char> &ballsArray, int ballsArraySize, double probability);
    void generateProportionally(std::vector<char> &ballsArray, int ballsArraySize, int blueBalls, int greenBalls, int redBalls);
    bool generateFromShellInput(std::vector<char> &ballsArray);

};

#endif