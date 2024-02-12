#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_QuadJet_16_4b()
{
//=========Macro generated from canvas: ratio_trigger_2016_QuadJet_16_4b/ratio_trigger_2016_QuadJet_16_4b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_QuadJet_16_4b = new TCanvas("ratio_trigger_2016_QuadJet_16_4b", "ratio_trigger_2016_QuadJet_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_QuadJet_16_4b->SetHighLightColor(2);
   ratio_trigger_2016_QuadJet_16_4b->Range(0,0,1,1);
   ratio_trigger_2016_QuadJet_16_4b->SetFillColor(0);
   ratio_trigger_2016_QuadJet_16_4b->SetBorderMode(0);
   ratio_trigger_2016_QuadJet_16_4b->SetBorderSize(2);
   ratio_trigger_2016_QuadJet_16_4b->SetLeftMargin(0.15);
   ratio_trigger_2016_QuadJet_16_4b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.5017489,3394.231,2.408873);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis5[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__5 = new TH1D("probeNew__5","",13, xAxis5);
   probeNew__5->SetBinContent(3,0.3333333);
   probeNew__5->SetBinContent(4,0.7142857);
   probeNew__5->SetBinContent(5,0.7647059);
   probeNew__5->SetBinContent(6,0.7037037);
   probeNew__5->SetBinContent(7,0.8275862);
   probeNew__5->SetBinContent(8,0.9047619);
   probeNew__5->SetBinContent(9,0.9166667);
   probeNew__5->SetBinContent(10,1);
   probeNew__5->SetBinContent(11,0.804878);
   probeNew__5->SetBinContent(12,0.8571429);
   probeNew__5->SetBinContent(13,0.7777778);
   probeNew__5->SetEntries(8.604842);
   probeNew__5->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__5->GetXaxis()->SetRange(0,14);
   probeNew__5->GetXaxis()->SetLabelFont(42);
   probeNew__5->GetXaxis()->SetTitleOffset(1);
   probeNew__5->GetXaxis()->SetTitleFont(42);
   probeNew__5->GetYaxis()->SetTitle("Data / MC");
   probeNew__5->GetYaxis()->SetLabelFont(42);
   probeNew__5->GetYaxis()->SetTitleFont(42);
   probeNew__5->GetZaxis()->SetLabelFont(42);
   probeNew__5->GetZaxis()->SetTitleOffset(1);
   probeNew__5->GetZaxis()->SetTitleFont(42);
   probeNew__5->Draw("Aape");
   Double_t xAxis6[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__6 = new TH1D("probeNew__6","",13, xAxis6);
   probeNew__6->SetBinContent(2,0.3660701);
   probeNew__6->SetBinContent(3,0.4434948);
   probeNew__6->SetBinContent(4,0.6832826);
   probeNew__6->SetBinContent(5,0.7877713);
   probeNew__6->SetBinContent(6,0.8465781);
   probeNew__6->SetBinContent(7,0.8767452);
   probeNew__6->SetBinContent(8,0.8927741);
   probeNew__6->SetBinContent(9,0.8892729);
   probeNew__6->SetBinContent(10,0.9037277);
   probeNew__6->SetBinContent(11,0.9267541);
   probeNew__6->SetBinContent(12,0.9228038);
   probeNew__6->SetBinContent(13,0.9093444);
   probeNew__6->SetBinContent(14,0.8730373);
   probeNew__6->SetBinError(2,0.4235684);
   probeNew__6->SetBinError(3,0.03622527);
   probeNew__6->SetBinError(4,0.02676169);
   probeNew__6->SetBinError(5,0.02501128);
   probeNew__6->SetBinError(6,0.02636979);
   probeNew__6->SetBinError(7,0.02844768);
   probeNew__6->SetBinError(8,0.03171539);
   probeNew__6->SetBinError(9,0.03594716);
   probeNew__6->SetBinError(10,0.04008557);
   probeNew__6->SetBinError(11,0.02676174);
   probeNew__6->SetBinError(12,0.04210736);
   probeNew__6->SetBinError(13,0.05053176);
   probeNew__6->SetBinError(14,0.3179213);
   probeNew__6->SetEntries(463.7338);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__6->SetLineColor(ci);
   probeNew__6->GetXaxis()->SetRange(1,2000);
   probeNew__6->GetXaxis()->SetLabelFont(42);
   probeNew__6->GetXaxis()->SetTitleOffset(1);
   probeNew__6->GetXaxis()->SetTitleFont(42);
   probeNew__6->GetYaxis()->SetLabelFont(42);
   probeNew__6->GetYaxis()->SetTitleFont(42);
   probeNew__6->GetZaxis()->SetLabelFont(42);
   probeNew__6->GetZaxis()->SetTitleOffset(1);
   probeNew__6->GetZaxis()->SetTitleFont(42);
   probeNew__6->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_QuadJet_16_4b->cd();
  
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
   
   Double_t Graph_fx3001[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3001[12] = { 0, 0.7516059, 1.045374, 0.9707206, 0.8312331, 0.9439301, 1.013428, 1.030805, 1.106528, 0.8684915, 0.9288463, 0.855317 };
   Double_t Graph_felx3001[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3001[12] = { 0, 0.7452085, 0.9438515, 0.8629286, 0.752901, 0.8229971, 0.8629533, 0.8746286, 0.9157141, 0.7625248, 0.8026271, 0.7574519 };
   Double_t Graph_fehx3001[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3001[12] = { 21.95653, 4.580476, 3.206101, 2.805294, 2.580326, 2.55001, 2.539549, 2.556335, 2.552759, 2.401688, 2.439492, 2.443732 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3001,Graph_fy3001,Graph_felx3001,Graph_fehx3001,Graph_fely3001,Graph_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-153.8462,2153.846);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(2);
   Graph_Graph3001->SetDirectory(nullptr);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetRange(1,100);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
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
   ratio_trigger_2016_QuadJet_16_4b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3562178,2.117811,510,"S");
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
   ratio_trigger_2016_QuadJet_16_4b->cd();
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
   ratio_trigger_2016_QuadJet_16_4b->Modified();
   ratio_trigger_2016_QuadJet_16_4b->cd();
   ratio_trigger_2016_QuadJet_16_4b->SetSelected(ratio_trigger_2016_QuadJet_16_4b);
}
