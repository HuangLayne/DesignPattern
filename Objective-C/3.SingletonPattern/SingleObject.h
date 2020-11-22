//
//  SingleObject.h
//  3.SingletonPattern
//
//  Created by Layne on 2020/10/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SingleObject : NSObject

+ (SingleObject*)getInstance;

- (void)showMessage;

@end

NS_ASSUME_NONNULL_END
