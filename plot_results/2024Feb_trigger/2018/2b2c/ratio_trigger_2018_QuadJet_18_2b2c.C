#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2018_QuadJet_18_2b2c()
{
//=========Macro generated from canvas: ratio_trigger_2018_QuadJet_18_2b2c/ratio_trigger_2018_QuadJet_18_2b2c
//=========  (Mon Feb 12 13:48:53 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2018_QuadJet_18_2b2c = new TCanvas("ratio_trigger_2018_QuadJet_18_2b2c", "ratio_trigger_2018_QuadJet_18_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2018_QuadJet_18_2b2c->SetHighLightColor(2);
   ratio_trigger_2018_QuadJet_18_2b2c->Range(0,0,1,1);
   ratio_trigger_2018_QuadJet_18_2b2c->SetFillColor(0);
   ratio_trigger_2018_QuadJet_18_2b2c->SetBorderMode(0);
   ratio_trigger_2018_QuadJet_18_2b2c->SetBorderSize(2);
   ratio_trigger_2018_QuadJet_18_2b2c->SetLeftMargin(0.15);
   ratio_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.3965545,3394.231,1.258522);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis89[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__89 = new TH1D("probeNew__89","",13, xAxis89);
   probeNew__89->SetBinContent(3,0.003908795);
   probeNew__89->SetBinContent(4,0.02793433);
   probeNew__89->SetBinContent(5,0.120204);
   probeNew__89->SetBinContent(6,0.2506571);
   probeNew__89->SetBinContent(7,0.3033233);
   probeNew__89->SetBinContent(8,0.3250936);
   probeNew__89->SetBinContent(9,0.3148893);
   probeNew__89->SetBinContent(10,0.3567052);
   probeNew__89->SetBinContent(11,0.3463796);
   probeNew__89->SetBinContent(12,0.3880157);
   probeNew__89->SetBinContent(13,0.3964111);
   probeNew__89->SetBinContent(14,0.1818182);
   probeNew__89->SetEntries(2.833522);
   probeNew__89->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__89->GetXaxis()->SetRange(0,14);
   probeNew__89->GetXaxis()->SetLabelFont(42);
   probeNew__89->GetXaxis()->SetTitleOffset(1);
   probeNew__89->GetXaxis()->SetTitleFont(42);
   probeNew__89->GetYaxis()->SetTitle("Data / MC");
   probeNew__89->GetYaxis()->SetLabelFont(42);
   probeNew__89->GetYaxis()->SetTitleFont(42);
   probeNew__89->GetZaxis()->SetLabelFont(42);
   probeNew__89->GetZaxis()->SetTitleOffset(1);
   probeNew__89->GetZaxis()->SetTitleFont(42);
   probeNew__89->Draw("Aape");
   Double_t xAxis90[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__90 = new TH1D("probeNew__90","",13, xAxis90);
   probeNew__90->SetBinContent(2,0.003058952);
   probeNew__90->SetBinContent(3,0.007848661);
   probeNew__90->SetBinContent(4,0.05649879);
   probeNew__90->SetBinContent(5,0.1702459);
   probeNew__90->SetBinContent(6,0.2566296);
   probeNew__90->SetBinContent(7,0.2836433);
   probeNew__90->SetBinContent(8,0.293345);
   probeNew__90->SetBinContent(9,0.3081586);
   probeNew__90->SetBinContent(10,0.3103206);
   probeNew__90->SetBinContent(11,0.324301);
   probeNew__90->SetBinContent(12,0.352563);
   probeNew__90->SetBinContent(13,0.3676659);
   probeNew__90->SetBinContent(14,0.2822571);
   probeNew__90->SetBinError(2,0.003061772);
   probeNew__90->SetBinError(3,0.0004507751);
   probeNew__90->SetBinError(4,0.0008083356);
   probeNew__90->SetBinError(5,0.001296063);
   probeNew__90->SetBinError(6,0.001725418);
   probeNew__90->SetBinError(7,0.002020311);
   probeNew__90->SetBinError(8,0.002343807);
   probeNew__90->SetBinError(9,0.003082607);
   probeNew__90->SetBinError(10,0.003303564);
   probeNew__90->SetBinError(11,0.0024525);
   probeNew__90->SetBinError(12,0.004527119);
   probeNew__90->SetBinError(13,0.005302652);
   probeNew__90->SetBinError(14,0.03206036);
   probeNew__90->SetEntries(75133.48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__90->SetLineColor(ci);
   probeNew__90->GetXaxis()->SetRange(1,2000);
   probeNew__90->GetXaxis()->SetLabelFont(42);
   probeNew__90->GetXaxis()->SetTitleOffset(1);
   probeNew__90->GetXaxis()->SetTitleFont(42);
   probeNew__90->GetYaxis()->SetLabelFont(42);
   probeNew__90->GetYaxis()->SetTitleFont(42);
   probeNew__90->GetZaxis()->SetLabelFont(42);
   probeNew__90->GetZaxis()->SetTitleOffset(1);
   probeNew__90->GetZaxis()->SetTitleFont(42);
   probeNew__90->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2018_QuadJet_18_2b2c->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-442.3077,-0.923077,2442.308,2.153846);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t Graph_fx3015[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3015[12] = { 0, 0.4980206, 0.4944235, 0.7060614, 0.9767271, 1.069383, 1.10823, 1.021842, 1.149473, 1.068081, 1.100557, 1.078183 };
   Double_t Graph_felx3015[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3015[12] = { 0, 0.4980206, 0.4944235, 0.7060606, 0.9750269, 1.06368, 1.09983, 1.015231, 1.136083, 1.057168, 1.082312, 1.058732 };
   Double_t Graph_fehx3015[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3015[12] = { 1737.396, 235.5667, 32.87216, 11.20496, 7.696102, 7.05503, 6.857897, 6.512439, 6.532088, 6.234846, 5.791919, 5.565032 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3015,Graph_fy3015,Graph_felx3015,Graph_fehx3015,Graph_fely3015,Graph_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-153.8462,2153.846);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(nullptr);
   Graph_Graph3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3015->SetLineColor(ci);
   Graph_Graph3015->GetXaxis()->SetRange(1,100);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-153.8462,0.7,2153.846,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-153.8462,1,2153.846,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-153.8462,1.3,2153.846,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   ratio_trigger_2018_QuadJet_18_2b2c->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-153.8462,2153.846,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3138007,1.093014,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Data / MC");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-153.8462,2153.846,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("H_{T} [GeV]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,2,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   ratio_trigger_2018_QuadJet_18_2b2c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
   TLegend *leg = new TLegend(0.8,0.8,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("probeNew","SingleMuon (Data)","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("probeNew","t#bar{t} (MC)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ratio_trigger_2018_QuadJet_18_2b2c->Modified();
   ratio_trigger_2018_QuadJet_18_2b2c->cd();
   ratio_trigger_2018_QuadJet_18_2b2c->SetSelected(ratio_trigger_2018_QuadJet_18_2b2c);
}
