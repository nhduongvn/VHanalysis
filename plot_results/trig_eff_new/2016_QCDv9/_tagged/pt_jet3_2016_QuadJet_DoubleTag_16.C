#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16/pt_jet3_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16", "pt_jet3_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->Range(-109.1764,-0.03230769,585.8166,0.2369231);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet3__292 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet3__292","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(5,0.01326607);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(6,0.02184874);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(7,0.02694449);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(8,0.0294701);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(9,0.03391473);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(10,0.03225806);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(11,0.030837);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(12,0.03010033);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(13,0.04201681);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(14,0.02834008);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(15,0.0130719);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(16,0.00990099);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(17,0.02564103);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(18,0.03571429);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(19,0.02272727);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(20,0.04545455);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(22,0.1428571);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetBinContent(24,0.2);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetEntries(0.7843636);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  168.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   61.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet3__292);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_pt_jet3__292->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet3__292->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16);
}
