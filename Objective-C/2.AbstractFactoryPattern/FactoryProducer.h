//
//  FactoryProducer.h
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/18.
//

#import "AbstractFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface FactoryProducer : NSObject

+ (AbstractFactory*)getFactory:(NSString*)choice;

@end

NS_ASSUME_NONNULL_END
