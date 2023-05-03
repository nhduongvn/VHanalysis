#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_ideal/CvB_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_ideal = new TCanvas("CvB_2017_QuadJet_TripleTag_17_ideal", "CvB_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_ideal->Range(-0.2183529,0.4079604,1.171633,0.7077855);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__49 = new TH1D("_QuadJet_TripleTag_ideal_CvB__49","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(1,0.5946502);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(2,0.5392157);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(3,0.4807692);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(4,0.4814815);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(5,0.6162791);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(6,0.5972222);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(7,0.6666667);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(8,0.4545455);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(9,0.5544554);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(10,0.65);
   _QuadJet_TripleTag_ideal_CvB__49->SetEntries(5.635285);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.509");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2897");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvB__49->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvB__49->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__49->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17_ideal->Modified();
   CvB_2017_QuadJet_TripleTag_17_ideal->cd();
   CvB_2017_QuadJet_TripleTag_17_ideal->SetSelected(CvB_2017_QuadJet_TripleTag_17_ideal);
}
