#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17/CvB_2017_QuadJet_noTag_17
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17 = new TCanvas("CvB_2017_QuadJet_noTag_17", "CvB_2017_QuadJet_noTag_17",0,0,600,600);
   CvB_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17->Range(-0.2,1.829038,1.133333,4.069438);
   CvB_2017_QuadJet_noTag_17->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17->SetLogy();
   CvB_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB__53 = new TH1D("_QuadJet_noTag_CvB__53","",10,0,1);
   _QuadJet_noTag_CvB__53->SetBinContent(1,1573);
   _QuadJet_noTag_CvB__53->SetBinContent(2,268);
   _QuadJet_noTag_CvB__53->SetBinContent(3,240);
   _QuadJet_noTag_CvB__53->SetBinContent(4,226);
   _QuadJet_noTag_CvB__53->SetBinContent(5,255);
   _QuadJet_noTag_CvB__53->SetBinContent(6,377);
   _QuadJet_noTag_CvB__53->SetBinContent(7,671);
   _QuadJet_noTag_CvB__53->SetBinContent(8,1461);
   _QuadJet_noTag_CvB__53->SetBinContent(9,3697);
   _QuadJet_noTag_CvB__53->SetBinContent(10,1924);
   _QuadJet_noTag_CvB__53->SetEntries(10692);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10692  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.657");
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
   CvB_2017_QuadJet_noTag_17->Modified();
   CvB_2017_QuadJet_noTag_17->cd();
   CvB_2017_QuadJet_noTag_17->SetSelected(CvB_2017_QuadJet_noTag_17);
}
