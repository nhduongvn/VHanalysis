#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_ref/CvB_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_ref = new TCanvas("CvB_2017_QuadJet_noTag_17_ref", "CvB_2017_QuadJet_noTag_17_ref",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_ref->Range(-0.2,4.134908,1.133333,6.349913);
   CvB_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_ref->SetLogy();
   CvB_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB_ref__210 = new TH1D("_QuadJet_noTag_CvB_ref__210","",10,0,1);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(1,321660);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(2,52841);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(3,45821);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(4,45440);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(5,56355);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(6,79497);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(7,136872);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(8,290442);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(9,709355);
   _QuadJet_noTag_CvB_ref__210->SetBinContent(10,351317);
   _QuadJet_noTag_CvB_ref__210->SetEntries(2089600);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2089600");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6473");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.323");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB_ref__210->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB_ref__210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvB_ref__210->SetLineColor(ci);
   _QuadJet_noTag_CvB_ref__210->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB_ref__210->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvB_ref__210->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__210->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB_ref__210->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__210->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvB_ref__210->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__210->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__210->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__210->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB_ref__210->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__210->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_ref->Modified();
   CvB_2017_QuadJet_noTag_17_ref->cd();
   CvB_2017_QuadJet_noTag_17_ref->SetSelected(CvB_2017_QuadJet_noTag_17_ref);
}
