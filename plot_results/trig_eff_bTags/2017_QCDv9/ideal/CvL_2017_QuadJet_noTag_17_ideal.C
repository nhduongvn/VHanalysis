#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ideal/CvL_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ideal = new TCanvas("CvL_2017_QuadJet_noTag_17_ideal", "CvL_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ideal->Range(-0.2183529,-0.005296343,1.171633,0.03883985);
   CvL_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL__46 = new TH1D("_QuadJet_noTag_ideal_CvL__46","",10,0,1);
   _QuadJet_noTag_ideal_CvL__46->SetBinContent(1,0.01492537);
   _QuadJet_noTag_ideal_CvL__46->SetBinContent(6,0.03278689);
   _QuadJet_noTag_ideal_CvL__46->SetBinContent(7,0.01282051);
   _QuadJet_noTag_ideal_CvL__46->SetBinContent(8,0.008849558);
   _QuadJet_noTag_ideal_CvL__46->SetBinContent(10,0.005291005);
   _QuadJet_noTag_ideal_CvL__46->SetEntries(0.07467333);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5193");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2585");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL__46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_CvL__46->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL__46->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL__46->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_ideal_CvL__46->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__46->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__46->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__46->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_CvL__46->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__46->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__46->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__46->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__46->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__46->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ideal->Modified();
   CvL_2017_QuadJet_noTag_17_ideal->cd();
   CvL_2017_QuadJet_noTag_17_ideal->SetSelected(CvL_2017_QuadJet_noTag_17_ideal);
}
