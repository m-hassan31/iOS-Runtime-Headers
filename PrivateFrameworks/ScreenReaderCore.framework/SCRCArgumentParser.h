/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCArgumentSubcommand, NSMutableArray, NSString;



@interface SCRCArgumentParser : SCRCArgumentSubcommand 
{
    NSInteger _argc;
    char **_argv;
    NSMutableArray *_subcommandArray;
    NSMutableArray *_argumentArray;
    NSString *_appName;
    SCRCArgumentSubcommand *_subcommand;
    BOOL _isLaunchedAtLogin;
}

+ (id)versionString;
+ (id)processIdentifier;
+ (id)commandPath;

- (BOOL)parse;
- (id)appName;
- (void)setAppName:(id)arg1;
- (NSInteger)run;
- (void)dealloc;
- (id)initWithArgc:(NSInteger)arg1 argv:(const char **)arg2;
- (char **)argv;
- (NSInteger)argc;
- (BOOL)isLaunchedAtLogin;
- (void)addSubcommand:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (id)_displayHelp:(id)arg1;
- (id)setRunningAtStartup:(id)arg1;
- (void)stop;

@end
