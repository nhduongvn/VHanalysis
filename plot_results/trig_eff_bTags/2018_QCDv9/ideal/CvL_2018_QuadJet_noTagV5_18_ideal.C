#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTagV5_18_ideal()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTagV5_18_ideal/CvL_2018_QuadJet_noTagV5_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTagV5_18_ideal = new TCanvas("CvL_2018_QuadJet_noTagV5_18_ideal", "CvL_2018_QuadJet_noTagV5_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_noTagV5_18_ideal->Range(-0.2183529,-0.0006540019,1.171633,0.004796014);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetFillStyle(4000);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetBottomMargin(0.12);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTagV5_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV5_ideal_CvL__142 = new TH1D("_QuadJet_noTagV5_ideal_CvL__142","",10,0,1);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(1,0.002673797);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(2,0.002824859);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(3,0.004048583);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(4,0.003676471);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(5,0.003558719);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(9,0.001297017);
   _QuadJet_noTagV5_ideal_CvL__142->SetBinContent(10,0.0005797101);
   _QuadJet_noTagV5_ideal_CvL__142->SetEntries(0.01865916);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV5_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3275");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.226");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV5_ideal_CvL__142->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV5_ideal_CvL__142);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV5_ideal_CvL__142->SetLineColor(ci);
   _QuadJet_noTagV5_ideal_CvL__142->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTagV5_ideal_CvL__142->GetXaxis()->SetRange(1,100);
   _QuadJet_noTagV5_ideal_CvL__142->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_CvL__142->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_CvL__142->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_CvL__142->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV5_ideal_CvL__142->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_CvL__142->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_CvL__142->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_CvL__142->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_CvL__142->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_CvL__142->Draw("HIST");
   CvL_2018_QuadJet_noTagV5_18_ideal->Modified();
   CvL_2018_QuadJet_noTagV5_18_ideal->cd();
   CvL_2018_QuadJet_noTagV5_18_ideal->SetSelected(CvL_2018_QuadJet_noTagV5_18_ideal);
}
