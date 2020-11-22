//
//  Shape.m
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/20.
//

#import "Shape.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation Shape

- (id)copyWithZone:(NSZone *)zone {
    Shape *copyShape = [[[self class] allocWithZone:zone] init];
    // 赋值操作
    copyShape.id = self.id;
    copyShape.type = self.type;
    return copyShape;
}

- (void)draw {
    MethodNotImplemented();
}

@end
