#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16/BvL_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16 = new TCanvas("BvL_2016_DoubleJet_TripleTag_16", "BvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16->Range(-0.2,2.477419,1.133333,4.671157);
   BvL_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_BvL__368 = new TH1D("_DoubleJet_TripleTag_tagged_BvL__368","",10,0,1);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(1,14936);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(2,2777);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(3,1568);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(4,1596);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(5,1260);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(6,1154);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(7,995);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(8,1058);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(9,1461);
   _DoubleJet_TripleTag_tagged_BvL__368->SetBinContent(10,8695);
   _DoubleJet_TripleTag_tagged_BvL__368->SetEntries(35500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 35500  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4012");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4015");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_BvL__368->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_BvL__368);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_BvL__368->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_BvL__368->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_tagged_BvL__368->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_BvL__368->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__368->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__368->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__368->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_BvL__368->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__368->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__368->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__368->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__368->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__368->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16->Modified();
   BvL_2016_DoubleJet_TripleTag_16->cd();
   BvL_2016_DoubleJet_TripleTag_16->SetSelected(BvL_2016_DoubleJet_TripleTag_16);
}
