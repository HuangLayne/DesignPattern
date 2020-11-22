//
//  ShapeDecorator.h
//  10.DecoratorPattern
//
//  Created by Layne on 2020/10/28.
//

#import "ShapeProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ShapeDecorator : NSObject <ShapeProtocol> {
   @protected
    id<ShapeProtocol> _decoratedShape;
}

- (instancetype)initWithShape:(id<ShapeProtocol>)decoratedShape;

@end

NS_ASSUME_NONNULL_END
