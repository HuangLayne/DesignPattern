//
//  Shape.h
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Shape : NSObject <NSCopying>

@property(strong, nonatomic) NSString *id;
@property(strong, nonatomic) NSString *type;

- (void)draw;

@end

NS_ASSUME_NONNULL_END
