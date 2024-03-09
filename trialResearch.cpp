#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main() {
    std::vector<double> arr;
    double ha = 12.0;
    std::vector<std::vector<double>> g;

    for (int i = 0; i < 29; ++i) {
        arr.push_back(ha);
        ++ha;
    }

    std::vector<double> h;
    srand(time(0));

    for (int k = 0; k < 100; ++k) {
        double p1 = static_cast<double>(rand() % 150) / 10.0 + 51.0;
        double p2 = static_cast<double>(rand() % 60) / 10.0 + 21.0;
        double p3 = static_cast<double>(rand() % 34) / 10.0 + 16.0;
        double p4 = static_cast<double>(rand() % 25) / 10.0 + 11.0;
        double p5 = static_cast<double>(rand() % 20) / 10.0 + 11.0;
        std::vector<double> d = {166.0, 196.0, 229.0, 267.0, 283.0, 272.0, 246.0, 213.0, 192.0, 161.0, 147.0, 160.0, 170.0, 185.0, 208.0, 232.0, 246.0, 241.0, 236.0, 225.0, 204.0, 182.0, 161.0, 131.0};
        double p6 = d[0] - (p1 + p2 + p3 + p4 + p5);
        std::vector<double> f;
        int j = 0;

        while (j < d.size()) {
            while ((p1 + p2 + p3 + p4 + p5 + p6) != d[j] || !(12.0 <= p6 && p6 <= 40.0)) {
                p1 = static_cast<double>(rand() % 150) / 10.0 + 50.0;
                p2 = static_cast<double>(rand() % 60) / 10.0 + 20.0;
                p3 = static_cast<double>(rand() % 34) / 10.0 + 15.0;
                p4 = static_cast<double>(rand() % 25) / 10.0 + 10.0;
                p5 = static_cast<double>(rand() % 20) / 10.0 + 10.0;
                p6 = d[j] - (p1 + p2 + p3 + p4 + p5);
            }
            f.push_back(p1);
            f.push_back(p2);
            f.push_back(p3);
            f.push_back(p4);
            f.push_back(p5);
            f.push_back(p6);
            j++;
        }

        g.push_back(f);
    }

    std::vector<std::vector<double>> h_matrix(g.size(), std::vector<double>(6, 0.0));

    for (size_t i = 0; i < g.size(); ++i) {
        for (size_t j = 0; j < 6; ++j) {
            h_matrix[i][j] = g[i][j];
        }
    }

    // Printing the h matrix
    for (size_t i = 0; i < h_matrix.size(); ++i) {
        for (size_t j = 0; j < 6; ++j) {
            std::cout << std::setw(12) << std::fixed << std::setprecision(4) << h_matrix[i][j];
        }
        std::cout << std::endl;
    }

    // Cost function
    auto cost_function = [](const std::vector<std::vector<double>>& arr) {
        double cost = 0.0;
        int k = 1;
        double a, b, c, d, e;
        for (const auto& row : arr) {
            for (const auto& value : row) {
                if (k > 6) {
                    k = 1;
                }
                double target_value = 0.0;
                if (k == 1) {
                    a = 0.00375;
                    b = 2.0;
                    c = 0.0;
                    d = 18.0;
                    e = 0.037;
                    target_value = 50.0;
                } else if (k == 2) {
                    a = 0.0175;
                    b = 1.75;
                    c = 0.0;
                    d = 16.0;
                    e = 0.038;
                    target_value = 20.0;
                } else if (k == 3) {
                    a = 0.0625;
                    b = 1.0;
                    c = 0.0;
                    d = 14.0;
                    e = 0.04;
                    target_value = 15.0;
                } else if (k == 4) {
                    a = 0.00834;
                    b = 3.25;
                    c = 0.0;
                    d = 12.0;
                    e = 0.045;
                    target_value = 10.0;
                } else if (k == 5) {
                    a = 0.025;
                    b = 3.0;
                    c = 0.0;
                    d = 13.0;
                    e = 0.042;
                    target_value = 10.0;
                } else if (k == 6) {
                    a = 0.025;
                    b = 3.0;
                    c = 0.0;
                    d = 13.50;
                    e = 0.041;
                    target_value = 12.0;
                }
                cost += ((a * value * value) + (b * value) + c) + (d * sin(e * (target_value - value)));
                k++;
            }
        }
        std::cout << std::fixed << std::setprecision(4) << cost << std::endl;
    };

    // Calculate cost for h_matrix
    cost_function(h_matrix);

    return 0;
}
