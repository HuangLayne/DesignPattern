//
//  ComputerPartProtocol.h
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ComputerPartVisitorProtocol;
@protocol ComputerPartProtocol <NSObject>

- (void)accept:(id<ComputerPartVisitorProtocol>)computerPartVisitor;

@end

NS_ASSUME_NONNULL_END
