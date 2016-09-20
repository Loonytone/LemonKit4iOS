//
//  LKActionLineView.h
//  LemonKit
//
//  Created by 1em0nsOft on 2016/9/20.
//  Copyright © 2016年 1em0nsOft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LKActionItem.h"

@interface LKActionLineView : UIView

@property LKActionItem *item;

- (instancetype)initWithFrame:(CGRect)frame actionItem: (LKActionItem *)item;

@end
