#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17/CvB_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17 = new TCanvas("CvB_2017_QuadJet_TripleTag_17", "CvB_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17->Range(-0.2,2.205652,1.133333,4.163139);
   CvB_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17->SetLogy();
   CvB_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__422 = new TH1D("_QuadJet_TripleTag_tagged_CvB__422","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(1,4896);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(2,724);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(3,504);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(4,754);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(5,950);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(6,1096);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(7,1528);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(8,1972);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(9,2932);
   _QuadJet_TripleTag_tagged_CvB__422->SetBinContent(10,1720);
   _QuadJet_TripleTag_tagged_CvB__422->SetEntries(17076);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17076  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4797");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3538");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__422->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__422);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB__422->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__422->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__422->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB__422->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__422->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__422->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__422->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB__422->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__422->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__422->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__422->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__422->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__422->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17->Modified();
   CvB_2017_QuadJet_TripleTag_17->cd();
   CvB_2017_QuadJet_TripleTag_17->SetSelected(CvB_2017_QuadJet_TripleTag_17);
}
