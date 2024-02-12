#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_QuadJet_16_2b2c()
{
//=========Macro generated from canvas: ratio_trigger_2016_QuadJet_16_2b2c/ratio_trigger_2016_QuadJet_16_2b2c
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_QuadJet_16_2b2c = new TCanvas("ratio_trigger_2016_QuadJet_16_2b2c", "ratio_trigger_2016_QuadJet_16_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_QuadJet_16_2b2c->SetHighLightColor(2);
   ratio_trigger_2016_QuadJet_16_2b2c->Range(0,0,1,1);
   ratio_trigger_2016_QuadJet_16_2b2c->SetFillColor(0);
   ratio_trigger_2016_QuadJet_16_2b2c->SetBorderMode(0);
   ratio_trigger_2016_QuadJet_16_2b2c->SetBorderSize(2);
   ratio_trigger_2016_QuadJet_16_2b2c->SetLeftMargin(0.15);
   ratio_trigger_2016_QuadJet_16_2b2c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.5078599,3394.231,2.409872);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis65[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__65 = new TH1D("probeNew__65","",13, xAxis65);
   probeNew__65->SetBinContent(2,0.3333333);
   probeNew__65->SetBinContent(3,0.146988);
   probeNew__65->SetBinContent(4,0.272899);
   probeNew__65->SetBinContent(5,0.3506173);
   probeNew__65->SetBinContent(6,0.3834101);
   probeNew__65->SetBinContent(7,0.3858824);
   probeNew__65->SetBinContent(8,0.4533898);
   probeNew__65->SetBinContent(9,0.4448529);
   probeNew__65->SetBinContent(10,0.488);
   probeNew__65->SetBinContent(11,0.503632);
   probeNew__65->SetBinContent(12,0.533557);
   probeNew__65->SetBinContent(13,0.5775401);
   probeNew__65->SetBinContent(14,1);
   probeNew__65->SetEntries(4.874102);
   probeNew__65->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__65->GetXaxis()->SetRange(0,14);
   probeNew__65->GetXaxis()->SetLabelFont(42);
   probeNew__65->GetXaxis()->SetTitleOffset(1);
   probeNew__65->GetXaxis()->SetTitleFont(42);
   probeNew__65->GetYaxis()->SetTitle("Data / MC");
   probeNew__65->GetYaxis()->SetLabelFont(42);
   probeNew__65->GetYaxis()->SetTitleFont(42);
   probeNew__65->GetZaxis()->SetLabelFont(42);
   probeNew__65->GetZaxis()->SetTitleOffset(1);
   probeNew__65->GetZaxis()->SetTitleFont(42);
   probeNew__65->Draw("Aape");
   Double_t xAxis66[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__66 = new TH1D("probeNew__66","",13, xAxis66);
   probeNew__66->SetBinContent(2,0.07160529);
   probeNew__66->SetBinContent(3,0.2672111);
   probeNew__66->SetBinContent(4,0.4517679);
   probeNew__66->SetBinContent(5,0.5506289);
   probeNew__66->SetBinContent(6,0.5996125);
   probeNew__66->SetBinContent(7,0.6222501);
   probeNew__66->SetBinContent(8,0.6327963);
   probeNew__66->SetBinContent(9,0.6426788);
   probeNew__66->SetBinContent(10,0.6532829);
   probeNew__66->SetBinContent(11,0.662961);
   probeNew__66->SetBinContent(12,0.6906986);
   probeNew__66->SetBinContent(13,0.7037638);
   probeNew__66->SetBinContent(14,0.7642352);
   probeNew__66->SetBinError(2,0.01450597);
   probeNew__66->SetBinError(3,0.003466627);
   probeNew__66->SetBinError(4,0.002928829);
   probeNew__66->SetBinError(5,0.003097226);
   probeNew__66->SetBinError(6,0.003429701);
   probeNew__66->SetBinError(7,0.003882949);
   probeNew__66->SetBinError(8,0.004475725);
   probeNew__66->SetBinError(9,0.005179313);
   probeNew__66->SetBinError(10,0.006017556);
   probeNew__66->SetBinError(11,0.004208203);
   probeNew__66->SetBinError(12,0.007363596);
   probeNew__66->SetBinError(13,0.009443045);
   probeNew__66->SetBinError(14,0.0687993);
   probeNew__66->SetEntries(83836.75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__66->SetLineColor(ci);
   probeNew__66->GetXaxis()->SetRange(1,2000);
   probeNew__66->GetXaxis()->SetLabelFont(42);
   probeNew__66->GetXaxis()->SetTitleOffset(1);
   probeNew__66->GetXaxis()->SetTitleFont(42);
   probeNew__66->GetYaxis()->SetLabelFont(42);
   probeNew__66->GetYaxis()->SetTitleFont(42);
   probeNew__66->GetZaxis()->SetLabelFont(42);
   probeNew__66->GetZaxis()->SetTitleOffset(1);
   probeNew__66->GetZaxis()->SetTitleFont(42);
   probeNew__66->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_QuadJet_16_2b2c->cd();
  
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
   
   Double_t Graph_fx3011[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3011[12] = { 4.65515, 0.5500817, 0.6040689, 0.6367579, 0.6394299, 0.6201403, 0.7164863, 0.6921855, 0.7469964, 0.7596705, 0.772489, 0.8206449 };
   Double_t Graph_felx3011[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3011[12] = { 4.616411, 0.5500731, 0.6022852, 0.6298852, 0.6293259, 0.6100834, 0.6954549, 0.6731368, 0.7192041, 0.7285644, 0.7351167, 0.7715592 };
   Double_t Graph_fehx3011[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3011[12] = { 29.53987, 7.192964, 4.396329, 3.675679, 3.401393, 3.279548, 3.274514, 3.218123, 3.196086, 3.159874, 3.052629, 3.023772 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3011,Graph_fy3011,Graph_felx3011,Graph_fehx3011,Graph_fely3011,Graph_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-153.8462,2153.846);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(nullptr);
   Graph_Graph3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3011->SetLineColor(ci);
   Graph_Graph3011->GetXaxis()->SetRange(1,100);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
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
   ratio_trigger_2016_QuadJet_16_2b2c->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3619733,2.118099,510,"S");
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
   ratio_trigger_2016_QuadJet_16_2b2c->cd();
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
   ratio_trigger_2016_QuadJet_16_2b2c->Modified();
   ratio_trigger_2016_QuadJet_16_2b2c->cd();
   ratio_trigger_2016_QuadJet_16_2b2c->SetSelected(ratio_trigger_2016_QuadJet_16_2b2c);
}
