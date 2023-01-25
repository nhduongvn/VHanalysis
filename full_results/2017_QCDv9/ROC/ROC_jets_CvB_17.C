#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_17()
{
//=========Macro generated from canvas: ROC_jets_CvB_17/ROC_jets_CvB_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_17 = new TCanvas("ROC_jets_CvB_17", "ROC_jets_CvB_17",0,0,600,600);
   ROC_jets_CvB_17->SetHighLightColor(2);
   ROC_jets_CvB_17->Range(-0.2670655,-0.1598399,1.140087,1.172159);
   ROC_jets_CvB_17->SetFillColor(0);
   ROC_jets_CvB_17->SetBorderMode(0);
   ROC_jets_CvB_17->SetBorderSize(2);
   ROC_jets_CvB_17->SetGridx();
   ROC_jets_CvB_17->SetGridy();
   ROC_jets_CvB_17->SetLeftMargin(0.15709);
   ROC_jets_CvB_17->SetRightMargin(0.1234783);
   ROC_jets_CvB_17->SetBottomMargin(0.12);
   ROC_jets_CvB_17->SetFrameBorderMode(0);
   ROC_jets_CvB_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx646[20] = {
   0,
   0.09440584,
   0.1092694,
   0.1247615,
   0.1384947,
   0.1545403,
   0.1708927,
   0.1890297,
   0.2068815,
   0.2329063,
   0.2691024,
   0.3047036,
   0.3464706,
   0.3995721,
   0.4530329,
   0.5210912,
   0.5917252,
   0.6802897,
   0.7857944,
   0.9203184};
   Double_t Graph_fy646[20] = {
   0,
   0.01346684,
   0.01643332,
   0.0187738,
   0.02121161,
   0.02401526,
   0.0273289,
   0.03136177,
   0.03643815,
   0.04314505,
   0.05285408,
   0.06638822,
   0.08574218,
   0.1138433,
   0.1540619,
   0.2172917,
   0.3212111,
   0.5055045,
   0.8164854,
   0.989485};
   TGraph *graph = new TGraph(20,Graph_fx646,Graph_fy646);
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
   
   TH1F *Graph_Graph646 = new TH1F("Graph_Graph646","",100,0,1.01235);
   Graph_Graph646->SetMinimum(0);
   Graph_Graph646->SetMaximum(1.088433);
   Graph_Graph646->SetDirectory(0);
   Graph_Graph646->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph646->SetLineColor(ci);
   Graph_Graph646->GetXaxis()->SetLabelFont(42);
   Graph_Graph646->GetXaxis()->SetTitleOffset(1);
   Graph_Graph646->GetXaxis()->SetTitleFont(42);
   Graph_Graph646->GetYaxis()->SetLabelFont(42);
   Graph_Graph646->GetYaxis()->SetTitleFont(42);
   Graph_Graph646->GetZaxis()->SetLabelFont(42);
   Graph_Graph646->GetZaxis()->SetTitleOffset(1);
   Graph_Graph646->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph646);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(647);
      tex = new TLatex(0.09440584,0.07346684,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(648);
      tex = new TLatex(0.1092694,0.07643332,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(649);
      tex = new TLatex(0.1247615,0.0787738,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(650);
      tex = new TLatex(0.1384947,0.08121161,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(651);
      tex = new TLatex(0.1545403,0.08401526,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(652);
      tex = new TLatex(0.1708927,0.0873289,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(653);
      tex = new TLatex(0.1890297,0.09136177,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(654);
      tex = new TLatex(0.2068815,0.09643815,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(655);
      tex = new TLatex(0.2329063,0.1031451,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(656);
      tex = new TLatex(0.2691024,0.1128541,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(657);
      tex = new TLatex(0.3047036,0.1263882,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(658);
      tex = new TLatex(0.3464706,0.1457422,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(659);
      tex = new TLatex(0.3995721,0.1738433,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(660);
      tex = new TLatex(0.4530329,0.2140619,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(661);
      tex = new TLatex(0.5210912,0.2772917,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(662);
      tex = new TLatex(0.5917252,0.3812111,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(663);
      tex = new TLatex(0.6802897,0.5655045,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(664);
      tex = new TLatex(0.7857944,0.8764854,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(665);
      tex = new TLatex(0.9203184,1.049485,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(666);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04601592, 0.9663343);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvB_17->Modified();
   ROC_jets_CvB_17->cd();
   ROC_jets_CvB_17->SetSelected(ROC_jets_CvB_17);
}
