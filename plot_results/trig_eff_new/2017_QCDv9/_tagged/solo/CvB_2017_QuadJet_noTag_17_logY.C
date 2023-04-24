#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17/CvB_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17 = new TCanvas("CvB_2017_QuadJet_noTag_17", "CvB_2017_QuadJet_noTag_17",0,0,600,600);
   CvB_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17->Range(-0.2,0.6846786,1.133333,2.588506);
   CvB_2017_QuadJet_noTag_17->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17->SetLogy();
   CvB_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__425 = new TH1D("_QuadJet_noTag_tagged_CvB__425","",10,0,1);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(1,132);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(2,20);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(3,15);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(4,27);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(5,28);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(6,28);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(7,46);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(8,64);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(9,81);
   _QuadJet_noTag_tagged_CvB__425->SetBinContent(10,75);
   _QuadJet_noTag_tagged_CvB__425->SetEntries(516);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 516    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.511");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.353");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__425->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvB__425->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__425->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__425->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvB__425->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__425->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__425->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__425->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvB__425->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__425->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__425->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__425->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__425->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__425->Draw("HIST");
   CvB_2017_QuadJet_noTag_17->Modified();
   CvB_2017_QuadJet_noTag_17->cd();
   CvB_2017_QuadJet_noTag_17->SetSelected(CvB_2017_QuadJet_noTag_17);
}
