#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17/BvL_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17 = new TCanvas("BvL_2017_QuadJet_noTag_17", "BvL_2017_QuadJet_noTag_17",0,0,600,600);
   BvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17->Range(-0.2183529,0.00204021,1.171633,0.007445161);
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
   
   TH1D *_QuadJet_noTag_tagged_BvL__376 = new TH1D("_QuadJet_noTag_tagged_BvL__376","",10,0,1);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(1,0.005239134);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(2,0.00450749);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(3,0.004583652);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(4,0.005631899);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(5,0.006703911);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(6,0.003131851);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(7,0.005513439);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(8,0.00288);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(9,0.005137786);
   _QuadJet_noTag_tagged_BvL__376->SetBinContent(10,0.004480929);
   _QuadJet_noTag_tagged_BvL__376->SetEntries(0.04781009);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4845");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2849");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL__376->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL__376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_BvL__376->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL__376->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL__376->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_BvL__376->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__376->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__376->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__376->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_BvL__376->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__376->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__376->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__376->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__376->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__376->Draw("HIST");
   BvL_2017_QuadJet_noTag_17->Modified();
   BvL_2017_QuadJet_noTag_17->cd();
   BvL_2017_QuadJet_noTag_17->SetSelected(BvL_2017_QuadJet_noTag_17);
}
