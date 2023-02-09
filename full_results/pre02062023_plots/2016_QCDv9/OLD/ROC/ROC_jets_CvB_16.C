#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_16()
{
//=========Macro generated from canvas: ROC_jets_CvB_16/ROC_jets_CvB_16
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_16 = new TCanvas("ROC_jets_CvB_16", "ROC_jets_CvB_16",0,0,600,600);
   ROC_jets_CvB_16->SetHighLightColor(2);
   ROC_jets_CvB_16->Range(-0.2786267,-0.1600396,1.189441,1.173624);
   ROC_jets_CvB_16->SetFillColor(0);
   ROC_jets_CvB_16->SetBorderMode(0);
   ROC_jets_CvB_16->SetBorderSize(2);
   ROC_jets_CvB_16->SetGridx();
   ROC_jets_CvB_16->SetGridy();
   ROC_jets_CvB_16->SetLeftMargin(0.15709);
   ROC_jets_CvB_16->SetRightMargin(0.1234783);
   ROC_jets_CvB_16->SetBottomMargin(0.12);
   ROC_jets_CvB_16->SetFrameBorderMode(0);
   ROC_jets_CvB_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx625[20] = {
   0,
   0.05570508,
   0.07566816,
   0.0887046,
   0.1035828,
   0.1235479,
   0.1412847,
   0.1628289,
   0.1876602,
   0.2147495,
   0.2614224,
   0.3017477,
   0.3528793,
   0.4049294,
   0.4649093,
   0.5398049,
   0.6232529,
   0.7224917,
   0.8409945,
   0.9601588};
   Double_t Graph_fy625[20] = {
   0,
   0.0116072,
   0.014345,
   0.01649221,
   0.01869304,
   0.02129314,
   0.0244776,
   0.02843846,
   0.03350311,
   0.04031688,
   0.05060642,
   0.06524129,
   0.08605373,
   0.1163064,
   0.1603095,
   0.2313451,
   0.3478261,
   0.5454106,
   0.8397195,
   0.9907213};
   TGraph *graph = new TGraph(20,Graph_fx625,Graph_fy625);
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
   
   TH1F *Graph_Graph625 = new TH1F("Graph_Graph625","",100,0,1.056175);
   Graph_Graph625->SetMinimum(0);
   Graph_Graph625->SetMaximum(1.089793);
   Graph_Graph625->SetDirectory(0);
   Graph_Graph625->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph625->SetLineColor(ci);
   Graph_Graph625->GetXaxis()->SetLabelFont(42);
   Graph_Graph625->GetXaxis()->SetTitleOffset(1);
   Graph_Graph625->GetXaxis()->SetTitleFont(42);
   Graph_Graph625->GetYaxis()->SetLabelFont(42);
   Graph_Graph625->GetYaxis()->SetTitleFont(42);
   Graph_Graph625->GetZaxis()->SetLabelFont(42);
   Graph_Graph625->GetZaxis()->SetTitleOffset(1);
   Graph_Graph625->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph625);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(626);
      tex = new TLatex(0.05570508,0.0716072,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(627);
      tex = new TLatex(0.07566816,0.074345,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(628);
      tex = new TLatex(0.0887046,0.07649221,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(629);
      tex = new TLatex(0.1035828,0.07869304,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(630);
      tex = new TLatex(0.1235479,0.08129314,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(631);
      tex = new TLatex(0.1412847,0.0844776,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(632);
      tex = new TLatex(0.1628289,0.08843846,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(633);
      tex = new TLatex(0.1876602,0.09350311,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(634);
      tex = new TLatex(0.2147495,0.1003169,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(635);
      tex = new TLatex(0.2614224,0.1106064,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(636);
      tex = new TLatex(0.3017477,0.1252413,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(637);
      tex = new TLatex(0.3528793,0.1460537,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(638);
      tex = new TLatex(0.4049294,0.1763064,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(639);
      tex = new TLatex(0.4649093,0.2203095,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(640);
      tex = new TLatex(0.5398049,0.2913451,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(641);
      tex = new TLatex(0.6232529,0.4078261,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(642);
      tex = new TLatex(0.7224917,0.6054106,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(643);
      tex = new TLatex(0.8409945,0.8997195,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(644);
      tex = new TLatex(0.9601588,1.050721,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(645);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04800794, 1.008167);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvB_16->Modified();
   ROC_jets_CvB_16->cd();
   ROC_jets_CvB_16->SetSelected(ROC_jets_CvB_16);
}
