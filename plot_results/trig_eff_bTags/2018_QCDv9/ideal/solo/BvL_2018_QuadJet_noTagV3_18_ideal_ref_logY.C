#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTagV3_18_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTagV3_18_ideal_ref/BvL_2018_QuadJet_noTagV3_18_ideal_ref
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTagV3_18_ideal_ref = new TCanvas("BvL_2018_QuadJet_noTagV3_18_ideal_ref", "BvL_2018_QuadJet_noTagV3_18_ideal_ref",0,0,600,600);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->Range(-0.2,1.262771,1.133333,3.820197);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetFillColor(0);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderMode(0);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderSize(2);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetLogy();
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_BvL_ref__120 = new TH1D("_QuadJet_noTagV3_ideal_BvL_ref__120","",10,0,1);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(1,953);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(2,66);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(3,138);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(4,372);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(5,311);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(6,268);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(7,276);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(8,262);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(9,310);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetBinContent(10,1936);
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetEntries(4892);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4892   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.618");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3756");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_BvL_ref__120);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV3_ideal_BvL_ref__120->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_BvL_ref__120->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_BvL_ref__120->Draw("HIST");
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->Modified();
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->cd();
   BvL_2018_QuadJet_noTagV3_18_ideal_ref->SetSelected(BvL_2018_QuadJet_noTagV3_18_ideal_ref);
}
