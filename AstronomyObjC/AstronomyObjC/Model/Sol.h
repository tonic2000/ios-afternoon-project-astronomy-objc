//
//  Sol.h
//  AstronomyObjC
//
//  Created by Nick Nguyen on 4/21/20.
//  Copyright © 2020 Nick Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SolCamera.h"
NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(MarsSol)
@interface Sol : NSObject

@property (nonatomic, readonly) NSNumber *idNumber;
@property (nonatomic, readonly) NSNumber *sol;
@property (nonatomic, readonly, copy) NSString *imageURL;
@property (nonatomic, readonly) SolCamera *camera;
@property (nonatomic, readonly) NSDate *earthDate;


- (instancetype)initWithIdNumber:(NSNumber *)idNumber
                             sol:(NSNumber *)sol
                        imageURL:(NSString *)imageURL
                          camera:(SolCamera *)camera
                       earthDate:(NSDate *)earthDate;


- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
