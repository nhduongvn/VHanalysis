#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal/CvB_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal", "CvB_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->Range(-0.2183529,0.2371186,1.171633,0.3525953);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__157 = new TH1D("_QuadJet_TripleTag_ideal_CvB__157","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(1,0.3021628);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(2,0.2868695);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(3,0.285336);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(4,0.3133484);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(5,0.3367585);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(6,0.3277133);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(7,0.3100007);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(8,0.2981867);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(9,0.2919191);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(10,0.2550607);
   _QuadJet_TripleTag_ideal_CvB__157->SetEntries(3.007356);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4943");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   0.28");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__157->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvB__157->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__157->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__157->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvB__157->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__157->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__157->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__157->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvB__157->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__157->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__157->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__157->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__157->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__157->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvB_2018_QuadJet_TripleTag_18_ideal->cd();
   CvB_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvB_2018_QuadJet_TripleTag_18_ideal);
}
