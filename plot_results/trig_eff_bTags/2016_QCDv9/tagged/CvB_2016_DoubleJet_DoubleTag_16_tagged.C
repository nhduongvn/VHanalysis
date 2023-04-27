#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_tagged/CvB_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_tagged", "CvB_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2183529,0.00652893,1.171633,0.05148225);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvB__214 = new TH1D("_DoubleJet_DoubleTag_tagged_CvB__214","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(1,0.02900302);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(2,0.02472527);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(3,0.01977401);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(4,0.04531722);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(5,0.03214286);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(6,0.02403846);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(7,0.01351351);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(8,0.01807229);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(9,0.03135889);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(10,0.03597122);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetEntries(0.2739168);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4995");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2951");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvB__214->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvB__214);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_CvB__214->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_CvB__214->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->cd();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_tagged);
}
