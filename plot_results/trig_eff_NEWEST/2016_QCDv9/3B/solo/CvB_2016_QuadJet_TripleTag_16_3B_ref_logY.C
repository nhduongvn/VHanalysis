#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_3B_ref/CvB_2016_QuadJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_3B_ref = new TCanvas("CvB_2016_QuadJet_TripleTag_16_3B_ref", "CvB_2016_QuadJet_TripleTag_16_3B_ref",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->Range(-0.2,3.132086,1.133333,4.884044);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvB_ref__105 = new TH1D("_QuadJet_TripleTag_3B_CvB_ref__105","",10,0,1);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(1,26996);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(2,5906);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(3,5930);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(4,5721);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(5,5067);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(6,4154);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(7,4058);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(8,5039);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(9,11042);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetBinContent(10,5755);
   _QuadJet_TripleTag_3B_CvB_ref__105->SetEntries(79668);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 79668  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3853");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3422");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvB_ref__105->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvB_ref__105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_CvB_ref__105->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_3B_CvB_ref__105->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_CvB_ref__105->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB_ref__105->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB_ref__105->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_3B_ref->Modified();
   CvB_2016_QuadJet_TripleTag_16_3B_ref->cd();
   CvB_2016_QuadJet_TripleTag_16_3B_ref->SetSelected(CvB_2016_QuadJet_TripleTag_16_3B_ref);
}
