#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ratio_trigger_2016_QuadJet_16_3b()
{
//=========Macro generated from canvas: ratio_trigger_2016_QuadJet_16_3b/ratio_trigger_2016_QuadJet_16_3b
//=========  (Mon Feb 12 13:48:52 2024) by ROOT version 6.28/10
   TCanvas *ratio_trigger_2016_QuadJet_16_3b = new TCanvas("ratio_trigger_2016_QuadJet_16_3b", "ratio_trigger_2016_QuadJet_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   ratio_trigger_2016_QuadJet_16_3b->SetHighLightColor(2);
   ratio_trigger_2016_QuadJet_16_3b->Range(0,0,1,1);
   ratio_trigger_2016_QuadJet_16_3b->SetFillColor(0);
   ratio_trigger_2016_QuadJet_16_3b->SetBorderMode(0);
   ratio_trigger_2016_QuadJet_16_3b->SetBorderSize(2);
   ratio_trigger_2016_QuadJet_16_3b->SetLeftMargin(0.15);
   ratio_trigger_2016_QuadJet_16_3b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-548.077,-0.463667,3394.231,1.982859);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   Double_t xAxis35[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__35 = new TH1D("probeNew__35","",13, xAxis35);
   probeNew__35->SetBinContent(3,0.1984733);
   probeNew__35->SetBinContent(4,0.3733529);
   probeNew__35->SetBinContent(5,0.5073529);
   probeNew__35->SetBinContent(6,0.5600559);
   probeNew__35->SetBinContent(7,0.6);
   probeNew__35->SetBinContent(8,0.6469136);
   probeNew__35->SetBinContent(9,0.6205788);
   probeNew__35->SetBinContent(10,0.6702128);
   probeNew__35->SetBinContent(11,0.6537585);
   probeNew__35->SetBinContent(12,0.7032258);
   probeNew__35->SetBinContent(13,0.7647059);
   probeNew__35->SetBinContent(14,0.5);
   probeNew__35->SetEntries(6.29863);
   probeNew__35->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__35->GetXaxis()->SetRange(0,14);
   probeNew__35->GetXaxis()->SetLabelFont(42);
   probeNew__35->GetXaxis()->SetTitleOffset(1);
   probeNew__35->GetXaxis()->SetTitleFont(42);
   probeNew__35->GetYaxis()->SetTitle("Data / MC");
   probeNew__35->GetYaxis()->SetLabelFont(42);
   probeNew__35->GetYaxis()->SetTitleFont(42);
   probeNew__35->GetZaxis()->SetLabelFont(42);
   probeNew__35->GetZaxis()->SetTitleOffset(1);
   probeNew__35->GetZaxis()->SetTitleFont(42);
   probeNew__35->Draw("Aape");
   Double_t xAxis36[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__36 = new TH1D("probeNew__36","",13, xAxis36);
   probeNew__36->SetBinContent(2,0.05729553);
   probeNew__36->SetBinContent(3,0.2836462);
   probeNew__36->SetBinContent(4,0.5001432);
   probeNew__36->SetBinContent(5,0.6264138);
   probeNew__36->SetBinContent(6,0.6848804);
   probeNew__36->SetBinContent(7,0.7148828);
   probeNew__36->SetBinContent(8,0.7383179);
   probeNew__36->SetBinContent(9,0.74992);
   probeNew__36->SetBinContent(10,0.7548583);
   probeNew__36->SetBinContent(11,0.7742598);
   probeNew__36->SetBinContent(12,0.7868805);
   probeNew__36->SetBinContent(13,0.7967929);
   probeNew__36->SetBinContent(14,0.8203096);
   probeNew__36->SetBinError(2,0.01494414);
   probeNew__36->SetBinError(3,0.004192601);
   probeNew__36->SetBinError(4,0.003716719);
   probeNew__36->SetBinError(5,0.00408072);
   probeNew__36->SetBinError(6,0.004640379);
   probeNew__36->SetBinError(7,0.005397724);
   probeNew__36->SetBinError(8,0.006356833);
   probeNew__36->SetBinError(9,0.007478119);
   probeNew__36->SetBinError(10,0.008748685);
   probeNew__36->SetBinError(11,0.006254207);
   probeNew__36->SetBinError(12,0.0109458);
   probeNew__36->SetBinError(13,0.01385063);
   probeNew__36->SetBinError(14,0.08988779);
   probeNew__36->SetEntries(65953.53);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   probeNew__36->SetLineColor(ci);
   probeNew__36->GetXaxis()->SetRange(1,2000);
   probeNew__36->GetXaxis()->SetLabelFont(42);
   probeNew__36->GetXaxis()->SetTitleOffset(1);
   probeNew__36->GetXaxis()->SetTitleFont(42);
   probeNew__36->GetYaxis()->SetLabelFont(42);
   probeNew__36->GetYaxis()->SetTitleFont(42);
   probeNew__36->GetZaxis()->SetLabelFont(42);
   probeNew__36->GetZaxis()->SetTitleOffset(1);
   probeNew__36->GetZaxis()->SetTitleFont(42);
   probeNew__36->Draw("Aapesame");
   upper_pad->Modified();
   ratio_trigger_2016_QuadJet_16_3b->cd();
  
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
   
   Double_t Graph_fx3006[12] = { 150, 225, 275, 325, 375, 425, 475, 525, 575, 700, 900, 1500 };
   Double_t Graph_fy3006[12] = { 0, 0.6997212, 0.7464919, 0.8099325, 0.8177425, 0.8392984, 0.8761993, 0.8275267, 0.8878657, 0.8443659, 0.8936882, 0.9597297 };
   Double_t Graph_felx3006[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fely3006[12] = { 0, 0.699506, 0.7359182, 0.7760347, 0.7725932, 0.7840469, 0.8073124, 0.768435, 0.8123628, 0.7763907, 0.8095352, 0.853095 };
   Double_t Graph_fehx3006[12] = { 50, 25, 25, 25, 25, 25, 25, 25, 25, 100, 100, 500 };
   Double_t Graph_fehy3006[12] = { 34.23092, 6.87105, 4.068471, 3.346909, 3.095387, 2.989918, 2.922394, 2.862243, 2.871707, 2.790462, 2.772723, 2.770625 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph_fx3006,Graph_fy3006,Graph_felx3006,Graph_fehx3006,Graph_fely3006,Graph_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-153.8462,2153.846);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(nullptr);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetRange(1,100);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
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
   ratio_trigger_2016_QuadJet_16_3b->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,-0.3413407,1.738207,510,"S");
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
   ratio_trigger_2016_QuadJet_16_3b->cd();
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
   ratio_trigger_2016_QuadJet_16_3b->Modified();
   ratio_trigger_2016_QuadJet_16_3b->cd();
   ratio_trigger_2016_QuadJet_16_3b->SetSelected(ratio_trigger_2016_QuadJet_16_3b);
}
