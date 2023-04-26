#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ideal_ref/CvL_2018_QuadJet_noTag_18_ideal_ref
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_noTag_18_ideal_ref", "CvL_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ideal_ref->Range(-0.2,3.413894,1.133333,5.162709);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL_ref__156 = new TH1D("_QuadJet_noTag_ideal_CvL_ref__156","",10,0,1);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(1,24155);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(2,51319);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(3,15574);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(4,9684);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(5,7853);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(6,7759);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(7,9031);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(8,11998);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(9,18411);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(10,42816);
   _QuadJet_noTag_ideal_CvL_ref__156->SetEntries(198600);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 198600 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4799");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3565");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL_ref__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL_ref__156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL_ref__156->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_ideal_ref->Modified();
   CvL_2018_QuadJet_noTag_18_ideal_ref->cd();
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetSelected(CvL_2018_QuadJet_noTag_18_ideal_ref);
}
