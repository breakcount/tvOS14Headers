/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMonogramImageGenerator.h>

@interface _TVMonogramResourceImageGenerator : _TVMonogramImageGenerator
+(BOOL)isResourceURL:(id)arg1 ;
+(id)tintImage:(id)arg1 withColor:(id)arg2 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
@end

