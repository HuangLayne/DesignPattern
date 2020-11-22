//
//  ShapeFactory.h
//  1.FactoryPattern
//
//  Created by Layne on 2020/10/17.
//

#import "ShapeProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ShapeFactory : NSObject

+ (id<ShapeProtocol>)getShape:(NSString*)shapeType;

@end

NS_ASSUME_NONNULL_END
