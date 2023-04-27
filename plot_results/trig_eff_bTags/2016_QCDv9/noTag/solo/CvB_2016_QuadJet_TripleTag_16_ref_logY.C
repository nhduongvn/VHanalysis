#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ref/CvB_2016_QuadJet_TripleTag_16_ref
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ref = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ref", "CvB_2016_QuadJet_TripleTag_16_ref",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ref->Range(-0.2,4.189214,1.133333,6.360349);
   CvB_2016_QuadJet_TripleTag_16_ref->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ref->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ref->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ref->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB_ref__99 = new TH1D("_QuadJet_TripleTag_CvB_ref__99","",10,0,1);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(1,310110);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(2,57690);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(3,51012);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(4,50975);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(5,63509);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(6,89980);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(7,155144);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(8,324940);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(9,733984);
   _QuadJet_TripleTag_CvB_ref__99->SetBinContent(10,348928);
   _QuadJet_TripleTag_CvB_ref__99->SetEntries(2186272);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2186272");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6505");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3149");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB_ref__99->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB_ref__99);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB_ref__99->SetLineColor(ci);
   _QuadJet_TripleTag_CvB_ref__99->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB_ref__99->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB_ref__99->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB_ref__99->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB_ref__99->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB_ref__99->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB_ref__99->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB_ref__99->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB_ref__99->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB_ref__99->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB_ref__99->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB_ref__99->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_ref->Modified();
   CvB_2016_QuadJet_TripleTag_16_ref->cd();
   CvB_2016_QuadJet_TripleTag_16_ref->SetSelected(CvB_2016_QuadJet_TripleTag_16_ref);
}
