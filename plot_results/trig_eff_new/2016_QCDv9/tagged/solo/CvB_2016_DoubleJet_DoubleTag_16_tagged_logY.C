#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_tagged/CvB_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_tagged", "CvB_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2,1.38728,1.133333,3.137407);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvB__215 = new TH1D("_DoubleJet_DoubleTag_tagged_CvB__215","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(1,484);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(2,91);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(3,73);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(4,95);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(5,94);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(6,119);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(7,167);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(8,231);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(9,335);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetBinContent(10,199);
   _DoubleJet_DoubleTag_tagged_CvB__215->SetEntries(1888);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1888   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4961");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3473");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvB__215->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvB__215);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_CvB__215->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_tagged_CvB__215->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_CvB__215->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__215->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__215->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->cd();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_tagged);
}
