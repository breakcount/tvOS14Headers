/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface _UIPageIndicatorStoreObject : NSObject {

	UIImage* _customImage;
	long long _startIndex;
	long long _endIndex;

}

@property (nonatomic,retain) UIImage * customImage;              //@synthesize customImage=_customImage - In the implementation block
@property (assign,nonatomic) long long startIndex;               //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long endIndex;                 //@synthesize endIndex=_endIndex - In the implementation block
-(id)description;
-(void)setEndIndex:(long long)arg1 ;
-(long long)endIndex;
-(void)setStartIndex:(long long)arg1 ;
-(long long)startIndex;
-(UIImage *)customImage;
-(void)setCustomImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 ;
-(BOOL)validPageWithinBound:(long long)arg1 ;
-(id)splitAtIndex:(long long)arg1 withImage:(id)arg2 ;
@end

