  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>.dwm/movestack.c at master · covin/.dwm · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.png" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="+ictvWQK8aOhbPLo9ySdGOhj1uJRPedlF6DwVp7+A8c=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-324e543186da6868cee3c68ba953e4ab9b74fcc4.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-a833fa188e668e3c5b7dec9688a76090ff022f91.css" media="screen" rel="stylesheet" type="text/css" />
    


    <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-0f165a24ede5fce08cc34dbaba10d16d4ce5e4ac.js" type="text/javascript"></script>
    
    <script defer="defer" src="https://a248.e.akamai.net/assets.github.com/assets/github-69531c8a12c5e03422b5f014ee3f3313c733debc.js" type="text/javascript"></script>
    
    

      <link rel='permalink' href='/covin/.dwm/blob/9a20d8210248f290a3fc3f1b3f456b20314594f4/movestack.c'>
    <meta property="og:title" content=".dwm"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/covin/.dwm"/>
    <meta property="og:image" content="https://a248.e.akamai.net/assets.github.com/images/gravatars/gravatar-user-420.png?1345673561"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="my dwm configuration. Contribute to .dwm development by creating an account on GitHub."/>

    <meta name="description" content="my dwm configuration. Contribute to .dwm development by creating an account on GitHub." />

  <link href="https://github.com/covin/.dwm/commits/master.atom" rel="alternate" title="Recent Commits to .dwm:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public fork env-production ">
    <div id="wrapper">

    
    

      <div id="header" class="true clearfix">
        <div class="container clearfix">
          <a class="site-logo " href="https://github.com/">
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1340659511" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1340659511" />
          </a>


                  <!--
      make sure to use fully qualified URLs here since this nav
      is used on error pages on other domains
    -->
    <ul class="top-nav logged_out">
        <li class="pricing"><a href="https://github.com/plans">Signup and Pricing</a></li>
        <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
      <li class="features"><a href="https://github.com/features">Features</a></li>
        <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      <li class="login"><a href="https://github.com/login?return_to=%2Fcovin%2F.dwm%2Fblob%2Fmaster%2Fmovestack.c">Sign in</a></li>
    </ul>



          
        </div>
      </div>

      

      

            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="container hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
        <div class="title-actions-bar">
          


              <ul class="pagehead-actions">


          <li>
            <span class="star-button"><a href="/login?return_to=%2Fcovin%2F.dwm" class="minibutton js-toggler-target entice tooltipped leftwards" title="You must be signed in to use this feature" rel="nofollow"><span class="mini-icon mini-icon-star"></span>Star</a><a class="social-count js-social-count" href="/covin/.dwm/stargazers">1</a></span>
          </li>
          <li>
            <a href="/login?return_to=%2Fcovin%2F.dwm" class="minibutton js-toggler-target fork-button entice tooltipped leftwards"  title="You must be signed in to fork a repository" rel="nofollow"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/covin/.dwm/network" class="social-count">2</a>
          </li>
    </ul>

          <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
            <span class="repo-label"><span>public</span></span>
            <span class="mega-icon mega-icon-public-repo"></span>
            <span class="author vcard">
<a href="/covin" class="url fn" itemprop="url" rel="author">              <span itemprop="title">covin</span>
              </a></span> /
            <strong><a href="/covin/.dwm" class="js-current-repository">.dwm</a></strong>
              <span class="fork-flag">
                <span class="text">forked from <a href="/sunaku/.dwm">sunaku/.dwm</a></span>
              </span>
          </h1>
        </div>

          

  <ul class="tabs">
    <li><a href="/covin/.dwm" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/covin/.dwm/network" highlight="repo_network">Network</a></li>
    <li><a href="/covin/.dwm/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>




    <li><a href="/covin/.dwm/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
<div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/covin/.dwm/tree-list/9a20d8210248f290a3fc3f1b3f456b20314594f4"
      data-blob-url-prefix="/covin/.dwm/blob/9a20d8210248f290a3fc3f1b3f456b20314594f4"
    >

  <div class="breadcrumb">
    <span class="bold"><a href="/covin/.dwm">.dwm</a></span> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/covin/.dwm/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <span class="bold">Octotip:</span> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser" cellpadding="0" cellspacing="0">
    <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container">
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form accept-charset="UTF-8">
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        Go
      </button>
    </div>
  </form>
</div>


<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
      <li><a href="/covin/.dwm/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter ">1</span></a></li>
      <li><a href="/covin/.dwm/downloads" class="tabnav-tab" highlight="repo_downloads">Downloads <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">

    <div class="context-menu-container js-menu-container js-context-menu">
      <a href="#"
         class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
         data-hotkey="w"
         data-master-branch="master"
         data-ref="master">
         <span><em class="mini-icon mini-icon-branch"></em><i>branch:</i> master</span>
      </a>

      <div class="context-pane commitish-context js-menu-content">
        <a href="javascript:;" class="close js-menu-close"><span class="mini-icon mini-icon-remove-close"></span></a>
        <div class="context-title">Switch branches/tags</div>
        <div class="context-body pane-selector commitish-selector js-navigation-container">
          <div class="filterbar">
            <input type="text" id="context-commitish-filter-field" class="js-navigation-enable" placeholder="Filter branches/tags" data-filterable />
            <ul class="tabs">
              <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
              <li><a href="#" data-filter="tags">Tags</a></li>
            </ul>
          </div>

          <div class="js-filter-tab js-filter-branches" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/attachabove/movestack.c" class="js-navigation-open" data-name="attachabove" rel="nofollow">attachabove</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/attachbelow/movestack.c" class="js-navigation-open" data-name="attachbelow" rel="nofollow">attachbelow</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/bottom_gap/movestack.c" class="js-navigation-open" data-name="bottom_gap" rel="nofollow">bottom_gap</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/bstack/movestack.c" class="js-navigation-open" data-name="bstack" rel="nofollow">bstack</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/fibonacci/movestack.c" class="js-navigation-open" data-name="fibonacci" rel="nofollow">fibonacci</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/grid/movestack.c" class="js-navigation-open" data-name="grid" rel="nofollow">grid</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target selected">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/master/movestack.c" class="js-navigation-open" data-name="master" rel="nofollow">master</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/monocle_count/movestack.c" class="js-navigation-open" data-name="monocle_count" rel="nofollow">monocle_count</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/movestack/movestack.c" class="js-navigation-open" data-name="movestack" rel="nofollow">movestack</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/patches/movestack.c" class="js-navigation-open" data-name="patches" rel="nofollow">patches</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/shiftview/movestack.c" class="js-navigation-open" data-name="shiftview" rel="nofollow">shiftview</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/spawn_cwd/movestack.c" class="js-navigation-open" data-name="spawn_cwd" rel="nofollow">spawn_cwd</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/tip/movestack.c" class="js-navigation-open" data-name="tip" rel="nofollow">tip</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/warp/movestack.c" class="js-navigation-open" data-name="warp" rel="nofollow">warp</a>
                </h4>
              </div>
          </div>

          <div class="js-filter-tab js-filter-tags" style="display:none" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/covin/.dwm/blob/root/movestack.c" class="js-navigation-open" data-name="root" rel="nofollow">root</a>
                </h4>
              </div>
          </div>
        </div>
      </div><!-- /.commitish-context-context -->
    </div>
  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/covin/.dwm" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/covin/.dwm/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/covin/.dwm/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">14</span></a></li>
  </ul>

</div>

  
  
  


          

        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:eab40453371422085865ca0d9ba801f0 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:eab40453371422085865ca0d9ba801f0 -->

<!-- block_view_fragment_key: views10/v8/blob:v21:02363acfde7336705f36bca558515fec -->
  <div id="slider">

    <div class="breadcrumb" data-path="movestack.c/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/covin/.dwm/tree/9a20d8210248f290a3fc3f1b3f456b20314594f4" class="js-rewrite-sha" itemprop="url"><span itemprop="title">.dwm</span></a></b> / <strong class="final-path">movestack.c</strong> <span class="js-clippy mini-icon mini-icon-clippy " data-clipboard-text="movestack.c" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>

      <div class="commit file-history-tease js-blob-contributors-loader" data-request-url="/covin/.dwm/contributors/master/movestack.c" data-path="movestack.c/">
        Fetching contributors…

        <div class="participation">
          <p class="quickstat js-loading-status-text"><img alt="Octocat-spinner-16px" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-16px.gif?1340659511" width="16" /></p>
        </div>
      </div>

    <div class="frames">
      <div class="frame frame-center" data-path="movestack.c/" data-permalink-url="/covin/.dwm/blob/9a20d8210248f290a3fc3f1b3f456b20314594f4/movestack.c" data-title=".dwm/movestack.c at master · covin/.dwm · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>50 lines (42 sloc)</span>
                <span>1.232 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/covin/.dwm/edit/9a20d8210248f290a3fc3f1b3f456b20314594f4/movestack.c" data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  </li>
                <li>
                  <a href="/covin/.dwm/raw/master/movestack.c" class="minibutton grouped-button bigger lighter" id="raw-url">Raw</a>
                </li>
                  <li>
                    <a href="/covin/.dwm/blame/master/movestack.c" class="minibutton grouped-button bigger lighter">Blame</a>
                  </li>
                <li>
                  <a href="/covin/.dwm/commits/master/movestack.c" class="minibutton grouped-button bigger lighter" rel="nofollow">History</a>
                </li>
              </ul>
            </div>
              <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="kt">void</span></div><div class='line' id='LC2'><span class="nf">movestack</span><span class="p">(</span><span class="k">const</span> <span class="n">Arg</span> <span class="o">*</span><span class="n">arg</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC3'>	<span class="n">Client</span> <span class="o">*</span><span class="n">c</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">,</span> <span class="o">*</span><span class="n">p</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">,</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">,</span> <span class="o">*</span><span class="n">i</span><span class="p">;</span></div><div class='line' id='LC4'><br/></div><div class='line' id='LC5'>	<span class="k">if</span><span class="p">(</span><span class="n">arg</span><span class="o">-&gt;</span><span class="n">i</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC6'>		<span class="cm">/* find the client after selmon-&gt;sel */</span></div><div class='line' id='LC7'>		<span class="k">for</span><span class="p">(</span><span class="n">c</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span> <span class="n">c</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="o">!</span><span class="n">ISVISIBLE</span><span class="p">(</span><span class="n">c</span><span class="p">)</span> <span class="o">||</span> <span class="n">c</span><span class="o">-&gt;</span><span class="n">isfloating</span><span class="p">);</span> <span class="n">c</span> <span class="o">=</span> <span class="n">c</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">);</span></div><div class='line' id='LC8'>		<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">c</span><span class="p">)</span></div><div class='line' id='LC9'>			<span class="k">for</span><span class="p">(</span><span class="n">c</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span><span class="p">;</span> <span class="n">c</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="o">!</span><span class="n">ISVISIBLE</span><span class="p">(</span><span class="n">c</span><span class="p">)</span> <span class="o">||</span> <span class="n">c</span><span class="o">-&gt;</span><span class="n">isfloating</span><span class="p">);</span> <span class="n">c</span> <span class="o">=</span> <span class="n">c</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">);</span></div><div class='line' id='LC10'><br/></div><div class='line' id='LC11'>	<span class="p">}</span></div><div class='line' id='LC12'>	<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC13'>		<span class="cm">/* find the client before selmon-&gt;sel */</span></div><div class='line' id='LC14'>		<span class="k">for</span><span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span><span class="p">;</span> <span class="n">i</span> <span class="o">!=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="p">;</span> <span class="n">i</span> <span class="o">=</span> <span class="n">i</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">)</span></div><div class='line' id='LC15'>			<span class="k">if</span><span class="p">(</span><span class="n">ISVISIBLE</span><span class="p">(</span><span class="n">i</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="n">i</span><span class="o">-&gt;</span><span class="n">isfloating</span><span class="p">)</span></div><div class='line' id='LC16'>				<span class="n">c</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC17'>		<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">c</span><span class="p">)</span></div><div class='line' id='LC18'>			<span class="k">for</span><span class="p">(;</span> <span class="n">i</span><span class="p">;</span> <span class="n">i</span> <span class="o">=</span> <span class="n">i</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">)</span></div><div class='line' id='LC19'>				<span class="k">if</span><span class="p">(</span><span class="n">ISVISIBLE</span><span class="p">(</span><span class="n">i</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="n">i</span><span class="o">-&gt;</span><span class="n">isfloating</span><span class="p">)</span></div><div class='line' id='LC20'>					<span class="n">c</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC21'>	<span class="p">}</span></div><div class='line' id='LC22'>	<span class="cm">/* find the client before selmon-&gt;sel and c */</span></div><div class='line' id='LC23'>	<span class="k">for</span><span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span><span class="p">;</span> <span class="n">i</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="o">!</span><span class="n">p</span> <span class="o">||</span> <span class="o">!</span><span class="n">pc</span><span class="p">);</span> <span class="n">i</span> <span class="o">=</span> <span class="n">i</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC24'>		<span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">==</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="p">)</span></div><div class='line' id='LC25'>			<span class="n">p</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC26'>		<span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">==</span> <span class="n">c</span><span class="p">)</span></div><div class='line' id='LC27'>			<span class="n">pc</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC28'>	<span class="p">}</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'>	<span class="cm">/* swap c and selmon-&gt;sel selmon-&gt;clients in the selmon-&gt;clients list */</span></div><div class='line' id='LC31'>	<span class="k">if</span><span class="p">(</span><span class="n">c</span> <span class="o">&amp;&amp;</span> <span class="n">c</span> <span class="o">!=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC32'>		<span class="n">Client</span> <span class="o">*</span><span class="n">temp</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">next</span><span class="o">==</span><span class="n">c</span><span class="o">?</span><span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="o">:</span><span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC33'>		<span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">=</span> <span class="n">c</span><span class="o">-&gt;</span><span class="n">next</span><span class="o">==</span><span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="o">?</span><span class="n">c</span><span class="o">:</span><span class="n">c</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC34'>		<span class="n">c</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">=</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'>		<span class="k">if</span><span class="p">(</span><span class="n">p</span> <span class="o">&amp;&amp;</span> <span class="n">p</span> <span class="o">!=</span> <span class="n">c</span><span class="p">)</span></div><div class='line' id='LC37'>			<span class="n">p</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC38'>		<span class="k">if</span><span class="p">(</span><span class="n">pc</span> <span class="o">&amp;&amp;</span> <span class="n">pc</span> <span class="o">!=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="p">)</span></div><div class='line' id='LC39'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="p">;</span></div><div class='line' id='LC40'><br/></div><div class='line' id='LC41'>		<span class="k">if</span><span class="p">(</span><span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span> <span class="o">==</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span><span class="p">)</span></div><div class='line' id='LC42'>			<span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC43'>		<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">c</span> <span class="o">==</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span><span class="p">)</span></div><div class='line' id='LC44'>			<span class="n">selmon</span><span class="o">-&gt;</span><span class="n">clients</span> <span class="o">=</span> <span class="n">selmon</span><span class="o">-&gt;</span><span class="n">sel</span><span class="p">;</span></div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'>		<span class="n">arrange</span><span class="p">(</span><span class="n">selmon</span><span class="p">);</span></div><div class='line' id='LC47'>	<span class="p">}</span></div><div class='line' id='LC48'><span class="p">}</span></div><div class='line' id='LC49'><br/></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>

  </div>

<div class="frame frame-loading large-loading-area" style="display:none;" data-tree-list-url="/covin/.dwm/tree-list/9a20d8210248f290a3fc3f1b3f456b20314594f4" data-blob-url-prefix="/covin/.dwm/blob/9a20d8210248f290a3fc3f1b3f456b20314594f4">
  <img src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-64.gif?1340659511" height="64" width="64">
</div>

        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container clearfix">

       <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
       <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="https://github.com/training">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Clients</h4>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://windows.github.com/">GitHub for Windows</a></li>
         <li><a href="http://eclipse.github.com/">GitHub for Eclipse</a></li>
         <li><a href="http://mobile.github.com/">GitHub Mobile Apps</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Web analytics</a></li>
         <li><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>

         <h4 class="second">Extras</h4>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span title="0.10172s from fe16.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

  </div><!-- /.site -->
</div><!-- /.lower_footer -->

      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    <div id="logo-popup">
      <h2>Looking for the GitHub logo?</h2>
      <ul>
        <li>
          <h4>GitHub Logo</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip"><img alt="Github_logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/github_logo.png?1340659511" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip" class="minibutton download">Download</a>
        </li>
        <li>
          <h4>The Octocat</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip"><img alt="Octocat" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/octocat.png?1340659511" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip" class="minibutton download">Download</a>
        </li>
      </ul>
    </div>

    
    
    <span id='server_response_time' data-time='0.10401' data-host='fe16'></span>
    
  </body>
</html>

