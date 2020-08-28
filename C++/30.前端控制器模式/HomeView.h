/**
 * @file HomeView.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-06
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef HOME_VIEW_H_
#define HOME_VIEW_H_

#include <iostream>
class HomeView {
   public:
    HomeView() = default;
    ~HomeView() = default;

    void Show() { std::cout << "Displaying Home Page" << std::endl; }
};

#endif  // HOME_VIEW_H_
