#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16/BvL_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16 = new TCanvas("BvL_2016_DoubleJet_TripleTag_16", "BvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16->Range(-0.2183529,0.05480986,1.171633,0.1668259);
   BvL_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16->SetFillStyle(4000);
   BvL_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_TripleTag_16->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_TripleTag_16->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_BvL__151 = new TH1D("_DoubleJet_TripleTag_BvL__151","",10,0,1);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(1,0.07221426);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(2,0.1188574);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(3,0.1280905);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(4,0.1356457);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(5,0.1377904);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(6,0.1449643);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(7,0.1431568);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(8,0.1465454);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(9,0.1466261);
   _DoubleJet_TripleTag_BvL__151->SetBinContent(10,0.1514637);
   _DoubleJet_TripleTag_BvL__151->SetEntries(1.325355);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5388");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2746");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_BvL__151->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_BvL__151);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_BvL__151->SetLineColor(ci);
   _DoubleJet_TripleTag_BvL__151->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_BvL__151->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_BvL__151->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL__151->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_BvL__151->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL__151->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_BvL__151->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL__151->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL__151->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL__151->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_BvL__151->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL__151->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16->Modified();
   BvL_2016_DoubleJet_TripleTag_16->cd();
   BvL_2016_DoubleJet_TripleTag_16->SetSelected(BvL_2016_DoubleJet_TripleTag_16);
}
