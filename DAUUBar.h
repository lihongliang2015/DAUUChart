//
//  PNBar.h
//  PNChartDemo
//
//  Created by hongliang li on 17-11-29.
//  Copyright (c) 2017年 hongliang li . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DAUUBar : UIView

@property (nonatomic) float gradePercent;

@property (nonatomic, strong) CAShapeLayer * chartLine;

@property (nonatomic, strong) UIColor * barColor;

@end
