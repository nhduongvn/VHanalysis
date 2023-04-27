#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18/CvB_2018_QuadJet_noTag_18
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18 = new TCanvas("CvB_2018_QuadJet_noTag_18", "CvB_2018_QuadJet_noTag_18",0,0,600,600);
   CvB_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18->Range(-0.2,1.959157,1.133333,4.200284);
   CvB_2018_QuadJet_noTag_18->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18->SetLogy();
   CvB_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB__53 = new TH1D("_QuadJet_noTag_CvB__53","",10,0,1);
   _QuadJet_noTag_CvB__53->SetBinContent(1,2165);
   _QuadJet_noTag_CvB__53->SetBinContent(2,349);
   _QuadJet_noTag_CvB__53->SetBinContent(3,322);
   _QuadJet_noTag_CvB__53->SetBinContent(4,305);
   _QuadJet_noTag_CvB__53->SetBinContent(5,355);
   _QuadJet_noTag_CvB__53->SetBinContent(6,545);
   _QuadJet_noTag_CvB__53->SetBinContent(7,971);
   _QuadJet_noTag_CvB__53->SetBinContent(8,2004);
   _QuadJet_noTag_CvB__53->SetBinContent(9,4996);
   _QuadJet_noTag_CvB__53->SetBinContent(10,2396);
   _QuadJet_noTag_CvB__53->SetEntries(14408);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 14408  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6519");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3205");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB__53);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvB__53->SetLineColor(ci);
   _QuadJet_noTag_CvB__53->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB__53->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvB__53->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__53->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__53->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__53->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvB__53->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__53->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__53->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__53->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__53->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__53->Draw("HIST");
   CvB_2018_QuadJet_noTag_18->Modified();
   CvB_2018_QuadJet_noTag_18->cd();
   CvB_2018_QuadJet_noTag_18->SetSelected(CvB_2018_QuadJet_noTag_18);
}
