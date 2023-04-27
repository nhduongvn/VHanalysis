#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_tagged/CvL_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_tagged", "CvL_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_tagged->Range(-0.2183529,0.4490679,1.171633,0.7768707);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFillStyle(4000);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvL__199 = new TH1D("_DoubleJet_TripleTag_tagged_CvL__199","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(1,0.7319149);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(2,0.6954733);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(3,0.6632653);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(4,0.5964912);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(5,0.5);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(6,0.5465587);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(7,0.5779468);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(8,0.6551724);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(9,0.6457961);
   _DoubleJet_TripleTag_tagged_CvL__199->SetBinContent(10,0.6651982);
   _DoubleJet_TripleTag_tagged_CvL__199->SetEntries(6.277817);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4921");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2982");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvL__199->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvL__199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_CvL__199->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvL__199->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_tagged_CvL__199->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_tagged_CvL__199->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__199->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL__199->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__199->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_CvL__199->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__199->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__199->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__199->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL__199->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__199->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_tagged->Modified();
   CvL_2016_DoubleJet_TripleTag_16_tagged->cd();
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetSelected(CvL_2016_DoubleJet_TripleTag_16_tagged);
}
