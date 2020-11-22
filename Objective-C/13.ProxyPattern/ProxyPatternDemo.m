//
//  ProxyPatternDemo.m
//  13.ProxyPattern
//
//  Created by Layne on 2020/11/3.
//

#import "ProxyImage.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        id<ImageProtocol> image = [[ProxyImage alloc] initWithFileName:@"test_10mb.jpg"];
        // 图像将从磁盘加载
        [image display];
        // 图像不需要从磁盘加载
        [image display];
    }
    return 0;
}
