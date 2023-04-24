#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16/BvL_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16 = new TCanvas("BvL_2016_DoubleJet_TripleTag_16", "BvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16->Range(-0.2183529,0.2719035,1.171633,0.3637754);
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
   
   TH1D *_DoubleJet_TripleTag_tagged_BvL__367 = new TH1D("_DoubleJet_TripleTag_tagged_BvL__367","",10,0,1);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(1,0.304146);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(2,0.3301629);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(3,0.3511758);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(4,0.3012458);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(5,0.3078427);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(6,0.3059385);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(7,0.3023397);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(8,0.286178);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(9,0.3008649);
   _DoubleJet_TripleTag_tagged_BvL__367->SetBinContent(10,0.3059358);
   _DoubleJet_TripleTag_tagged_BvL__367->SetEntries(3.09583);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4917");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2873");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_BvL__367->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_BvL__367);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_BvL__367->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_BvL__367->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_tagged_BvL__367->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_tagged_BvL__367->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__367->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__367->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__367->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_BvL__367->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__367->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__367->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__367->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__367->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__367->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16->Modified();
   BvL_2016_DoubleJet_TripleTag_16->cd();
   BvL_2016_DoubleJet_TripleTag_16->SetSelected(BvL_2016_DoubleJet_TripleTag_16);
}
