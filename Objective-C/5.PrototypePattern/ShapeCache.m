//
//  ShapeCache.m
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/21.
//

#import "ShapeCache.h"
#import "Circle.h"
#import "Rectangle.h"
#import "Square.h"

@implementation ShapeCache

static NSMutableDictionary* shapeMap;

+ (void)loadCache {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      shapeMap = [[NSMutableDictionary alloc] initWithCapacity:3];

      Shape* circle = [[Circle alloc] init];
      circle.id = @"1";
      [shapeMap setObject:circle forKey:circle.id];

      Shape* square = [[Square alloc] init];
      square.id = @"2";
      [shapeMap setObject:square forKey:square.id];

      Shape* rectangle = [[Rectangle alloc] init];
      rectangle.id = @"3";
      [shapeMap setObject:rectangle forKey:rectangle.id];
    });
}

+ (Shape*)getShape:(NSString*)shapeId {
    Shape* shape = shapeMap[shapeId];
    return [shape copy];
}

@end
