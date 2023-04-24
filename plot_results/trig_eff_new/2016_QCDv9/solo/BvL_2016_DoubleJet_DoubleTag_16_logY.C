#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16/BvL_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16", "BvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16->Range(-0.2,1.93678,1.133333,4.500223);
   BvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_BvL__155 = new TH1D("_DoubleJet_DoubleTag_BvL__155","",10,0,1);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(1,9254);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(2,890);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(3,493);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(4,366);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(5,367);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(6,312);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(7,336);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(8,411);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(9,558);
   _DoubleJet_DoubleTag_BvL__155->SetBinContent(10,3241);
   _DoubleJet_DoubleTag_BvL__155->SetEntries(16228);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16228  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3138");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3987");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_BvL__155->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_BvL__155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_BvL__155->SetLineColor(ci);
   _DoubleJet_DoubleTag_BvL__155->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_BvL__155->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_BvL__155->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_BvL__155->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_BvL__155->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_BvL__155->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_BvL__155->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_BvL__155->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_BvL__155->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_BvL__155->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_BvL__155->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_BvL__155->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16->Modified();
   BvL_2016_DoubleJet_DoubleTag_16->cd();
   BvL_2016_DoubleJet_DoubleTag_16->SetSelected(BvL_2016_DoubleJet_DoubleTag_16);
}
