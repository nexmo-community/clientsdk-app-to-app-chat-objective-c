//
//  NXMMembersSummaryPage.h
//  NexmoClient
//
//  Copyright © 2021 Vonage. All rights reserved.
//

#import "NXMMemberSummary.h"
#import "NXMPage.h"

@interface NXMMembersSummaryPage : NXMPage

/*!
 * @brief Member summaries contained in the page. The array size could be smaller than the page size.
 * @code NSArray<NXMMemberSummary *> *memberSummaries = myNXMMembersSummaryPage.memberSummaries;
 */
@property (nonatomic, nonnull, readonly) NSArray<NXMMemberSummary *> *memberSummaries;

/*!
 * @brief Retrieves the next page. If the current page is the last, completionHandler will be called with an error.
 * @code [myNXMMembersSummaryPage nextPage:^(NSError * _Nullable error, NXMMembersSummaryPage * _Nullable page) {
     // ... use page...
 }];
 */
- (void)nextPage:(void(^_Nonnull)(NSError * _Nullable error, NXMMembersSummaryPage * _Nullable page))completionHandler;

/*!
 * @brief Retrieves the previous page. If the current page is the first, completionHandler will be called with an error.
 * @code [myNXMMembersSummaryPage previousPage:^(NSError * _Nullable error, NXMMembersSummaryPage * _Nullable page) {
 // ... use page...
 }];
 */
- (void)previousPage:(void(^_Nonnull)(NSError * _Nullable error, NXMMembersSummaryPage * _Nullable page))completionHandler;

@end
