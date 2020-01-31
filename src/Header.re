[@react.component]
let make = () => {
<nav className="navbar navbar-expand">
      <span className="navbar-brand"><h3>{ReasonReact.string("Dgraph GraphQL Blog")}</h3></span>
      <div className="navbar-collapse" style=(ReactDOMRe.Style.make(
        ~flexDirection="row-reverse",
        ()))>
        <ul className="navbar-nav">
          <li className="nav-item">
            <a href="/" className="nav-link">
                {ReasonReact.string("Feed")}
            </a>
          </li>
          <li className="nav-item">
            <a href="/create" className="nav-link">
                {ReasonReact.string("Add Article")}
            </a>    
          </li>
          /* <li className="nav-item">
            <input
              id="search"
              className="form-control"
              onChange={e => filterPosts(e.target.value)}
              placeholder="Search"
            />
          </li> */
        </ul>
      </div>
    </nav>
}