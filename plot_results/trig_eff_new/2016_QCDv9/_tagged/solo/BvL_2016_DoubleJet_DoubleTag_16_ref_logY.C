#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_ref/BvL_2016_DoubleJet_DoubleTag_16_ref
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_ref = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_ref", "BvL_2016_DoubleJet_DoubleTag_16_ref",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_ref->Range(-0.2,2.997247,1.133333,5.187752);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_BvL_ref__372 = new TH1D("_DoubleJet_DoubleTag_tagged_BvL_ref__372","",10,0,1);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(1,49108);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(2,8411);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(3,4465);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(4,5298);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(5,4093);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(6,3772);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(7,3291);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(8,3697);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(9,4856);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetBinContent(10,28421);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetEntries(115412);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115412 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4041");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4026");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_BvL_ref__372);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL_ref__372->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_ref->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_ref->cd();
   BvL_2016_DoubleJet_DoubleTag_16_ref->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_ref);
}
