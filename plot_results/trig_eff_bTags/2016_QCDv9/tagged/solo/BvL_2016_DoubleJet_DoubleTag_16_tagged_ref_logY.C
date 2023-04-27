#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_tagged_ref/BvL_2016_DoubleJet_DoubleTag_16_tagged_ref
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_tagged_ref = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_tagged_ref", "BvL_2016_DoubleJet_DoubleTag_16_tagged_ref",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->Range(-0.2,1.054012,1.133333,3.736088);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_BvL_ref__192 = new TH1D("_DoubleJet_DoubleTag_tagged_BvL_ref__192","",10,0,1);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(1,633);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(2,42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(3,106);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(4,364);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(5,275);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(6,249);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(7,210);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(8,239);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(9,264);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetBinContent(10,1550);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetEntries(3932);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3932   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6344");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3585");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_BvL_ref__192);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__192->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->cd();
   BvL_2016_DoubleJet_DoubleTag_16_tagged_ref->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_tagged_ref);
}
