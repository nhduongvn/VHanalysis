#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18/CvB_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18 = new TCanvas("CvB_2018_QuadJet_noTag_18", "CvB_2018_QuadJet_noTag_18",0,0,600,600);
   CvB_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18->Range(-0.2,1.088587,1.133333,2.874435);
   CvB_2018_QuadJet_noTag_18->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18->SetLogy();
   CvB_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__107 = new TH1D("_QuadJet_noTag_tagged_CvB__107","",10,0,1);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(1,262);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(2,42);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(3,37);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(4,43);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(5,57);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(6,59);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(7,95);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(8,133);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(9,169);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(10,115);
   _QuadJet_noTag_tagged_CvB__107->SetEntries(1012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1012   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5027");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3493");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__107->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvB__107->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvB__107->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__107->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__107->Draw("HIST");
   CvB_2018_QuadJet_noTag_18->Modified();
   CvB_2018_QuadJet_noTag_18->cd();
   CvB_2018_QuadJet_noTag_18->SetSelected(CvB_2018_QuadJet_noTag_18);
}
