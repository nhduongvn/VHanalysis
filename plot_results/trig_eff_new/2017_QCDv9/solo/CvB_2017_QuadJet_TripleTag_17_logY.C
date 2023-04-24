#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17/CvB_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17 = new TCanvas("CvB_2017_QuadJet_TripleTag_17", "CvB_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17->Range(-0.2,2.951258,1.133333,4.873512);
   CvB_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17->SetLogy();
   CvB_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__206 = new TH1D("_QuadJet_TripleTag_CvB__206","",10,0,1);
   _QuadJet_TripleTag_CvB__206->SetBinContent(1,25336);
   _QuadJet_TripleTag_CvB__206->SetBinContent(2,3614);
   _QuadJet_TripleTag_CvB__206->SetBinContent(3,3044);
   _QuadJet_TripleTag_CvB__206->SetBinContent(4,2783);
   _QuadJet_TripleTag_CvB__206->SetBinContent(5,3145);
   _QuadJet_TripleTag_CvB__206->SetBinContent(6,3793);
   _QuadJet_TripleTag_CvB__206->SetBinContent(7,5642);
   _QuadJet_TripleTag_CvB__206->SetBinContent(8,9633);
   _QuadJet_TripleTag_CvB__206->SetBinContent(9,19719);
   _QuadJet_TripleTag_CvB__206->SetBinContent(10,9603);
   _QuadJet_TripleTag_CvB__206->SetEntries(86312);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 86312  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4973");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3681");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__206->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__206);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB__206->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__206->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__206->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB__206->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__206->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__206->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__206->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB__206->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__206->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__206->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__206->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__206->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__206->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17->Modified();
   CvB_2017_QuadJet_TripleTag_17->cd();
   CvB_2017_QuadJet_TripleTag_17->SetSelected(CvB_2017_QuadJet_TripleTag_17);
}
