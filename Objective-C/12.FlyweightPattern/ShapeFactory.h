//
//  ShapeFactory.h
//  12.FlyweightPattern
//
//  Created by Layne on 2020/10/30.
//

#import "Circle.h"

NS_ASSUME_NONNULL_BEGIN

@interface ShapeFactory : NSObject

+ (id<ShapeProtocol>)getCircle:(NSString*)color;

@end

NS_ASSUME_NONNULL_END
