#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ideal_ref/CvL_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ideal_ref", "CvL_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->Range(-0.2,3.324866,1.133333,5.074452);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL_ref__153 = new TH1D("_QuadJet_TripleTag_ideal_CvL_ref__153","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(1,23469);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(2,41874);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(3,12774);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(4,7837);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(5,6433);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(6,6322);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(7,7326);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(8,9756);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(9,14894);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetBinContent(10,34523);
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetEntries(165208);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 165208 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4686");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3575");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL_ref__153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL_ref__153->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__153->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__153->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   CvL_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(CvL_2018_QuadJet_TripleTag_18_ideal_ref);
}
