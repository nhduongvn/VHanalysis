#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal_ref/CvB_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal_ref", "CvB_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->Range(-0.2,1.631925,1.133333,3.701167);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB_ref__315 = new TH1D("_QuadJet_TripleTag_ideal_CvB_ref__315","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(1,1647);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(2,362);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(3,351);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(4,328);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(5,280);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(6,208);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(7,146);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(8,165);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(9,287);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetBinContent(10,138);
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetEntries(3912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3912   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2867");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3004");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB_ref__315);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB_ref__315->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__315->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__315->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal_ref);
}
