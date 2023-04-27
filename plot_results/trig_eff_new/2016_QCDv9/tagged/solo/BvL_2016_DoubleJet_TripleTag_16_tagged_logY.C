#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_tagged/BvL_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_tagged", "BvL_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_tagged->Range(-0.2,2.476265,1.133333,4.668434);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_BvL__188 = new TH1D("_DoubleJet_TripleTag_tagged_BvL__188","",10,0,1);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(1,14848);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(2,2751);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(3,1562);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(4,1585);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(5,1253);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(6,1153);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(7,992);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(8,1053);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(9,1452);
   _DoubleJet_TripleTag_tagged_BvL__188->SetBinContent(10,8635);
   _DoubleJet_TripleTag_tagged_BvL__188->SetEntries(35284);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 35284  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4012");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4014");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_BvL__188->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_BvL__188);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_BvL__188->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_BvL__188->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_tagged_BvL__188->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_BvL__188->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__188->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__188->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__188->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_BvL__188->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__188->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__188->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__188->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__188->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__188->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_tagged->Modified();
   BvL_2016_DoubleJet_TripleTag_16_tagged->cd();
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetSelected(BvL_2016_DoubleJet_TripleTag_16_tagged);
}
