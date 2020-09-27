/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PPConnectionsLocationSourceDelegate;
@interface PPConnectionsSource : NSObject {

	id<PPConnectionsLocationSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PPConnectionsLocationSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)identifier;
-(id<PPConnectionsLocationSourceDelegate>)delegate;
-(void)setDelegate:(id<PPConnectionsLocationSourceDelegate>)arg1 ;
@end

