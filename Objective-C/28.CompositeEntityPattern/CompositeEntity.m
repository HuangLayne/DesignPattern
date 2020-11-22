//
//  CompositeEntity.m
//  28.CompositeEntityPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "CompositeEntity.h"
#import "CoarseGrainedObject.h"

@implementation CompositeEntity {
    CoarseGrainedObject* _cgo;
}

- (void)setData1:(NSString*)data1 Data2:(NSString*)data2 {
    if (_cgo == nil) {
        _cgo = [[CoarseGrainedObject alloc] init];
    }
    [_cgo setData1:data1 Data2:data2];
}

- (NSMutableArray<NSString*>*)getData {
    return [_cgo getData];
}

@end
