#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_3B_ref/CvB_2016_DoubleJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_3B_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_3B_ref", "CvB_2016_DoubleJet_TripleTag_16_3B_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->Range(-0.2,2.91625,1.133333,4.680954);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_CvB_ref__108 = new TH1D("_DoubleJet_TripleTag_3B_CvB_ref__108","",10,0,1);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(1,16863);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(2,3601);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(3,3684);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(4,3463);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(5,3084);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(6,2520);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(7,2476);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(8,3375);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(9,7302);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetBinContent(10,3744);
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetEntries(50112);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50112  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3923");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3455");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_CvB_ref__108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_CvB_ref__108->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvB_ref__108->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvB_ref__108->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_3B_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_3B_ref);
}
