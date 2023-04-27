#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17/BvL_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17 = new TCanvas("BvL_2017_QuadJet_noTag_17", "BvL_2017_QuadJet_noTag_17",0,0,600,600);
   BvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17->Range(-0.2183529,0.00433296,1.171633,0.005958437);
   BvL_2017_QuadJet_noTag_17->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17->SetFillStyle(4000);
   BvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   BvL_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   BvL_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   BvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__40 = new TH1D("_QuadJet_noTag_BvL__40","",10,0,1);
   _QuadJet_noTag_BvL__40->SetBinContent(1,0.005131426);
   _QuadJet_noTag_BvL__40->SetBinContent(2,0.004768057);
   _QuadJet_noTag_BvL__40->SetBinContent(3,0.004585517);
   _QuadJet_noTag_BvL__40->SetBinContent(4,0.005233889);
   _QuadJet_noTag_BvL__40->SetBinContent(5,0.005735515);
   _QuadJet_noTag_BvL__40->SetBinContent(6,0.005017511);
   _QuadJet_noTag_BvL__40->SetBinContent(7,0.004611601);
   _QuadJet_noTag_BvL__40->SetBinContent(8,0.004679223);
   _QuadJet_noTag_BvL__40->SetBinContent(9,0.004805767);
   _QuadJet_noTag_BvL__40->SetBinContent(10,0.004797196);
   _QuadJet_noTag_BvL__40->SetEntries(0.0493657);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4951");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.285");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__40);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_BvL__40->SetLineColor(ci);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__40->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__40->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_BvL__40->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__40->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__40->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__40->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__40->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__40->Draw("HIST");
   BvL_2017_QuadJet_noTag_17->Modified();
   BvL_2017_QuadJet_noTag_17->cd();
   BvL_2017_QuadJet_noTag_17->SetSelected(BvL_2017_QuadJet_noTag_17);
}
