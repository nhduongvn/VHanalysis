#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17/CvB_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17 = new TCanvas("CvB_2017_QuadJet_TripleTag_17", "CvB_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.016039,1.171633,0.08873632);
   CvB_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   CvB_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   CvB_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__205 = new TH1D("_QuadJet_TripleTag_CvB__205","",10,0,1);
   _QuadJet_TripleTag_CvB__205->SetBinContent(1,0.0787664);
   _QuadJet_TripleTag_CvB__205->SetBinContent(2,0.06839386);
   _QuadJet_TripleTag_CvB__205->SetBinContent(3,0.06643242);
   _QuadJet_TripleTag_CvB__205->SetBinContent(4,0.0612456);
   _QuadJet_TripleTag_CvB__205->SetBinContent(5,0.05580694);
   _QuadJet_TripleTag_CvB__205->SetBinContent(6,0.04771249);
   _QuadJet_TripleTag_CvB__205->SetBinContent(7,0.04122099);
   _QuadJet_TripleTag_CvB__205->SetBinContent(8,0.03316669);
   _QuadJet_TripleTag_CvB__205->SetBinContent(9,0.02779849);
   _QuadJet_TripleTag_CvB__205->SetBinContent(10,0.02733429);
   _QuadJet_TripleTag_CvB__205->SetEntries(0.5078782);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4034");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2711");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__205->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__205);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvB__205->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__205->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__205->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvB__205->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__205->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__205->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__205->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvB__205->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__205->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__205->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__205->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__205->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__205->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17->Modified();
   CvB_2017_QuadJet_TripleTag_17->cd();
   CvB_2017_QuadJet_TripleTag_17->SetSelected(CvB_2017_QuadJet_TripleTag_17);
}
