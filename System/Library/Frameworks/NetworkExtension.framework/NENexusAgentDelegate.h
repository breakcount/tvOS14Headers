/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NENexusAgentDelegate <NSObject>
@required
-(void)handleAssertFromClient:(id)arg1;
-(void)handleUnassertFromClient:(id)arg1;
-(BOOL)handleRequestNexusFromClient:(id)arg1;
-(void)closeFlowWithClientIdentifier:(id)arg1;
-(void)handleStartFromClient:(id)arg1;

@end
