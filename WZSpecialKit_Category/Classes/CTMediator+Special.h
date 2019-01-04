//
//  CTMediator+Special.h
//  WZSpecialKit_Category
//
//  Created by 王振 on 2019/1/4.
//

#import <CTMediator/CTMediator.h>
#import <WZAPIsKit/APIRequest.h>
#import <WZAPIsKit/FFReformProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Special)

- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;


@end

NS_ASSUME_NONNULL_END
