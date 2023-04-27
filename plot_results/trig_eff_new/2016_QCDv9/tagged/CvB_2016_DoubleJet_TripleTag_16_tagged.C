#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_tagged/CvB_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_tagged", "CvB_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_tagged->Range(-0.2183529,0.2719791,1.171633,0.3328916);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFillStyle(4000);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvB__211 = new TH1D("_DoubleJet_TripleTag_tagged_CvB__211","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(1,0.3033996);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(2,0.2935421);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(3,0.2814433);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(4,0.3023256);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(5,0.3104314);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(6,0.3245379);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(7,0.3094214);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(8,0.3225203);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(9,0.3201229);
   _DoubleJet_TripleTag_tagged_CvB__211->SetBinContent(10,0.2875481);
   _DoubleJet_TripleTag_tagged_CvB__211->SetEntries(3.055293);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5047");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2848");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvB__211->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvB__211);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_CvB__211->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvB__211->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_tagged_CvB__211->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_tagged_CvB__211->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__211->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__211->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__211->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_CvB__211->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__211->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__211->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__211->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__211->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__211->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_tagged->Modified();
   CvB_2016_DoubleJet_TripleTag_16_tagged->cd();
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetSelected(CvB_2016_DoubleJet_TripleTag_16_tagged);
}
