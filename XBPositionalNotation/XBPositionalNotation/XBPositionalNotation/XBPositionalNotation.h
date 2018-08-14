//
//  XBPositionalNotation.h
//  aw1_plus
//
//  Created by xxb on 2018/5/14.
//  Copyright © 2018年 sven. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBPositionalNotation : NSObject

/** 十进制转换为二进制 @param decimal 十进制数 @return 二进制数 */
+ (NSString *)getBinaryByDecimal:(NSInteger)decimal;

/** 十进制转换十六进制 @param decimal 十进制数 @return 十六进制数 */
+ (NSString *)getHexByDecimal:(NSInteger)decimal;

/** 二进制转换成十六进制 @param binary 二进制数 @return 十六进制数 */
+ (NSString *)getHexByBinary:(NSString *)binary;

/** 十六进制转换为二进制 @param hex 十六进制数 @return 二进制数 */
+ (NSString *)getBinaryByHex:(NSString *)hex;

/** 二进制转换为十进制 @param binary 二进制数 @return 十进制数 */
+ (NSInteger)getDecimalByBinary:(NSString *)binary;

@end
