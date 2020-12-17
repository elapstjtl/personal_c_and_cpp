/*!--------------------------------------------------------
 * Copyright (C) Microsoft Corporation. All rights reserved.
 *--------------------------------------------------------*/
"use strict";var define,AMDLoader,CSSLoaderPlugin,_amdLoaderGlobal=this,_commonjsGlobal="object"==typeof global?global:{};!function(e){e.global=_amdLoaderGlobal;var t=function(){function t(){this._detected=!1,this._isWindows=!1,this._isNode=!1,this._isElectronRenderer=!1,this._isWebWorker=!1}return Object.defineProperty(t.prototype,"isWindows",{get:function(){return this._detect(),this._isWindows},enumerable:!0,configurable:!0}),Object.defineProperty(t.prototype,"isNode",{get:function(){return this._detect(),this._isNode},enumerable:!0,configurable:!0}),Object.defineProperty(t.prototype,"isElectronRenderer",{get:function(){return this._detect(),this._isElectronRenderer},enumerable:!0,configurable:!0}),Object.defineProperty(t.prototype,"isWebWorker",{get:function(){return this._detect(),this._isWebWorker},enumerable:!0,configurable:!0}),t.prototype._detect=function(){this._detected||(this._detected=!0,this._isWindows=t._isWindows(),this._isNode="undefined"!=typeof module&&!!module.exports,
this._isElectronRenderer="undefined"!=typeof process&&void 0!==process.versions&&void 0!==process.versions.electron&&"renderer"===process.type,this._isWebWorker="function"==typeof e.global.importScripts)},t._isWindows=function(){return!!("undefined"!=typeof navigator&&navigator.userAgent&&navigator.userAgent.indexOf("Windows")>=0)||"undefined"!=typeof process&&"win32"===process.platform},t}();e.Environment=t}(AMDLoader||(AMDLoader={})),function(e){var t=function(e,t,r){this.type=e,this.detail=t,this.timestamp=r};e.LoaderEvent=t;var r=function(){function r(e){this._events=[new t(1,"",e)]}return r.prototype.record=function(r,n){this._events.push(new t(r,n,e.Utilities.getHighPerformanceTimestamp()))},r.prototype.getEvents=function(){return this._events},r}();e.LoaderEventRecorder=r;var n=function(){function e(){}return e.prototype.record=function(e,t){},e.prototype.getEvents=function(){return[]},e.INSTANCE=new e,e}();e.NullLoaderEventRecorder=n}(AMDLoader||(AMDLoader={})),function(e){var t=function(){
function t(){}return t.fileUriToFilePath=function(e,t){if(t=decodeURI(t).replace(/%23/g,"#"),e){if(/^file:\/\/\//.test(t))return t.substr(8);if(/^file:\/\//.test(t))return t.substr(5)}else if(/^file:\/\//.test(t))return t.substr(7);return t},t.startsWith=function(e,t){return e.length>=t.length&&e.substr(0,t.length)===t},t.endsWith=function(e,t){return e.length>=t.length&&e.substr(e.length-t.length)===t},t.containsQueryString=function(e){return/^[^\#]*\?/gi.test(e)},t.isAbsolutePath=function(e){return/^((http:\/\/)|(https:\/\/)|(file:\/\/)|(\/))/.test(e)},t.forEachProperty=function(e,t){if(e){var r=void 0;for(r in e)e.hasOwnProperty(r)&&t(r,e[r])}},t.isEmpty=function(e){var r=!0;return t.forEachProperty(e,(function(){r=!1})),r},t.recursiveClone=function(e){if(!e||"object"!=typeof e||e instanceof RegExp)return e;if(!Array.isArray(e)&&Object.getPrototypeOf(e)!==Object.prototype)return e;var r=Array.isArray(e)?[]:{};return t.forEachProperty(e,(function(e,n){r[e]=n&&"object"==typeof n?t.recursiveClone(n):n})),r},
t.generateAnonymousModule=function(){return"===anonymous"+t.NEXT_ANONYMOUS_ID+++"==="},t.isAnonymousModule=function(e){return t.startsWith(e,"===anonymous")},t.getHighPerformanceTimestamp=function(){return this.PERFORMANCE_NOW_PROBED||(this.PERFORMANCE_NOW_PROBED=!0,this.HAS_PERFORMANCE_NOW=e.global.performance&&"function"==typeof e.global.performance.now),this.HAS_PERFORMANCE_NOW?e.global.performance.now():Date.now()},t.NEXT_ANONYMOUS_ID=1,t.PERFORMANCE_NOW_PROBED=!1,t.HAS_PERFORMANCE_NOW=!1,t}();e.Utilities=t}(AMDLoader||(AMDLoader={})),function(e){function t(e){if(e instanceof Error)return e;var t=new Error(e.message||String(e)||"Unknown Error");return e.stack&&(t.stack=e.stack),t}e.ensureError=t;var r=function(){function r(){}return r.validateConfigurationOptions=function(r){if("string"!=typeof(r=r||{}).baseUrl&&(r.baseUrl=""),"boolean"!=typeof r.isBuild&&(r.isBuild=!1),"object"!=typeof r.paths&&(r.paths={}),"object"!=typeof r.config&&(r.config={}),void 0===r.catchError&&(r.catchError=!1),
void 0===r.recordStats&&(r.recordStats=!1),"string"!=typeof r.urlArgs&&(r.urlArgs=""),"function"!=typeof r.onError&&(r.onError=function(e){return"loading"===e.phase?(console.error('Loading "'+e.moduleId+'" failed'),console.error(e),console.error("Here are the modules that depend on it:"),void console.error(e.neededBy)):"factory"===e.phase?(console.error('The factory method of "'+e.moduleId+'" has thrown an exception'),void console.error(e)):void 0}),Array.isArray(r.ignoreDuplicateModules)||(r.ignoreDuplicateModules=[]),r.baseUrl.length>0&&(e.Utilities.endsWith(r.baseUrl,"/")||(r.baseUrl+="/")),"string"!=typeof r.cspNonce&&(r.cspNonce=""),void 0===r.preferScriptTags&&(r.preferScriptTags=!1),Array.isArray(r.nodeModules)||(r.nodeModules=[]),r.nodeCachedData&&"object"==typeof r.nodeCachedData&&("string"!=typeof r.nodeCachedData.seed&&(r.nodeCachedData.seed="seed"),("number"!=typeof r.nodeCachedData.writeDelay||r.nodeCachedData.writeDelay<0)&&(r.nodeCachedData.writeDelay=7e3),
!r.nodeCachedData.path||"string"!=typeof r.nodeCachedData.path)){var n=t(new Error("INVALID cached data configuration, 'path' MUST be set"));n.phase="configuration",r.onError(n),r.nodeCachedData=void 0}return r},r.mergeConfigurationOptions=function(t,n){void 0===t&&(t=null),void 0===n&&(n=null);var o=e.Utilities.recursiveClone(n||{});return e.Utilities.forEachProperty(t,(function(t,r){"ignoreDuplicateModules"===t&&void 0!==o.ignoreDuplicateModules?o.ignoreDuplicateModules=o.ignoreDuplicateModules.concat(r):"paths"===t&&void 0!==o.paths?e.Utilities.forEachProperty(r,(function(e,t){return o.paths[e]=t})):"config"===t&&void 0!==o.config?e.Utilities.forEachProperty(r,(function(e,t){return o.config[e]=t})):o[t]=e.Utilities.recursiveClone(r)})),r.validateConfigurationOptions(o)},r}();e.ConfigurationOptionsUtil=r;var n=function(){function t(e,t){if(this._env=e,this.options=r.mergeConfigurationOptions(t),this._createIgnoreDuplicateModulesMap(),this._createNodeModulesMap(),this._createSortedPathsRules(),
""===this.options.baseUrl){if(this.options.nodeRequire&&this.options.nodeRequire.main&&this.options.nodeRequire.main.filename&&this._env.isNode){var n=this.options.nodeRequire.main.filename,o=Math.max(n.lastIndexOf("/"),n.lastIndexOf("\\"));this.options.baseUrl=n.substring(0,o+1)}if(this.options.nodeMain&&this._env.isNode){n=this.options.nodeMain,o=Math.max(n.lastIndexOf("/"),n.lastIndexOf("\\"));this.options.baseUrl=n.substring(0,o+1)}}}return t.prototype._createIgnoreDuplicateModulesMap=function(){this.ignoreDuplicateModulesMap={};for(var e=0;e<this.options.ignoreDuplicateModules.length;e++)this.ignoreDuplicateModulesMap[this.options.ignoreDuplicateModules[e]]=!0},t.prototype._createNodeModulesMap=function(){this.nodeModulesMap=Object.create(null);for(var e=0,t=this.options.nodeModules;e<t.length;e++){var r=t[e];this.nodeModulesMap[r]=!0}},t.prototype._createSortedPathsRules=function(){var t=this;this.sortedPathsRules=[],e.Utilities.forEachProperty(this.options.paths,(function(e,r){
Array.isArray(r)?t.sortedPathsRules.push({from:e,to:r}):t.sortedPathsRules.push({from:e,to:[r]})})),this.sortedPathsRules.sort((function(e,t){return t.from.length-e.from.length}))},t.prototype.cloneAndMerge=function(e){return new t(this._env,r.mergeConfigurationOptions(e,this.options))},t.prototype.getOptionsLiteral=function(){return this.options},t.prototype._applyPaths=function(t){for(var r,n=0,o=this.sortedPathsRules.length;n<o;n++)if(r=this.sortedPathsRules[n],e.Utilities.startsWith(t,r.from)){for(var i=[],s=0,a=r.to.length;s<a;s++)i.push(r.to[s]+t.substr(r.from.length));return i}return[t]},t.prototype._addUrlArgsToUrl=function(t){return e.Utilities.containsQueryString(t)?t+"&"+this.options.urlArgs:t+"?"+this.options.urlArgs},t.prototype._addUrlArgsIfNecessaryToUrl=function(e){return this.options.urlArgs?this._addUrlArgsToUrl(e):e},t.prototype._addUrlArgsIfNecessaryToUrls=function(e){if(this.options.urlArgs)for(var t=0,r=e.length;t<r;t++)e[t]=this._addUrlArgsToUrl(e[t]);return e},
t.prototype.moduleIdToPaths=function(t){if(!0===this.nodeModulesMap[t]||this.options.amdModulesPattern instanceof RegExp&&!this.options.amdModulesPattern.test(t))return this.isBuild()?["empty:"]:["node|"+t];var r,n=t;if(e.Utilities.endsWith(n,".js")||e.Utilities.isAbsolutePath(n))e.Utilities.endsWith(n,".js")||e.Utilities.containsQueryString(n)||(n+=".js"),r=[n];else for(var o=0,i=(r=this._applyPaths(n)).length;o<i;o++)this.isBuild()&&"empty:"===r[o]||(e.Utilities.isAbsolutePath(r[o])||(r[o]=this.options.baseUrl+r[o]),e.Utilities.endsWith(r[o],".js")||e.Utilities.containsQueryString(r[o])||(r[o]=r[o]+".js"));return this._addUrlArgsIfNecessaryToUrls(r)},t.prototype.requireToUrl=function(t){var r=t;return e.Utilities.isAbsolutePath(r)||(r=this._applyPaths(r)[0],e.Utilities.isAbsolutePath(r)||(r=this.options.baseUrl+r)),this._addUrlArgsIfNecessaryToUrl(r)},t.prototype.isBuild=function(){return this.options.isBuild},t.prototype.isDuplicateMessageIgnoredFor=function(e){
return this.ignoreDuplicateModulesMap.hasOwnProperty(e)},t.prototype.getConfigForModule=function(e){if(this.options.config)return this.options.config[e]},t.prototype.shouldCatchError=function(){return this.options.catchError},t.prototype.shouldRecordStats=function(){return this.options.recordStats},t.prototype.onError=function(e){this.options.onError(e)},t}();e.Configuration=n}(AMDLoader||(AMDLoader={})),function(e){var t=function(){function e(e){this._env=e,this._scriptLoader=null,this._callbackMap={}}return e.prototype.load=function(e,t,i,s){var a=this;if(!this._scriptLoader)if(this._env.isWebWorker)this._scriptLoader=new n;else if(this._env.isElectronRenderer){var u=e.getConfig().getOptionsLiteral().preferScriptTags;this._scriptLoader=u?new r:new o(this._env)}else this._env.isNode?this._scriptLoader=new o(this._env):this._scriptLoader=new r;var d={callback:i,errorback:s};this._callbackMap.hasOwnProperty(t)?this._callbackMap[t].push(d):(this._callbackMap[t]=[d],this._scriptLoader.load(e,t,(function(){
return a.triggerCallback(t)}),(function(e){return a.triggerErrorback(t,e)})))},e.prototype.triggerCallback=function(e){var t=this._callbackMap[e];delete this._callbackMap[e];for(var r=0;r<t.length;r++)t[r].callback()},e.prototype.triggerErrorback=function(e,t){var r=this._callbackMap[e];delete this._callbackMap[e];for(var n=0;n<r.length;n++)r[n].errorback(t)},e}(),r=function(){function t(){}return t.prototype.attachListeners=function(e,t,r){var n=function(){e.removeEventListener("load",o),e.removeEventListener("error",i)},o=function(e){n(),t()},i=function(e){n(),r(e)};e.addEventListener("load",o),e.addEventListener("error",i)},t.prototype.load=function(t,r,n,o){if(/^node\|/.test(r)){var s=t.getConfig().getOptionsLiteral(),a=i(t.getRecorder(),s.nodeRequire||e.global.nodeRequire),u=r.split("|"),d=null;try{d=a(u[1])}catch(e){return void o(e)}t.enqueueDefineAnonymousModule([],(function(){return d})),n()}else{var l=document.createElement("script");l.setAttribute("async","async"),
l.setAttribute("type","text/javascript"),this.attachListeners(l,n,o);var c=t.getConfig().getOptionsLiteral().trustedTypesPolicy;c&&(r=c.createScriptURL(r)),l.setAttribute("src",r);var f=t.getConfig().getOptionsLiteral().cspNonce;f&&l.setAttribute("nonce",f),document.getElementsByTagName("head")[0].appendChild(l)}},t}(),n=function(){function e(){}return e.prototype.load=function(e,t,r,n){var o=e.getConfig().getOptionsLiteral().trustedTypesPolicy;o&&(t=o.createScriptURL(t));try{importScripts(t),r()}catch(e){n(e)}},e}(),o=function(){function t(e){this._env=e,this._didInitialize=!1,this._didPatchNodeRequire=!1}return t.prototype._init=function(e){this._didInitialize||(this._didInitialize=!0,this._fs=e("fs"),this._vm=e("vm"),this._path=e("path"),this._crypto=e("crypto"))},t.prototype._initNodeRequire=function(e,t){var r=t.getConfig().getOptionsLiteral().nodeCachedData;if(r&&!this._didPatchNodeRequire){this._didPatchNodeRequire=!0;var n=this,o=e("module");o.prototype._compile=function(e,i){
var s,a=o.wrap(e.replace(/^#!.*/,"")),u=t.getRecorder(),d=n._getCachedDataPath(r,i),l={filename:i};try{var c=n._fs.readFileSync(d);s=c.slice(0,16),l.cachedData=c.slice(16),u.record(60,d)}catch(e){u.record(61,d)}var f=new n._vm.Script(a,l),h=f.runInThisContext(l),p=n._path.dirname(i),_=function(e){var t=e.constructor,r=function(t){try{return e.require(t)}finally{}};return r.resolve=function(r){return t._resolveFilename(r,e)},r.main=process.mainModule,r.extensions=t._extensions,r.cache=t._cache,r}(this),g=[this.exports,_,this,i,p,process,_commonjsGlobal,Buffer],v=h.apply(this.exports,g);return n._handleCachedData(f,a,d,!l.cachedData,t),n._verifyCachedData(f,a,d,s,t),v}}},t.prototype.load=function(r,n,o,s){var a=this,u=r.getConfig().getOptionsLiteral(),d=i(r.getRecorder(),u.nodeRequire||e.global.nodeRequire),l=u.nodeInstrumenter||function(e){return e};this._init(d),this._initNodeRequire(d,r);var c=r.getRecorder();if(/^node\|/.test(n)){var f=n.split("|"),h=null;try{h=d(f[1])}catch(e){return void s(e)}
r.enqueueDefineAnonymousModule([],(function(){return h})),o()}else{n=e.Utilities.fileUriToFilePath(this._env.isWindows,n);var p=this._path.normalize(n),_=this._getElectronRendererScriptPathOrUri(p),g=Boolean(u.nodeCachedData),v=g?this._getCachedDataPath(u.nodeCachedData,n):void 0;this._readSourceAndCachedData(p,v,c,(function(e,n,i,u){if(e)s(e);else{var d;d=n.charCodeAt(0)===t._BOM?t._PREFIX+n.substring(1)+t._SUFFIX:t._PREFIX+n+t._SUFFIX,d=l(d,p);var c={filename:_,cachedData:i},f=a._createAndEvalScript(r,d,c,o,s);a._handleCachedData(f,d,v,g&&!i,r),a._verifyCachedData(f,d,v,u,r)}}))}},t.prototype._createAndEvalScript=function(t,r,n,o,i){var s=t.getRecorder();s.record(31,n.filename);var a=new this._vm.Script(r,n),u=a.runInThisContext(n),d=t.getGlobalAMDDefineFunc(),l=!1,c=function(){return l=!0,d.apply(null,arguments)};return c.amd=d.amd,u.call(e.global,t.getGlobalAMDRequireFunc(),c,n.filename,this._path.dirname(n.filename)),s.record(32,n.filename),
l?o():i(new Error("Didn't receive define call in "+n.filename+"!")),a},t.prototype._getElectronRendererScriptPathOrUri=function(e){if(!this._env.isElectronRenderer)return e;var t=e.match(/^([a-z])\:(.*)/i);return t?"file:///"+(t[1].toUpperCase()+":"+t[2]).replace(/\\/g,"/"):"file://"+e},t.prototype._getCachedDataPath=function(e,t){var r=this._crypto.createHash("md5").update(t,"utf8").update(e.seed,"utf8").digest("hex"),n=this._path.basename(t).replace(/\.js$/,"");return this._path.join(e.path,n+"-"+r+".code")},t.prototype._handleCachedData=function(e,t,r,n,o){var i=this;e.cachedDataRejected?this._fs.unlink(r,(function(n){o.getRecorder().record(62,r),i._createAndWriteCachedData(e,t,r,o),n&&o.getConfig().onError(n)})):n&&this._createAndWriteCachedData(e,t,r,o)},t.prototype._createAndWriteCachedData=function(e,t,r,n){var o=this,i=Math.ceil(n.getConfig().getOptionsLiteral().nodeCachedData.writeDelay*(1+Math.random())),s=-1,a=0,u=void 0,d=function(){setTimeout((function(){
u||(u=o._crypto.createHash("md5").update(t,"utf8").digest());var i=e.createCachedData();0===i.length||i.length===s||a>=5||(i.length<s?d():(s=i.length,o._fs.writeFile(r,Buffer.concat([u,i]),(function(e){e&&n.getConfig().onError(e),n.getRecorder().record(63,r),d()}))))}),i*Math.pow(4,a++))};d()},t.prototype._readSourceAndCachedData=function(e,t,r,n){if(t){var o=void 0,i=void 0,s=void 0,a=2,u=function(e){e?n(e):0==--a&&n(void 0,o,i,s)};this._fs.readFile(e,{encoding:"utf8"},(function(e,t){o=t,u(e)})),this._fs.readFile(t,(function(e,n){!e&&n&&n.length>0?(s=n.slice(0,16),i=n.slice(16),r.record(60,t)):r.record(61,t),u()}))}else this._fs.readFile(e,{encoding:"utf8"},n)},t.prototype._verifyCachedData=function(e,t,r,n,o){var i=this;n&&(e.cachedDataRejected||setTimeout((function(){var e=i._crypto.createHash("md5").update(t,"utf8").digest();n.equals(e)||(o.getConfig().onError(new Error("FAILED TO VERIFY CACHED DATA, deleting stale '"+r+"' now, but a RESTART IS REQUIRED")),i._fs.unlink(r,(function(e){
e&&o.getConfig().onError(e)})))}),Math.ceil(5e3*(1+Math.random()))))},t._BOM=65279,t._PREFIX="(function (require, define, __filename, __dirname) { ",t._SUFFIX="\n});",t}();function i(e,t){if(t.__$__isRecorded)return t;var r=function(r){e.record(33,r);try{return t(r)}finally{e.record(34,r)}};return r.__$__isRecorded=!0,r}e.ensureRecordedNodeRequire=i,e.createScriptLoader=function(e){return new t(e)}}(AMDLoader||(AMDLoader={})),function(e){var t=function(){function t(e){var t=e.lastIndexOf("/");this.fromModulePath=-1!==t?e.substr(0,t+1):""}return t._normalizeModuleId=function(e){var t,r=e;for(t=/\/\.\//;t.test(r);)r=r.replace(t,"/");for(r=r.replace(/^\.\//g,""),t=/\/(([^\/])|([^\/][^\/\.])|([^\/\.][^\/])|([^\/][^\/][^\/]+))\/\.\.\//;t.test(r);)r=r.replace(t,"/");return r=r.replace(/^(([^\/])|([^\/][^\/\.])|([^\/\.][^\/])|([^\/][^\/][^\/]+))\/\.\.\//,"")},t.prototype.resolveModule=function(r){var n=r
;return e.Utilities.isAbsolutePath(n)||(e.Utilities.startsWith(n,"./")||e.Utilities.startsWith(n,"../"))&&(n=t._normalizeModuleId(this.fromModulePath+n)),n},t.ROOT=new t(""),t}();e.ModuleIdResolver=t;var r=function(){function t(e,t,r,n,o,i){this.id=e,this.strId=t,this.dependencies=r,this._callback=n,this._errorback=o,this.moduleIdResolver=i,this.exports={},this.error=null,this.exportsPassedIn=!1,this.unresolvedDependenciesCount=this.dependencies.length,this._isComplete=!1}return t._safeInvokeFunction=function(t,r){try{return{returnedValue:t.apply(e.global,r),producedError:null}}catch(e){return{returnedValue:null,producedError:e}}},t._invokeFactory=function(t,r,n,o){return t.isBuild()&&!e.Utilities.isAnonymousModule(r)?{returnedValue:null,producedError:null}:t.shouldCatchError()?this._safeInvokeFunction(n,o):{returnedValue:n.apply(e.global,o),producedError:null}},t.prototype.complete=function(r,n,o){this._isComplete=!0;var i=null;if(this._callback)if("function"==typeof this._callback){r.record(21,this.strId)
;var s=t._invokeFactory(n,this.strId,this._callback,o);i=s.producedError,r.record(22,this.strId),i||void 0===s.returnedValue||this.exportsPassedIn&&!e.Utilities.isEmpty(this.exports)||(this.exports=s.returnedValue)}else this.exports=this._callback;if(i){var a=e.ensureError(i);a.phase="factory",a.moduleId=this.strId,this.error=a,n.onError(a)}this.dependencies=null,this._callback=null,this._errorback=null,this.moduleIdResolver=null},t.prototype.onDependencyError=function(e){return this._isComplete=!0,this.error=e,!!this._errorback&&(this._errorback(e),!0)},t.prototype.isComplete=function(){return this._isComplete},t}();e.Module=r;var n=function(){function e(){this._nextId=0,this._strModuleIdToIntModuleId=new Map,this._intModuleIdToStrModuleId=[],this.getModuleId("exports"),this.getModuleId("module"),this.getModuleId("require")}return e.prototype.getMaxModuleId=function(){return this._nextId},e.prototype.getModuleId=function(e){var t=this._strModuleIdToIntModuleId.get(e);return void 0===t&&(t=this._nextId++,
this._strModuleIdToIntModuleId.set(e,t),this._intModuleIdToStrModuleId[t]=e),t},e.prototype.getStrModuleId=function(e){return this._intModuleIdToStrModuleId[e]},e}(),o=function(){function e(e){this.id=e}return e.EXPORTS=new e(0),e.MODULE=new e(1),e.REQUIRE=new e(2),e}();e.RegularDependency=o;var i=function(e,t,r){this.id=e,this.pluginId=t,this.pluginParam=r};e.PluginDependency=i;var s=function(){function s(t,r,o,i,s){void 0===s&&(s=0),this._env=t,this._scriptLoader=r,this._loaderAvailableTimestamp=s,this._defineFunc=o,this._requireFunc=i,this._moduleIdProvider=new n,this._config=new e.Configuration(this._env),this._modules2=[],this._knownModules2=[],this._inverseDependencies2=[],this._inversePluginDependencies2=new Map,this._currentAnnonymousDefineCall=null,this._recorder=null,this._buildInfoPath=[],this._buildInfoDefineStack=[],this._buildInfoDependencies=[]}return s.prototype.reset=function(){return new s(this._env,this._scriptLoader,this._defineFunc,this._requireFunc,this._loaderAvailableTimestamp)},
s.prototype.getGlobalAMDDefineFunc=function(){return this._defineFunc},s.prototype.getGlobalAMDRequireFunc=function(){return this._requireFunc},s._findRelevantLocationInStack=function(e,t){for(var r=function(e){return e.replace(/\\/g,"/")},n=r(e),o=t.split(/\n/),i=0;i<o.length;i++){var s=o[i].match(/(.*):(\d+):(\d+)\)?$/);if(s){var a=s[1],u=s[2],d=s[3],l=Math.max(a.lastIndexOf(" ")+1,a.lastIndexOf("(")+1);if((a=r(a=a.substr(l)))===n){var c={line:parseInt(u,10),col:parseInt(d,10)};return 1===c.line&&(c.col-="(function (require, define, __filename, __dirname) { ".length),c}}}throw new Error("Could not correlate define call site for needle "+e)},s.prototype.getBuildInfo=function(){if(!this._config.isBuild())return null;for(var e=[],t=0,r=0,n=this._modules2.length;r<n;r++){var o=this._modules2[r];if(o){var i=this._buildInfoPath[o.id]||null,a=this._buildInfoDefineStack[o.id]||null,u=this._buildInfoDependencies[o.id];e[t++]={id:o.strId,path:i,defineLocation:i&&a?s._findRelevantLocationInStack(i,a):null,
dependencies:u,shim:null,exports:o.exports}}}return e},s.prototype.getRecorder=function(){return this._recorder||(this._config.shouldRecordStats()?this._recorder=new e.LoaderEventRecorder(this._loaderAvailableTimestamp):this._recorder=e.NullLoaderEventRecorder.INSTANCE),this._recorder},s.prototype.getLoaderEvents=function(){return this.getRecorder().getEvents()},s.prototype.enqueueDefineAnonymousModule=function(e,t){if(null!==this._currentAnnonymousDefineCall)throw new Error("Can only have one anonymous define call per script file");var r=null;this._config.isBuild()&&(r=new Error("StackLocation").stack||null),this._currentAnnonymousDefineCall={stack:r,dependencies:e,callback:t}},s.prototype.defineModule=function(e,n,o,i,s,a){var u=this;void 0===a&&(a=new t(e));var d=this._moduleIdProvider.getModuleId(e);if(this._modules2[d])this._config.isDuplicateMessageIgnoredFor(e)||console.warn("Duplicate definition of module '"+e+"'");else{var l=new r(d,e,this._normalizeDependencies(n,a),o,i,a);this._modules2[d]=l,
this._config.isBuild()&&(this._buildInfoDefineStack[d]=s,this._buildInfoDependencies[d]=(l.dependencies||[]).map((function(e){return u._moduleIdProvider.getStrModuleId(e.id)}))),this._resolve(l)}},s.prototype._normalizeDependency=function(e,t){if("exports"===e)return o.EXPORTS;if("module"===e)return o.MODULE;if("require"===e)return o.REQUIRE;var r=e.indexOf("!");if(r>=0){var n=t.resolveModule(e.substr(0,r)),s=t.resolveModule(e.substr(r+1)),a=this._moduleIdProvider.getModuleId(n+"!"+s),u=this._moduleIdProvider.getModuleId(n);return new i(a,u,s)}return new o(this._moduleIdProvider.getModuleId(t.resolveModule(e)))},s.prototype._normalizeDependencies=function(e,t){for(var r=[],n=0,o=0,i=e.length;o<i;o++)r[n++]=this._normalizeDependency(e[o],t);return r},s.prototype._relativeRequire=function(t,r,n,o){if("string"==typeof r)return this.synchronousRequire(r,t);this.defineModule(e.Utilities.generateAnonymousModule(),r,n,o,null,t)},s.prototype.synchronousRequire=function(e,r){void 0===r&&(r=new t(e))
;var n=this._normalizeDependency(e,r),o=this._modules2[n.id];if(!o)throw new Error("Check dependency list! Synchronous require cannot resolve module '"+e+"'. This is the first mention of this module!");if(!o.isComplete())throw new Error("Check dependency list! Synchronous require cannot resolve module '"+e+"'. This module has not been resolved completely yet.");if(o.error)throw o.error;return o.exports},s.prototype.configure=function(t,r){var n=this._config.shouldRecordStats();this._config=r?new e.Configuration(this._env,t):this._config.cloneAndMerge(t),this._config.shouldRecordStats()&&!n&&(this._recorder=null)},s.prototype.getConfig=function(){return this._config},s.prototype._onLoad=function(e){if(null!==this._currentAnnonymousDefineCall){var t=this._currentAnnonymousDefineCall;this._currentAnnonymousDefineCall=null,this.defineModule(this._moduleIdProvider.getStrModuleId(e),t.dependencies,t.callback,null,t.stack)}},s.prototype._createLoadError=function(t,r){
var n=this,o=this._moduleIdProvider.getStrModuleId(t),i=(this._inverseDependencies2[t]||[]).map((function(e){return n._moduleIdProvider.getStrModuleId(e)})),s=e.ensureError(r);return s.phase="loading",s.moduleId=o,s.neededBy=i,s},s.prototype._onLoadError=function(e,t){var n=this._createLoadError(e,t);this._modules2[e]||(this._modules2[e]=new r(e,this._moduleIdProvider.getStrModuleId(e),[],(function(){}),(function(){}),null));for(var o=[],i=0,s=this._moduleIdProvider.getMaxModuleId();i<s;i++)o[i]=!1;var a=!1,u=[];for(u.push(e),o[e]=!0;u.length>0;){var d=u.shift(),l=this._modules2[d];l&&(a=l.onDependencyError(n)||a);var c=this._inverseDependencies2[d];if(c)for(i=0,s=c.length;i<s;i++){var f=c[i];o[f]||(u.push(f),o[f]=!0)}}a||this._config.onError(n)},s.prototype._hasDependencyPath=function(e,t){var r=this._modules2[e];if(!r)return!1;for(var n=[],o=0,i=this._moduleIdProvider.getMaxModuleId();o<i;o++)n[o]=!1;var s=[];for(s.push(r),n[e]=!0;s.length>0;){var a=s.shift().dependencies;if(a)for(o=0,i=a.length;o<i;o++){
var u=a[o];if(u.id===t)return!0;var d=this._modules2[u.id];d&&!n[u.id]&&(n[u.id]=!0,s.push(d))}}return!1},s.prototype._findCyclePath=function(e,t,r){if(e===t||50===r)return[e];var n=this._modules2[e];if(!n)return null;var o=n.dependencies;if(o)for(var i=0,s=o.length;i<s;i++){var a=this._findCyclePath(o[i].id,t,r+1);if(null!==a)return a.push(e),a}return null},s.prototype._createRequire=function(t){var r=this,n=function(e,n,o){return r._relativeRequire(t,e,n,o)};return n.toUrl=function(e){return r._config.requireToUrl(t.resolveModule(e))},n.getStats=function(){return r.getLoaderEvents()},n.config=function(e,t){void 0===t&&(t=!1),r.configure(e,t)},n.__$__nodeRequire=e.global.nodeRequire,n},s.prototype._loadModule=function(e){var t=this;if(!this._modules2[e]&&!this._knownModules2[e]){this._knownModules2[e]=!0;var r=this._moduleIdProvider.getStrModuleId(e),n=this._config.moduleIdToPaths(r);this._env.isNode&&(-1===r.indexOf("/")||/^@[^\/]+\/[^\/]+$/.test(r))&&n.push("node|"+r);var o=-1,i=function(r){
if(++o>=n.length)t._onLoadError(e,r);else{var s=n[o],a=t.getRecorder();if(t._config.isBuild()&&"empty:"===s)return t._buildInfoPath[e]=s,t.defineModule(t._moduleIdProvider.getStrModuleId(e),[],null,null,null),void t._onLoad(e);a.record(10,s),t._scriptLoader.load(t,s,(function(){t._config.isBuild()&&(t._buildInfoPath[e]=s),a.record(11,s),t._onLoad(e)}),(function(e){a.record(12,s),i(e)}))}};i(null)}},s.prototype._loadPluginDependency=function(e,r){var n=this;if(!this._modules2[r.id]&&!this._knownModules2[r.id]){this._knownModules2[r.id]=!0;var o=function(e){n.defineModule(n._moduleIdProvider.getStrModuleId(r.id),[],e,null,null)};o.error=function(e){n._config.onError(n._createLoadError(r.id,e))},e.load(r.pluginParam,this._createRequire(t.ROOT),o,this._config.getOptionsLiteral())}},s.prototype._resolve=function(e){var t=this,r=e.dependencies;if(r)for(var n=0,s=r.length;n<s;n++){var a=r[n];if(a!==o.EXPORTS)if(a!==o.MODULE)if(a!==o.REQUIRE){var u=this._modules2[a.id];if(u&&u.isComplete()){
if(u.error)return void e.onDependencyError(u.error);e.unresolvedDependenciesCount--}else if(this._hasDependencyPath(a.id,e.id)){console.warn("There is a dependency cycle between '"+this._moduleIdProvider.getStrModuleId(a.id)+"' and '"+this._moduleIdProvider.getStrModuleId(e.id)+"'. The cyclic path follows:");var d=this._findCyclePath(a.id,e.id,0)||[];d.reverse(),d.push(a.id),console.warn(d.map((function(e){return t._moduleIdProvider.getStrModuleId(e)})).join(" => \n")),e.unresolvedDependenciesCount--}else if(this._inverseDependencies2[a.id]=this._inverseDependencies2[a.id]||[],this._inverseDependencies2[a.id].push(e.id),a instanceof i){var l=this._modules2[a.pluginId];if(l&&l.isComplete()){this._loadPluginDependency(l.exports,a);continue}var c=this._inversePluginDependencies2.get(a.pluginId);c||(c=[],this._inversePluginDependencies2.set(a.pluginId,c)),c.push(a),this._loadModule(a.pluginId)}else this._loadModule(a.id)
}else e.unresolvedDependenciesCount--;else e.unresolvedDependenciesCount--;else e.exportsPassedIn=!0,e.unresolvedDependenciesCount--}0===e.unresolvedDependenciesCount&&this._onModuleComplete(e)},s.prototype._onModuleComplete=function(e){var t=this,r=this.getRecorder();if(!e.isComplete()){var n=e.dependencies,i=[];if(n)for(var s=0,a=n.length;s<a;s++){var u=n[s];if(u!==o.EXPORTS)if(u!==o.MODULE)if(u!==o.REQUIRE){var d=this._modules2[u.id];i[s]=d?d.exports:null}else i[s]=this._createRequire(e.moduleIdResolver);else i[s]={id:e.strId,config:function(){return t._config.getConfigForModule(e.strId)}};else i[s]=e.exports}e.complete(r,this._config,i);var l=this._inverseDependencies2[e.id];if(this._inverseDependencies2[e.id]=null,l)for(s=0,a=l.length;s<a;s++){var c=l[s],f=this._modules2[c];f.unresolvedDependenciesCount--,0===f.unresolvedDependenciesCount&&this._onModuleComplete(f)}var h=this._inversePluginDependencies2.get(e.id);if(h){this._inversePluginDependencies2.delete(e.id);for(s=0,
a=h.length;s<a;s++)this._loadPluginDependency(e.exports,h[s])}}},s}();e.ModuleManager=s}(AMDLoader||(AMDLoader={})),function(e){var t=new e.Environment,r=null,n=function(e,t,n){"string"!=typeof e&&(n=t,t=e,e=null),"object"==typeof t&&Array.isArray(t)||(n=t,t=null),t||(t=["require","exports","module"]),e?r.defineModule(e,t,n,null,null):r.enqueueDefineAnonymousModule(t,n)};n.amd={jQuery:!0};var o=function(e,t){void 0===t&&(t=!1),r.configure(e,t)},i=function(){if(1===arguments.length){if(arguments[0]instanceof Object&&!Array.isArray(arguments[0]))return void o(arguments[0]);if("string"==typeof arguments[0])return r.synchronousRequire(arguments[0])}if(2!==arguments.length&&3!==arguments.length||!Array.isArray(arguments[0]))throw new Error("Unrecognized require call");r.defineModule(e.Utilities.generateAnonymousModule(),arguments[0],arguments[1],arguments[2],null)};function s(){if(void 0!==e.global.require||"undefined"!=typeof require){var o=e.global.require||require
;if("function"==typeof o&&"function"==typeof o.resolve){var s=e.ensureRecordedNodeRequire(r.getRecorder(),o);e.global.nodeRequire=s,i.nodeRequire=s,i.__$__nodeRequire=s}}t.isNode&&!t.isElectronRenderer?(module.exports=i,require=i):(t.isElectronRenderer||(e.global.define=n),e.global.require=i)}i.config=o,i.getConfig=function(){return r.getConfig().getOptionsLiteral()},i.reset=function(){r=r.reset()},i.getBuildInfo=function(){return r.getBuildInfo()},i.getStats=function(){return r.getLoaderEvents()},i.define=function(){return n.apply(null,arguments)},e.init=s,"function"==typeof e.global.define&&e.global.define.amd||(r=new e.ModuleManager(t,e.createScriptLoader(t),n,i,e.Utilities.getHighPerformanceTimestamp()),void 0!==e.global.require&&"function"!=typeof e.global.require&&i.config(e.global.require),(define=function(){return n.apply(null,arguments)}).amd=n.amd,"undefined"==typeof doNotInitLoader&&s())}(AMDLoader||(AMDLoader={})),function(e){var t=function(){function e(){this._pendingLoads=0}
return e.prototype.attachListeners=function(e,t,r,n){var o=function(){t.removeEventListener("load",i),t.removeEventListener("error",s)},i=function(e){o(),r()},s=function(e){o(),n(e)};t.addEventListener("load",i),t.addEventListener("error",s)},e.prototype._onLoad=function(e,t){this._pendingLoads--,t()},e.prototype._onLoadError=function(e,t,r){this._pendingLoads--,t(r)},e.prototype._insertLinkNode=function(e){this._pendingLoads++;var t=document.head||document.getElementsByTagName("head")[0],r=t.getElementsByTagName("link")||t.getElementsByTagName("script");r.length>0?t.insertBefore(e,r[r.length-1]):t.appendChild(e)},e.prototype.createLinkTag=function(e,t,r,n){var o=this,i=document.createElement("link");i.setAttribute("rel","stylesheet"),i.setAttribute("type","text/css"),i.setAttribute("data-name",e);return this.attachListeners(e,i,(function(){return o._onLoad(e,r)}),(function(t){return o._onLoadError(e,n,t)})),i.setAttribute("href",t),i},e.prototype._linkTagExists=function(e,t){
var r,n,o,i,s=document.getElementsByTagName("link");for(r=0,n=s.length;r<n;r++)if(o=s[r].getAttribute("data-name"),i=s[r].getAttribute("href"),o===e||i===t)return!0;return!1},e.prototype.load=function(e,t,r,n){if(this._linkTagExists(e,t))r();else{var o=this.createLinkTag(e,t,r,n);this._insertLinkNode(o)}},e}(),r=function(){function e(){this._cssLoader=new t}return e.prototype.load=function(e,t,r,n){if(((n=n||{})["vs/css"]||{}).disabled)r({});else{var o=t.toUrl(e+".css");this._cssLoader.load(e,o,(function(e){r({})}),(function(e){"function"==typeof r.error&&r.error("Could not find "+o+" or it was empty")}))}},e}();e.CSSPlugin=r,define("vs/css",new r)}(CSSLoaderPlugin||(CSSLoaderPlugin={}));var NLSLoaderPlugin,__spreadArrays=this&&this.__spreadArrays||function(){for(var e=0,t=0,r=arguments.length;t<r;t++)e+=arguments[t].length;var n=Array(e),o=0;for(t=0;t<r;t++)for(var i=arguments[t],s=0,a=i.length;s<a;s++,o++)n[o]=i[s];return n};!function(e){var t=function(){function e(){this._detected=!1,this._isPseudo=!1}
return Object.defineProperty(e.prototype,"isPseudo",{get:function(){return this._detect(),this._isPseudo},enumerable:!0,configurable:!0}),e.prototype._detect=function(){this._detected||(this._detected=!0,this._isPseudo="undefined"!=typeof document&&document.location&&document.location.hash.indexOf("pseudo=true")>=0)},e}();function r(e,t,r){var n;return n=0===t.length?e:e.replace(/\{(\d+)\}/g,(function(e,r){var n=r[0],o=t[n],i=e;return"string"==typeof o?i=o:"number"!=typeof o&&"boolean"!=typeof o&&null!=o||(i=String(o)),i})),r.isPseudo&&(n="［"+n.replace(/[aouei]/g,"$&$&")+"］"),n}function n(e,t,n){for(var o=[],i=3;i<arguments.length;i++)o[i-3]=arguments[i];return r(n,o,e)}function o(e,t){return function(n,o){var i=Array.prototype.slice.call(arguments,2);return r(e[n],i,t)}}var i=function(){function e(e){var t=this;this._env=e,this.localize=function(e,r){for(var o=[],i=2;i<arguments.length;i++)o[i-2]=arguments[i];return n.apply(void 0,__spreadArrays([t._env,e,r],o))}}
return e.prototype.setPseudoTranslation=function(e){this._env._isPseudo=e},e.prototype.create=function(e,t){return{localize:o(t[e],this._env)}},e.prototype.load=function(t,r,n,i){var s=this;if(i=i||{},t&&0!==t.length){var a=i["vs/nls"]||{},u=a.availableLanguages?function(e,t){var r=e[t];return r||((r=e["*"])||null)}(a.availableLanguages,t):null,d=".nls";null!==u&&u!==e.DEFAULT_TAG&&(d=d+"."+u);var l=function(e){Array.isArray(e)?e.localize=o(e,s._env):e.localize=o(e[t],s._env),n(e)};"function"==typeof a.loadBundle?a.loadBundle(t,u,(function(e,n){e?r([t+".nls"],l):l(n)})):r([t+d],l)}else n({localize:this.localize})},e.DEFAULT_TAG="i-default",e}();e.NLSPlugin=i,define("vs/nls",new i(new t))}(NLSLoaderPlugin||(NLSLoaderPlugin={}));
//# sourceMappingURL=https://ticino.blob.core.windows.net/sourcemaps/ea3859d4ba2f3e577a159bc91e3074c5d85c0523/core/vs/loader.js.map
