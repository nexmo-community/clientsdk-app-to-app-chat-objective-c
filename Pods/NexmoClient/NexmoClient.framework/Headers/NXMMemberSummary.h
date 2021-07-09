//
//  NXMMemberSummary.h
//  NexmoClient
//
//  Copyright © 2021 Vonage. All rights reserved.
//

@import Foundation;
#import "NXMEnums.h"

@class NXMUser;

@interface NXMMemberSummary: NSObject

@property (nonnull, readonly, nonatomic) NSString *conversationUuid;
@property (nonnull, readonly, nonatomic) NSString *memberUuid;
@property (nonnull, readonly, nonatomic) NXMUser *user;
@property (nonatomic, readonly) NXMMemberState state;

@end
