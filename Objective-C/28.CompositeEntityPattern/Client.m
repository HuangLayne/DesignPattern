//
//  Client.m
//  28.CompositeEntityPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Client.h"
#import "CompositeEntity.h"

@implementation Client {
    CompositeEntity* _compositeEntity;
}

- (void)printData {
    if (_compositeEntity == nil) {
        _compositeEntity = [[CompositeEntity alloc] init];
    }
    NSMutableArray* datas = [_compositeEntity getData];
    for (NSString* data in datas) {
        NSLog(@"Data: %@", data);
    }
}

- (void)setData1:(NSString*)data1 Data2:(NSString*)data2 {
    if (_compositeEntity == nil) {
        _compositeEntity = [[CompositeEntity alloc] init];
    }
    [_compositeEntity setData1:data1 Data2:data2];
}

@end
