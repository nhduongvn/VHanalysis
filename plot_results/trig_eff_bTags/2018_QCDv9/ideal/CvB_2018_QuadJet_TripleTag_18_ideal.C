#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal/CvB_2018_QuadJet_TripleTag_18_ideal
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal", "CvB_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->Range(-0.2183529,0.6118702,1.171633,0.8248258);
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
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(1,0.7481337);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(2,0.6721854);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(3,0.6569106);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(4,0.6574586);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(5,0.644958);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(6,0.687664);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(7,0.7469512);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(8,0.7956204);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(9,0.7853881);
   _QuadJet_TripleTag_ideal_CvB__157->SetBinContent(10,0.7667732);
   _QuadJet_TripleTag_ideal_CvB__157->SetEntries(7.162043);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5137");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2918");
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
