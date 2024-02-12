#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_DoubleJet_16_2b2c()
{
//=========Macro generated from canvas: ratio_trigger_2016_DoubleJet_16_2b2c/ratio_trigger_2016_DoubleJet_16_2b2c
//=========  (Mon Feb 12 13:48:53 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_DoubleJet_16_2b2c = new TCanvas("ratio_trigger_2016_DoubleJet_16_2b2c", "ratio_trigger_2016_DoubleJet_16_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_DoubleJet_16_2b2c->SetHighLightColor(2);
   ratio_trigger_2016_DoubleJet_16_2b2c->Range(0,0,1,1);
   ratio_trigger_2016_DoubleJet_16_2b2c->SetFillColor(0);
   ratio_trigger_2016_DoubleJet_16_2b2c->SetBorderMode(0);
   ratio_trigger_2016_DoubleJet_16_2b2c->SetBorderSize(2);
   ratio_trigger_2016_DoubleJet_16_2b2c->SetLeftMargin(0.15);
   ratio_trigger_2016_DoubleJet_16_2b2c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.5070233,3394.231,2.409735);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis71[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__71 = new TH1D("probeNew__71","",13, xAxis71);
   probeNew__71->SetBinContent(3,0.002409639);
   probeNew__71->SetBinContent(4,0.01983003);
   probeNew__71->SetBinContent(5,0.1218107);
   probeNew__71->SetBinContent(6,0.2866359);
   probeNew__71->SetBinContent(7,0.3705882);
   probeNew__71->SetBinContent(8,0.450565);
   probeNew__71->SetBinContent(9,0.4522059);
   probeNew__71->SetBinContent(10,0.496);
   probeNew__71->SetBinContent(11,0.5084746);
   probeNew__71->SetBinContent(12,0.533557);
   probeNew__71->SetBinContent(13,0.5775401);
   probeNew__71->SetBinContent(14,1);
   probeNew__71->SetEntries(3.819617);
   probeNew__71->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__71->GetXaxis()->SetRange(0,14);
   probeNew__71->GetXaxis()->SetLabelFont(42);
   probeNew__71->GetXaxis()->SetTitleOffset(1);
   probeNew__71->GetXaxis()->SetTitleFont(42);
   probeNew__71->GetYaxis()->SetTitle("Data / MC");
   probeNew__71->GetYaxis()->SetLabelFont(42);
   probeNew__71->GetYaxis()->SetTitleFont(42);
   probeNew__71->GetZaxis()->SetLabelFont(42);
   probeNew__71->GetZaxis()->SetTitleOffset(1);
   probeNew__71->GetZaxis()->SetTitleFont(42);
   probeNew__71->Draw("Aape");
   Double_t xAxis72[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__72 = new TH1D("probeNew__72","",13, xAxis72);
   probeNew__72->SetBinContent(2,0.002244149);
   probeNew__72->SetBinContent(3,0.001913648);
   probeNew__72->SetBinContent(4,0.02878065);
   probeNew__72->SetBinContent(5,0.201154);
   probeNew__72->SetBinContent(6,0.4539164);
   probeNew__72->SetBinContent(7,0.5822259);
   probeNew__72->SetBinContent(8,0.6263226);
   probeNew__72->SetBinContent(9,0.6498477);
   probeNew__72->SetBinContent(10,0.6634925);
   probeNew__72->SetBinContent(11,0.6744236);
   probeNew__72->SetBinContent(12,0.6992288);
   probeNew__72->SetBinContent(13,0.7100462);
   probeNew__72->SetBinContent(14,0.7642352);
   probeNew__72->SetBinError(2,0.002247194);
   probeNew__72->SetBinError(3,0.0002533935);
   probeNew__72->SetBinError(4,0.0006172228);
   probeNew__72->SetBinError(5,0.001645757);
   probeNew__72->SetBinError(6,0.002842537);
   probeNew__72->SetBinError(7,0.003707533);
   probeNew__72->SetBinError(8,0.004442981);
   probeNew__72->SetBinError(9,0.005218964);
   probeNew__72->SetBinError(10,0.006081978);
   probeNew__72->SetBinError(11,0.004258403);
   probeNew__72->SetBinError(12,0.00742693);
   probeNew__72->SetBinError(13,0.009502282);
   probeNew__72->SetBinError(14,0.0687993);
   probeNew__72->SetEntries(100950.1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__72->SetLineColor(ci);
   probeNew__72->GetXaxis()->SetRange(1,2000);
   probeNew__72->GetXaxis()->SetLabelFont(42);
   probeNew__72->GetXaxis()->SetTitleOffset(1);
   probeNew__72->GetXaxis()->SetTitleFont(42);
   probeNew__72->GetYaxis()->SetLabelFont(42);
   probeNew__72->GetYaxis()->SetTitleFont(42);
   probeNew__72->GetZaxis()->SetLabelFont(42);
   probeNew__72->GetZaxis()->SetTitleOffset(1);
   probeNew__72->GetZaxis()->SetTitleFont(42);
   probeNew__72->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_DoubleJet_16_2b2c->cd();
  
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
   
   Double_t Graph_fx3012[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3012[12] = { 0, 1.259186, 0.6890055, 0.6055593, 0.631473, 0.6365024, 0.7193816, 0.6958644, 0.7475593, 0.7539395, 0.763065, 0.8133839 };
   Double_t Graph_felx3012[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3012[12] = { 0, 1.259186, 0.6890055, 0.6055585, 0.6289976, 0.6277633, 0.6987052, 0.6756173, 0.7183253, 0.7221784, 0.7261486, 0.7647325 };
   Double_t Graph_fehx3012[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3012[12] = { 2370.663, 978.5079, 64.38711, 9.487629, 4.390456, 3.492581, 3.306292, 3.187816, 3.152346, 3.109391, 3.015386, 2.997014 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3012,Graph_fy3012,Graph_felx3012,Graph_fehx3012,Graph_fely3012,Graph_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-153.8462,2153.846);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(2);
   Graph_Graph3012->SetDirectory(nullptr);
   Graph_Graph3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3012->SetLineColor(ci);
   Graph_Graph3012->GetXaxis()->SetRange(1,100);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
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
   ratio_trigger_2016_DoubleJet_16_2b2c->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3611854,2.118059,510,"S");
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
   ratio_trigger_2016_DoubleJet_16_2b2c->cd();
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
   ratio_trigger_2016_DoubleJet_16_2b2c->Modified();
   ratio_trigger_2016_DoubleJet_16_2b2c->cd();
   ratio_trigger_2016_DoubleJet_16_2b2c->SetSelected(ratio_trigger_2016_DoubleJet_16_2b2c);
}
