//
//  SBAddressModel.h
//  chefu
//
//  Created by mac on 2019/1/9.
//  Copyright © 2019年 shuangbang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SBAddressModel : NSObject

@property (nonatomic, assign) NSInteger addressID;
@property (nonatomic, copy) NSString* provinces;
@property (nonatomic, copy) NSString* citys;
@property (nonatomic, copy) NSString* county;
@property (nonatomic, copy) NSString* address;
@property (nonatomic, copy) NSString* contactname;
@property (nonatomic, copy) NSString* phone;
@property (nonatomic, copy) NSString* postcode;
@property (nonatomic, copy) NSString* remark;
@property (nonatomic, assign) BOOL isdefault;
@property (nonatomic, assign) BOOL isSelected;

@end

NS_ASSUME_NONNULL_END
