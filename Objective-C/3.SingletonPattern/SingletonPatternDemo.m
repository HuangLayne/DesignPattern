//
//  SingletonPatternDemo.m
//  3.SingletonPattern
//
//  Created by Layne on 2020/10/18.
//

#import "SingleObject.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        //获取唯一可用的对象
        SingleObject* object = [SingleObject getInstance];

        //显示消息
        [object showMessage];
    }
    return 0;
}
