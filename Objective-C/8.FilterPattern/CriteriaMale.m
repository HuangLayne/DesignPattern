//
//  CriteriaMale.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "CriteriaMale.h"

@implementation CriteriaMale

- (nonnull NSMutableArray<Person *> *)meetCriteria:(nonnull NSMutableArray<Person *> *)persons {
    NSMutableArray<Person *> *malePersons = [[NSMutableArray alloc] init];
    for (Person *person in persons) {
        if (NSOrderedSame == [person.gender compare:@"MALE" options:NSCaseInsensitiveSearch]) {
            [malePersons addObject:person];
        }
    }
    return malePersons;
}

@end
