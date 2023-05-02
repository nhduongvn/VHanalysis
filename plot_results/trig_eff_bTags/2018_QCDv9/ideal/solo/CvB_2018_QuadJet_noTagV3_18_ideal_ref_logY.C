#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTagV3_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTagV3_18_ideal_ref/CvB_2018_QuadJet_noTagV3_18_ideal_ref
//=========  (Tue May  2 10:29:49 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTagV3_18_ideal_ref = new TCanvas("CvB_2018_QuadJet_noTagV3_18_ideal_ref", "CvB_2018_QuadJet_noTagV3_18_ideal_ref",0,0,600,600);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->Range(-0.2,1.791387,1.133333,3.789777);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetFillColor(0);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderMode(0);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderSize(2);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetLogy();
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_CvB_ref__156 = new TH1D("_QuadJet_noTagV3_ideal_CvB_ref__156","",10,0,1);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(1,2053);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(2,388);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(3,403);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(4,350);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(5,311);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(6,251);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(7,230);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(8,196);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(9,486);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetBinContent(10,224);
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetEntries(4892);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4892   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3108");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3214");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_CvB_ref__156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV3_ideal_CvB_ref__156->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_CvB_ref__156->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvB_ref__156->Draw("HIST");
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->Modified();
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->cd();
   CvB_2018_QuadJet_noTagV3_18_ideal_ref->SetSelected(CvB_2018_QuadJet_noTagV3_18_ideal_ref);
}
