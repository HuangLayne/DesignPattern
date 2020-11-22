//
//  CoarseGrainedObject.m
//  28.CompositeEntityPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "CoarseGrainedObject.h"
#import "DependentObject1.h"
#import "DependentObject2.h"

@implementation CoarseGrainedObject {
    DependentObject1* _do1;
    DependentObject2* _do2;
}

- (void)setData1:(NSString*)data1 Data2:(NSString*)data2 {
    if (_do1 == nil) {
        _do1 = [[DependentObject1 alloc] init];
    }
    if (_do2 == nil) {
        _do2 = [[DependentObject2 alloc] init];
    }
    [_do1 setData:data1];
    [_do2 setData:data2];
}

- (NSMutableArray<NSString*>*)getData {
    NSMutableArray* datas = [[NSMutableArray alloc] init];
    [datas addObject:_do1.data];
    [datas addObject:_do2.data];
    return datas;
}

@end
