//
//  CustomerFactory.h
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import "AbstractCustomer.h"

NS_ASSUME_NONNULL_BEGIN

@interface CustomerFactory : NSObject

+ (AbstractCustomer*)getCustomer:(NSString*)name;

@end

NS_ASSUME_NONNULL_END
