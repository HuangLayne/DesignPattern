//
//  AbstractFactory.m
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/18.
//

#import "AbstractFactory.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation AbstractFactory

- (id<ColorProtocol>)getColor:(NSString*)colorType {
    MethodNotImplemented();
}

- (id<ShapeProtocol>)getShape:(NSString*)shapeType {
    MethodNotImplemented();
}

@end
