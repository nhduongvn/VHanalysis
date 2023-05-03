#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ideal/CvL_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ideal = new TCanvas("CvL_2018_QuadJet_noTag_18_ideal", "CvL_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ideal->Range(-0.2,-0.4983524,1.133333,1.474871);
   CvL_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ideal->SetLogy();
   CvL_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL__131 = new TH1D("_QuadJet_noTag_ideal_CvL__131","",10,0,1);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(1,3);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(2,5);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(3,4);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(4,1);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(5,1);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(6,1);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(7,2);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(8,5);
   _QuadJet_noTag_ideal_CvL__131->SetBinContent(10,10);
   _QuadJet_noTag_ideal_CvL__131->SetEntries(32);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 32     ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5594");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3511");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL__131->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL__131);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL__131->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL__131->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL__131->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL__131->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__131->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__131->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__131->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL__131->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__131->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__131->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__131->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__131->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__131->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_ideal->Modified();
   CvL_2018_QuadJet_noTag_18_ideal->cd();
   CvL_2018_QuadJet_noTag_18_ideal->SetSelected(CvL_2018_QuadJet_noTag_18_ideal);
}
