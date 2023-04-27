#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_tagged/BvL_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_tagged", "BvL_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2,1.152768,1.133333,3.427198);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_BvL__191 = new TH1D("_DoubleJet_DoubleTag_tagged_BvL__191","",10,0,1);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(1,836);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(2,124);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(3,71);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(4,78);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(5,69);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(6,65);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(7,48);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(8,61);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(9,81);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetBinContent(10,455);
   _DoubleJet_DoubleTag_tagged_BvL__191->SetEntries(1888);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1888   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3956");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4038");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_BvL__191->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_BvL__191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_BvL__191->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_tagged_BvL__191->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_BvL__191->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__191->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__191->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_tagged->cd();
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_tagged);
}
