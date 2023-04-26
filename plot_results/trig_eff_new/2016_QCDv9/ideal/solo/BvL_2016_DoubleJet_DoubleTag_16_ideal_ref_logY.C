#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_ideal_ref/BvL_2016_DoubleJet_DoubleTag_16_ideal_ref
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_ideal_ref = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_ideal_ref", "BvL_2016_DoubleJet_DoubleTag_16_ideal_ref",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->Range(-0.2,2.801936,1.133333,5.021274);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_BvL_ref__300 = new TH1D("_DoubleJet_DoubleTag_ideal_BvL_ref__300","",10,0,1);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(1,33250);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(2,5409);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(3,2837);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(4,3382);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(5,2650);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(6,2371);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(7,2113);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(8,2354);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(9,3103);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetBinContent(10,18095);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetEntries(75564);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 75564  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3938");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4019");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_BvL_ref__300);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL_ref__300->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->cd();
   BvL_2016_DoubleJet_DoubleTag_16_ideal_ref->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_ideal_ref);
}
