#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_tagged/BvL_2016_DoubleJet_TripleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_tagged", "BvL_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_tagged->Range(-0.2183529,0.2723341,1.171633,0.3647081);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFillStyle(4000);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_BvL__187 = new TH1D("_DoubleJet_TripleTag_tagged_BvL__187","",10,0,1);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(1,0.3042187);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(2,0.330054);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(3,0.3520397);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(4,0.3011018);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(5,0.3091537);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(6,0.3069755);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(7,0.3026236);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(8,0.2866866);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(9,0.300995);
   _DoubleJet_TripleTag_tagged_BvL__187->SetBinContent(10,0.3057178);
   _DoubleJet_TripleTag_tagged_BvL__187->SetEntries(3.099566);
   
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
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2872");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_BvL__187->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_BvL__187);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_BvL__187->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_BvL__187->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_tagged_BvL__187->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_tagged_BvL__187->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__187->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__187->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__187->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_BvL__187->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__187->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__187->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_BvL__187->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_BvL__187->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_BvL__187->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_tagged->Modified();
   BvL_2016_DoubleJet_TripleTag_16_tagged->cd();
   BvL_2016_DoubleJet_TripleTag_16_tagged->SetSelected(BvL_2016_DoubleJet_TripleTag_16_tagged);
}
