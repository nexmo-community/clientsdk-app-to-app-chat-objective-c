//
//  NXMEventEmbeddedInfo.h
//  NexmoClient
//
//  Created by Nicola Di Pol on 06/05/2021.
//  Copyright © 2021 Vonage. All rights reserved.
//

@import Foundation;

@class NXMUser;

@interface NXMEventEmbeddedInfo : NSObject

@property (nonnull, readonly, nonatomic) NXMUser *user;

@end
