#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_DoubleJet_16_3b()
{
//=========Macro generated from canvas: ratio_trigger_2016_DoubleJet_16_3b/ratio_trigger_2016_DoubleJet_16_3b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_DoubleJet_16_3b = new TCanvas("ratio_trigger_2016_DoubleJet_16_3b", "ratio_trigger_2016_DoubleJet_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_DoubleJet_16_3b->SetHighLightColor(2);
   ratio_trigger_2016_DoubleJet_16_3b->Range(0,0,1,1);
   ratio_trigger_2016_DoubleJet_16_3b->SetFillColor(0);
   ratio_trigger_2016_DoubleJet_16_3b->SetBorderMode(0);
   ratio_trigger_2016_DoubleJet_16_3b->SetBorderSize(2);
   ratio_trigger_2016_DoubleJet_16_3b->SetLeftMargin(0.15);
   ratio_trigger_2016_DoubleJet_16_3b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.4566435,3394.231,1.981711);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis41[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__41 = new TH1D("probeNew__41","",13, xAxis41);
   probeNew__41->SetBinContent(4,0.02781845);
   probeNew__41->SetBinContent(5,0.1629902);
   probeNew__41->SetBinContent(6,0.4203911);
   probeNew__41->SetBinContent(7,0.568932);
   probeNew__41->SetBinContent(8,0.6345679);
   probeNew__41->SetBinContent(9,0.6302251);
   probeNew__41->SetBinContent(10,0.7021277);
   probeNew__41->SetBinContent(11,0.6765376);
   probeNew__41->SetBinContent(12,0.7032258);
   probeNew__41->SetBinContent(13,0.7647059);
   probeNew__41->SetBinContent(14,0.5);
   probeNew__41->SetEntries(5.291522);
   probeNew__41->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__41->GetXaxis()->SetRange(0,14);
   probeNew__41->GetXaxis()->SetLabelFont(42);
   probeNew__41->GetXaxis()->SetTitleOffset(1);
   probeNew__41->GetXaxis()->SetTitleFont(42);
   probeNew__41->GetYaxis()->SetTitle("Data / MC");
   probeNew__41->GetYaxis()->SetLabelFont(42);
   probeNew__41->GetYaxis()->SetTitleFont(42);
   probeNew__41->GetZaxis()->SetLabelFont(42);
   probeNew__41->GetZaxis()->SetTitleOffset(1);
   probeNew__41->GetZaxis()->SetTitleFont(42);
   probeNew__41->Draw("Aape");
   Double_t xAxis42[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__42 = new TH1D("probeNew__42","",13, xAxis42);
   probeNew__42->SetBinContent(3,0.00223861);
   probeNew__42->SetBinContent(4,0.0322411);
   probeNew__42->SetBinContent(5,0.2349376);
   probeNew__42->SetBinContent(6,0.5249423);
   probeNew__42->SetBinContent(7,0.6811568);
   probeNew__42->SetBinContent(8,0.7416453);
   probeNew__42->SetBinContent(9,0.7678675);
   probeNew__42->SetBinContent(10,0.7794837);
   probeNew__42->SetBinContent(11,0.7923179);
   probeNew__42->SetBinContent(12,0.8014143);
   probeNew__42->SetBinContent(13,0.8072774);
   probeNew__42->SetBinContent(14,0.8267714);
   probeNew__42->SetBinError(3,0.0003241553);
   probeNew__42->SetBinError(4,0.0007795437);
   probeNew__42->SetBinError(5,0.002176353);
   probeNew__42->SetBinError(6,0.003862091);
   probeNew__42->SetBinError(7,0.005213116);
   probeNew__42->SetBinError(8,0.006373528);
   probeNew__42->SetBinError(9,0.007602838);
   probeNew__42->SetBinError(10,0.008950877);
   probeNew__42->SetBinError(11,0.006356597);
   probeNew__42->SetBinError(12,0.0110897);
   probeNew__42->SetBinError(13,0.01398124);
   probeNew__42->SetBinError(14,0.09032799);
   probeNew__42->SetEntries(64986.45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__42->SetLineColor(ci);
   probeNew__42->GetXaxis()->SetRange(1,2000);
   probeNew__42->GetXaxis()->SetLabelFont(42);
   probeNew__42->GetXaxis()->SetTitleOffset(1);
   probeNew__42->GetXaxis()->SetTitleFont(42);
   probeNew__42->GetYaxis()->SetLabelFont(42);
   probeNew__42->GetYaxis()->SetTitleFont(42);
   probeNew__42->GetZaxis()->SetLabelFont(42);
   probeNew__42->GetZaxis()->SetTitleOffset(1);
   probeNew__42->GetZaxis()->SetTitleFont(42);
   probeNew__42->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_DoubleJet_16_3b->cd();
  
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
   
   Double_t Graph_fx3007[11] = { 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3007[11] = { 0, 0.8628257, 0.6937595, 0.8008329, 0.8352439, 0.8556218, 0.8207471, 0.9007599, 0.8538714, 0.8774809, 0.9472653 };
   Double_t Graph_felx3007[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3007[11] = { 0, 0.8628257, 0.6937259, 0.782794, 0.7871824, 0.7912521, 0.759978, 0.8162104, 0.779763, 0.7948539, 0.8420153 };
   Double_t Graph_fehx3007[11] = { 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3007[11] = { 838.474, 57.62325, 8.216136, 3.918305, 3.118084, 2.90217, 2.800734, 2.798196, 2.739037, 2.722431, 2.734632 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3007,Graph_fy3007,Graph_felx3007,Graph_fehx3007,Graph_fely3007,Graph_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-153.8462,2153.846);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(nullptr);
   Graph_Graph3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3007->SetLineColor(ci);
   Graph_Graph3007->GetXaxis()->SetRange(1,100);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
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
   ratio_trigger_2016_DoubleJet_16_3b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3347258,1.737876,510,"S");
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
   ratio_trigger_2016_DoubleJet_16_3b->cd();
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
   ratio_trigger_2016_DoubleJet_16_3b->Modified();
   ratio_trigger_2016_DoubleJet_16_3b->cd();
   ratio_trigger_2016_DoubleJet_16_3b->SetSelected(ratio_trigger_2016_DoubleJet_16_3b);
}
