#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16/BvL_2016_DoubleJet_TripleTag_16
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16 = new TCanvas("BvL_2016_DoubleJet_TripleTag_16", "BvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16->Range(-0.2,3.113218,1.133333,5.553713);
   BvL_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_BvL__80 = new TH1D("_DoubleJet_TripleTag_BvL__80","",10,0,1);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(1,107675);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(2,12910);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(3,7153);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(4,5482);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(5,4637);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(6,4653);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(7,4553);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(8,5377);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(9,7047);
   _DoubleJet_TripleTag_BvL__80->SetBinContent(10,43969);
   _DoubleJet_TripleTag_BvL__80->SetEntries(203456);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 203456 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3386");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4026");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_BvL__80->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_BvL__80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_BvL__80->SetLineColor(ci);
   _DoubleJet_TripleTag_BvL__80->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_BvL__80->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_BvL__80->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL__80->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_BvL__80->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL__80->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_BvL__80->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL__80->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL__80->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL__80->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_BvL__80->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL__80->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16->Modified();
   BvL_2016_DoubleJet_TripleTag_16->cd();
   BvL_2016_DoubleJet_TripleTag_16->SetSelected(BvL_2016_DoubleJet_TripleTag_16);
}
