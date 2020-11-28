/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
"use strict";!function(){const e=(globalThis.MonacoPerformanceMarks=globalThis.MonacoPerformanceMarks||[],{mark(e){globalThis.MonacoPerformanceMarks.push(e,Date.now())}});e.mark("renderer/started");const t=window.MonacoBootstrapWindow,o=t.globals().process.whenEnvResolved();t.load(["vs/workbench/workbench.desktop.main","vs/nls!vs/workbench/workbench.desktop.main","vs/css!vs/workbench/workbench.desktop.main"],(async function(t,r){return e.mark("didLoadWorkbenchMain"),performance.mark("workbench-start"),await o,e.mark("main/startup"),require("vs/workbench/electron-browser/desktop.main").main(r)}),{removeDeveloperKeybindingsAfterLoad:!0,canModifyDOM:function(t){!function(t){let o;if(e.mark("willShowPartsSplash"),"string"==typeof t.partsSplashPath)try{o=JSON.parse(require.__$__nodeRequire("fs").readFileSync(t.partsSplashPath,"utf8"))}catch(e){}const r="hc"===t.colorScheme&&t.autoDetectHighContrast;o&&r&&"hc-black"!==o.baseTheme&&(o=void 0);o&&t.extensionDevelopmentPath&&(o.layoutInfo=void 0);let a,i,n
;o?(a=o.baseTheme,i=o.colorInfo.editorBackground,n=o.colorInfo.foreground):r?(a="hc-black",i="#000000",n="#FFFFFF"):(a="vs-dark",i="#1E1E1E",n="#CCCCCC");const d=document.createElement("style");if(d.className="initialShellColors",document.head.appendChild(d),d.textContent=`body { background-color: ${i}; color: ${n}; margin: 0; padding: 0; }`,o&&o.layoutInfo){const{id:e,layoutInfo:r,colorInfo:i}=o,n=document.createElement("div");n.id=e,n.className=a,r.windowBorder&&(n.style.position="relative",n.style.height="calc(100vh - 2px)",n.style.width="calc(100vw - 2px)",n.style.border="1px solid var(--window-border-color)",n.style.setProperty("--window-border-color",i.windowBorder),r.windowBorderRadius&&(n.style.borderRadius=r.windowBorderRadius)),r.sideBarWidth=Math.min(r.sideBarWidth,window.innerWidth-(r.activityBarWidth+r.editorPartMinWidth));const d=document.createElement("div")
;d.setAttribute("style",`position: absolute; width: 100%; left: 0; top: 0; height: ${r.titleBarHeight}px; background-color: ${i.titleBarBackground}; -webkit-app-region: drag;`),n.appendChild(d);const s=document.createElement("div");if(s.setAttribute("style",`position: absolute; height: calc(100% - ${r.titleBarHeight}px); top: ${r.titleBarHeight}px; ${r.sideBarSide}: 0; width: ${r.activityBarWidth}px; background-color: ${i.activityBarBackground};`),n.appendChild(s),t.folderUri||t.workspace){const e=document.createElement("div");e.setAttribute("style",`position: absolute; height: calc(100% - ${r.titleBarHeight}px); top: ${r.titleBarHeight}px; ${r.sideBarSide}: ${r.activityBarWidth}px; width: ${r.sideBarWidth}px; background-color: ${i.sideBarBackground};`),n.appendChild(e)}const c=document.createElement("div")
;c.setAttribute("style",`position: absolute; width: 100%; bottom: 0; left: 0; height: ${r.statusBarHeight}px; background-color: ${t.folderUri||t.workspace?i.statusBarBackground:i.statusBarNoFolderBackground};`),n.appendChild(c),document.body.appendChild(n)}e.mark("didShowPartsSplash")}(t)},beforeLoaderConfig:function(e,t){t.recordStats=!0},beforeRequire:function(){e.mark("willLoadWorkbenchMain")}})}();
//# sourceMappingURL=https://ticino.blob.core.windows.net/sourcemaps/d2e414d9e4239a252d1ab117bd7067f125afd80a/core/vs/code/electron-browser/workbench/workbench.js.map
