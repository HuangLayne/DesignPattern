//
//  AbstractFactory.h
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/18.
//

#import "ColorProtocol.h"
#import "ShapeProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface AbstractFactory : NSObject

- (id<ColorProtocol>)getColor:(NSString*)colorType;
- (id<ShapeProtocol>)getShape:(NSString*)shapeType;

@end

NS_ASSUME_NONNULL_END
