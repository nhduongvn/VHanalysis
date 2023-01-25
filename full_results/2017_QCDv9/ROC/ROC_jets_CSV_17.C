#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_17()
{
//=========Macro generated from canvas: ROC_jets_CSV_17/ROC_jets_CSV_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_17 = new TCanvas("ROC_jets_CSV_17", "ROC_jets_CSV_17",0,0,600,600);
   ROC_jets_CSV_17->SetHighLightColor(2);
   ROC_jets_CSV_17->Range(-0.278384,-0.1594674,1.188405,1.169428);
   ROC_jets_CSV_17->SetFillColor(0);
   ROC_jets_CSV_17->SetBorderMode(0);
   ROC_jets_CSV_17->SetBorderSize(2);
   ROC_jets_CSV_17->SetGridx();
   ROC_jets_CSV_17->SetGridy();
   ROC_jets_CSV_17->SetLeftMargin(0.15709);
   ROC_jets_CSV_17->SetRightMargin(0.1234783);
   ROC_jets_CSV_17->SetBottomMargin(0.12);
   ROC_jets_CSV_17->SetFrameBorderMode(0);
   ROC_jets_CSV_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx520[20] = {
   0,
   0.61221,
   0.713248,
   0.7643644,
   0.7985054,
   0.8240135,
   0.8444999,
   0.8613142,
   0.875464,
   0.8869326,
   0.8970933,
   0.9063167,
   0.9143604,
   0.9213774,
   0.9279334,
   0.9339197,
   0.9398336,
   0.9456087,
   0.9516448,
   0.9593222};
   Double_t Graph_fy520[20] = {
   0,
   0.8395668,
   0.9047184,
   0.9284061,
   0.9414169,
   0.94986,
   0.9559295,
   0.9606453,
   0.9644151,
   0.9674762,
   0.9700771,
   0.9723959,
   0.9744413,
   0.9762637,
   0.977957,
   0.9795802,
   0.9812406,
   0.9829114,
   0.9847189,
   0.9871794};
   TGraph *graph = new TGraph(20,Graph_fx520,Graph_fy520);
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
   
   TH1F *Graph_Graph520 = new TH1F("Graph_Graph520","",100,0,1.055254);
   Graph_Graph520->SetMinimum(0);
   Graph_Graph520->SetMaximum(1.085897);
   Graph_Graph520->SetDirectory(0);
   Graph_Graph520->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph520->SetLineColor(ci);
   Graph_Graph520->GetXaxis()->SetLabelFont(42);
   Graph_Graph520->GetXaxis()->SetTitleOffset(1);
   Graph_Graph520->GetXaxis()->SetTitleFont(42);
   Graph_Graph520->GetYaxis()->SetLabelFont(42);
   Graph_Graph520->GetYaxis()->SetTitleFont(42);
   Graph_Graph520->GetZaxis()->SetLabelFont(42);
   Graph_Graph520->GetZaxis()->SetTitleOffset(1);
   Graph_Graph520->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph520);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(521);
      tex = new TLatex(0.61221,0.8995668,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(522);
      tex = new TLatex(0.713248,0.9647184,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(523);
      tex = new TLatex(0.7643644,0.9884061,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(524);
      tex = new TLatex(0.7985054,1.001417,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(525);
      tex = new TLatex(0.8240135,1.00986,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(526);
      tex = new TLatex(0.8444999,1.01593,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(527);
      tex = new TLatex(0.8613142,1.020645,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(528);
      tex = new TLatex(0.875464,1.024415,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(529);
      tex = new TLatex(0.8869326,1.027476,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(530);
      tex = new TLatex(0.8970933,1.030077,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(531);
      tex = new TLatex(0.9063167,1.032396,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(532);
      tex = new TLatex(0.9143604,1.034441,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(533);
      tex = new TLatex(0.9213774,1.036264,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(534);
      tex = new TLatex(0.9279334,1.037957,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(535);
      tex = new TLatex(0.9339197,1.03958,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(536);
      tex = new TLatex(0.9398336,1.041241,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(537);
      tex = new TLatex(0.9456087,1.042911,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(538);
      tex = new TLatex(0.9516448,1.044719,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(539);
      tex = new TLatex(0.9593222,1.047179,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(540);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04796611, 1.007288);
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
   ROC_jets_CSV_17->Modified();
   ROC_jets_CSV_17->cd();
   ROC_jets_CSV_17->SetSelected(ROC_jets_CSV_17);
}
