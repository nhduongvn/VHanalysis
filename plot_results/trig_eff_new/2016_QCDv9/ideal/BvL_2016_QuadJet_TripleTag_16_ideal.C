#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ideal/BvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:18:39 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ideal", "BvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2183529,0.3611378,1.171633,0.4619902);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__289 = new TH1D("_QuadJet_TripleTag_ideal_BvL__289","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(1,0.3915116);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(2,0.4299122);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(3,0.448159);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(4,0.3874595);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(5,0.4032218);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(6,0.4037383);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(7,0.3908924);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(8,0.3768076);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(9,0.393102);
   _QuadJet_TripleTag_ideal_BvL__289->SetBinContent(10,0.4019229);
   _QuadJet_TripleTag_ideal_BvL__289->SetEntries(4.026727);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4937");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2873");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__289->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__289);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_BvL__289->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__289->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__289->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_BvL__289->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__289->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__289->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__289->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_BvL__289->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__289->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__289->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__289->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__289->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__289->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   BvL_2016_QuadJet_TripleTag_16_ideal->cd();
   BvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(BvL_2016_QuadJet_TripleTag_16_ideal);
}
