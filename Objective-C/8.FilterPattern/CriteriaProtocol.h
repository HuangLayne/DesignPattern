//
//  CriteriaProtocol.h
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CriteriaProtocol <NSObject>

- (NSMutableArray<Person*>*)meetCriteria:(NSMutableArray<Person*>*)persons;

@end

NS_ASSUME_NONNULL_END
