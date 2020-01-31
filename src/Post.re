  [@react.component]
  let make = (~post) => {
    <div>
    <div>
      <h5>{ReasonReact.string(post##title)}</h5>
      <h6>{ReasonReact.string(post##author##name)}</h6>
    </div>
  </div> 
  }