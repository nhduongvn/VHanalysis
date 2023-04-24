#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16/BvL_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16", "BvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16->Range(-0.2,1.151995,1.133333,3.434161);
   BvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_BvL__371 = new TH1D("_DoubleJet_DoubleTag_tagged_BvL__371","",10,0,1);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(1,848);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(2,126);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(3,72);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(4,80);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(5,72);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(6,67);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(7,48);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(8,61);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(9,83);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetBinContent(10,459);
   _DoubleJet_DoubleTag_tagged_BvL__371->SetEntries(1916);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1916   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3948");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4033");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_BvL__371->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_BvL__371);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_BvL__371->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_tagged_BvL__371->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_BvL__371->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__371->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__371->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16->Modified();
   BvL_2016_DoubleJet_DoubleTag_16->cd();
   BvL_2016_DoubleJet_DoubleTag_16->SetSelected(BvL_2016_DoubleJet_DoubleTag_16);
}
