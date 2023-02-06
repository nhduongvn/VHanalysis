#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_18()
{
//=========Macro generated from canvas: ROC_jets_CvB_18/ROC_jets_CvB_18
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_18 = new TCanvas("ROC_jets_CvB_18", "ROC_jets_CvB_18",0,0,600,600);
   ROC_jets_CvB_18->SetHighLightColor(2);
   ROC_jets_CvB_18->Range(-0.2710369,-0.1597385,1.157041,1.171416);
   ROC_jets_CvB_18->SetFillColor(0);
   ROC_jets_CvB_18->SetBorderMode(0);
   ROC_jets_CvB_18->SetBorderSize(2);
   ROC_jets_CvB_18->SetGridx();
   ROC_jets_CvB_18->SetGridy();
   ROC_jets_CvB_18->SetLeftMargin(0.15709);
   ROC_jets_CvB_18->SetRightMargin(0.1234783);
   ROC_jets_CvB_18->SetBottomMargin(0.12);
   ROC_jets_CvB_18->SetFrameBorderMode(0);
   ROC_jets_CvB_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx667[20] = {
   0,
   0.03857107,
   0.05401388,
   0.06863673,
   0.08017829,
   0.09351997,
   0.1107617,
   0.1359347,
   0.1566521,
   0.1836423,
   0.2118916,
   0.243198,
   0.2811325,
   0.3330333,
   0.4025125,
   0.4667916,
   0.552449,
   0.6571977,
   0.7781541,
   0.934004};
   Double_t Graph_fy667[20] = {
   0,
   0.01348234,
   0.01636686,
   0.0186071,
   0.02090845,
   0.02354097,
   0.02662446,
   0.0303634,
   0.0350355,
   0.0412021,
   0.05009107,
   0.06247522,
   0.08016969,
   0.1062643,
   0.1444344,
   0.2057065,
   0.3082207,
   0.4924958,
   0.8085756,
   0.9888575};
   TGraph *graph = new TGraph(20,Graph_fx667,Graph_fy667);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph667 = new TH1F("Graph_Graph667","",100,0,1.027404);
   Graph_Graph667->SetMinimum(0);
   Graph_Graph667->SetMaximum(1.087743);
   Graph_Graph667->SetDirectory(0);
   Graph_Graph667->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph667->SetLineColor(ci);
   Graph_Graph667->GetXaxis()->SetLabelFont(42);
   Graph_Graph667->GetXaxis()->SetTitleOffset(1);
   Graph_Graph667->GetXaxis()->SetTitleFont(42);
   Graph_Graph667->GetYaxis()->SetLabelFont(42);
   Graph_Graph667->GetYaxis()->SetTitleFont(42);
   Graph_Graph667->GetZaxis()->SetLabelFont(42);
   Graph_Graph667->GetZaxis()->SetTitleOffset(1);
   Graph_Graph667->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph667);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(668);
      tex = new TLatex(0.03857107,0.07348234,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(669);
      tex = new TLatex(0.05401388,0.07636686,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(670);
      tex = new TLatex(0.06863673,0.0786071,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(671);
      tex = new TLatex(0.08017829,0.08090845,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(672);
      tex = new TLatex(0.09351997,0.08354097,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(673);
      tex = new TLatex(0.1107617,0.08662446,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(674);
      tex = new TLatex(0.1359347,0.0903634,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(675);
      tex = new TLatex(0.1566521,0.0950355,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(676);
      tex = new TLatex(0.1836423,0.1012021,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(677);
      tex = new TLatex(0.2118916,0.1100911,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(678);
      tex = new TLatex(0.243198,0.1224752,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(679);
      tex = new TLatex(0.2811325,0.1401697,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(680);
      tex = new TLatex(0.3330333,0.1662643,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(681);
      tex = new TLatex(0.4025125,0.2044344,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(682);
      tex = new TLatex(0.4667916,0.2657065,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(683);
      tex = new TLatex(0.552449,0.3682207,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(684);
      tex = new TLatex(0.6571977,0.5524958,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(685);
      tex = new TLatex(0.7781541,0.8685756,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(686);
      tex = new TLatex(0.934004,1.048857,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(687);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.0467002, 0.9807043);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvB_18->Modified();
   ROC_jets_CvB_18->cd();
   ROC_jets_CvB_18->SetSelected(ROC_jets_CvB_18);
}
