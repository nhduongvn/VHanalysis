#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ideal/CvB_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ideal = new TCanvas("CvB_2018_QuadJet_noTag_18_ideal", "CvB_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ideal->Range(-0.2,-0.5035265,1.133333,1.521438);
   CvB_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ideal->SetLogy();
   CvB_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB__149 = new TH1D("_QuadJet_noTag_ideal_CvB__149","",10,0,1);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(1,11);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(2,4);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(3,1);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(4,2);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(5,4);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(6,2);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(7,2);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(8,1);
   _QuadJet_noTag_ideal_CvB__149->SetBinContent(9,5);
   _QuadJet_noTag_ideal_CvB__149->SetEntries(32);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 32     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.343");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3018");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvB__149->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvB__149);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvB__149->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvB__149->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_ideal_CvB__149->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvB__149->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__149->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__149->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__149->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvB__149->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__149->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__149->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__149->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__149->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__149->Draw("HIST");
   CvB_2018_QuadJet_noTag_18_ideal->Modified();
   CvB_2018_QuadJet_noTag_18_ideal->cd();
   CvB_2018_QuadJet_noTag_18_ideal->SetSelected(CvB_2018_QuadJet_noTag_18_ideal);
}
