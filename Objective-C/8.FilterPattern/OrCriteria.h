//
//  OrCriteria.h
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "CriteriaProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface OrCriteria : NSObject <CriteriaProtocol>

- (instancetype)initWithCriteria:(id<CriteriaProtocol>)criteria OtherCriteria:(id<CriteriaProtocol>)otherCriteria;

@end

NS_ASSUME_NONNULL_END
