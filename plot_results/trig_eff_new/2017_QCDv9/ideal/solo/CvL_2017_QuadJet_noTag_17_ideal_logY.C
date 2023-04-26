#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ideal/CvL_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ideal = new TCanvas("CvL_2017_QuadJet_noTag_17_ideal", "CvL_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ideal->Range(-0.2,0.8686071,1.133333,2.596462);
   CvL_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ideal->SetLogy();
   CvL_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL__155 = new TH1D("_QuadJet_noTag_ideal_CvL__155","",10,0,1);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(1,85);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(2,140);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(3,54);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(4,22);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(5,23);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(6,26);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(7,25);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(8,36);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(9,52);
   _QuadJet_noTag_ideal_CvL__155->SetBinContent(10,109);
   _QuadJet_noTag_ideal_CvL__155->SetEntries(572);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 572    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4604");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3554");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL__155->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL__155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL__155->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL__155->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL__155->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL__155->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__155->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__155->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__155->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL__155->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__155->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__155->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__155->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__155->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__155->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ideal->Modified();
   CvL_2017_QuadJet_noTag_17_ideal->cd();
   CvL_2017_QuadJet_noTag_17_ideal->SetSelected(CvL_2017_QuadJet_noTag_17_ideal);
}
