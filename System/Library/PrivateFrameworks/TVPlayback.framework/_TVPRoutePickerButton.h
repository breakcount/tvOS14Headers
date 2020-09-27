/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPRoundButton.h>
#import <libobjc.A.dylib/AVRoutePickerViewDelegate.h>

@class AVRoutePickerView, NSString;

@interface _TVPRoutePickerButton : TVPRoundButton <AVRoutePickerViewDelegate> {

	AVRoutePickerView* _avRoutePickerView;

}

@property (nonatomic,retain) AVRoutePickerView * avRoutePickerView;              //@synthesize avRoutePickerView=_avRoutePickerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(AVRoutePickerView *)avRoutePickerView;
-(void)setAvRoutePickerView:(AVRoutePickerView *)arg1 ;
@end

