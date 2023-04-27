#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_ref/CvB_2017_QuadJet_TripleTag_17_ref
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_ref = new TCanvas("CvB_2017_QuadJet_TripleTag_17_ref", "CvB_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_ref->Range(-0.2,4.126634,1.133333,6.341683);
   CvB_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_ref->SetLogy();
   CvB_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB_ref__51 = new TH1D("_QuadJet_TripleTag_CvB_ref__51","",10,0,1);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(1,315401);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(2,51821);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(3,45008);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(4,44583);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(5,55287);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(6,77940);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(7,134236);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(8,284678);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(9,696032);
   _QuadJet_TripleTag_CvB_ref__51->SetBinContent(10,344762);
   _QuadJet_TripleTag_CvB_ref__51->SetEntries(2049748);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2049748");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6474");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.323");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB_ref__51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB_ref__51);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB_ref__51->SetLineColor(ci);
   _QuadJet_TripleTag_CvB_ref__51->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB_ref__51->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB_ref__51->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB_ref__51->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB_ref__51->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB_ref__51->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB_ref__51->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB_ref__51->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB_ref__51->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB_ref__51->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB_ref__51->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB_ref__51->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17_ref->Modified();
   CvB_2017_QuadJet_TripleTag_17_ref->cd();
   CvB_2017_QuadJet_TripleTag_17_ref->SetSelected(CvB_2017_QuadJet_TripleTag_17_ref);
}
