//
//  FactoryProducer.m
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/18.
//

#import "FactoryProducer.h"
#import "ColorFactory.h"
#import "ShapeFactory.h"
@implementation FactoryProducer

+ (AbstractFactory*)getFactory:(NSString*)choice {
    if ([choice isEqualToString:@"SHAPE"]) {
        return [[ShapeFactory alloc] init];
    } else if ([choice isEqualToString:@"COLOR"]) {
        return [[ColorFactory alloc] init];
    }
    return nil;
}

@end
