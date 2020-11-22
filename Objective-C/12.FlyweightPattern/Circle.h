//
//  Circle.h
//  12.FlyweightPattern
//
//  Created by Layne on 2020/10/30.
//

#import "ShapeProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Circle : NSObject <ShapeProtocol>

- (instancetype)initWithColor:(NSString*)color;
- (void)setX:(int)x;
- (void)setY:(int)y;
- (void)setRadius:(int)radius;

@end

NS_ASSUME_NONNULL_END
