//
//  Caches.h
//  meice
//
//  Created by dbl on 15/7/17.
//  Copyright (c) 2015年 上海涵予信息网络有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Caches : NSObject


//计算单个目录大小
+(float)fileSizeAtPath:(NSString *)path;

//计算目录大小
+(float)folderSizeAtPath:(NSString *)path;

//删除缓存
+(void)clearCache:(NSString *)path;


@end
