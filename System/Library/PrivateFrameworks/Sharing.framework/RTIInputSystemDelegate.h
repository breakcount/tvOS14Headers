/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTIInputSystemDelegate <NSObject>
@optional
-(void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;
-(void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;

@required
-(void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;

@end

