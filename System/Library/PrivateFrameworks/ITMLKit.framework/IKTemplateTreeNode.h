/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKViewElementStyle, NSDictionary, IKViewElementStyleComposer;

@interface IKTemplateTreeNode : NSObject <NSCopying> {

	IKTemplateTreeNode* _parentNode;
	NSString* _nodeName;
	IKViewElementStyle* _styleOverrides;
	NSDictionary* _childNodes;
	IKViewElementStyleComposer* _styleComposer;

}

@property (nonatomic,__weak,readonly) IKTemplateTreeNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeName;                              //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) IKViewElementStyle * styleOverrides;              //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (nonatomic,copy) NSDictionary * childNodes;                                 //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;              //@synthesize styleComposer=_styleComposer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKViewElementStyle *)styleOverrides;
-(NSString *)nodeName;
-(IKTemplateTreeNode *)parentNode;
-(NSDictionary *)childNodes;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3 ;
-(void)setChildNodes:(NSDictionary *)arg1 ;
@end

