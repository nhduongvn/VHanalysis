#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal_ref/CvB_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal_ref", "CvB_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->Range(-0.2,1.66751,1.133333,3.743018);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB_ref__51 = new TH1D("_QuadJet_TripleTag_ideal_CvB_ref__51","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(1,1811);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(2,409);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(3,398);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(4,377);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(5,309);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(6,233);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(7,170);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(8,190);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(9,321);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetBinContent(10,150);
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetEntries(4368);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4368   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2891");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    0.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB_ref__51);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB_ref__51->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__51->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__51->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal_ref);
}
