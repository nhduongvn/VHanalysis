#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2,1.777882,1.133333,4.27256);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLogy();
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__47 = new TH1D("_QuadJet_noTag_CvL__47","",10,0,1);
   _QuadJet_noTag_CvL__47->SetBinContent(1,5566);
   _QuadJet_noTag_CvL__47->SetBinContent(2,1608);
   _QuadJet_noTag_CvL__47->SetBinContent(3,473);
   _QuadJet_noTag_CvL__47->SetBinContent(4,308);
   _QuadJet_noTag_CvL__47->SetBinContent(5,220);
   _QuadJet_noTag_CvL__47->SetBinContent(6,213);
   _QuadJet_noTag_CvL__47->SetBinContent(7,275);
   _QuadJet_noTag_CvL__47->SetBinContent(8,349);
   _QuadJet_noTag_CvL__47->SetBinContent(9,531);
   _QuadJet_noTag_CvL__47->SetBinContent(10,1253);
   _QuadJet_noTag_CvL__47->SetEntries(10796);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10796  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2857");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3359");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL__47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL__47);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvL__47->SetLineColor(ci);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL__47->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__47->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvL__47->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__47->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__47->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__47->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__47->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__47->Draw("HIST");
   CvL_2017_QuadJet_noTag_17->Modified();
   CvL_2017_QuadJet_noTag_17->cd();
   CvL_2017_QuadJet_noTag_17->SetSelected(CvL_2017_QuadJet_noTag_17);
}
