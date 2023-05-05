#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_3B_ref/CvL_2016_QuadJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_3B_ref = new TCanvas("CvL_2016_QuadJet_TripleTag_16_3B_ref", "CvL_2016_QuadJet_TripleTag_16_3B_ref",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->Range(-0.2,3.120576,1.133333,4.729697);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvL_ref__99 = new TH1D("_QuadJet_TripleTag_3B_CvL_ref__99","",10,0,1);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(1,17086);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(2,6338);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(3,3864);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(4,3996);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(5,3824);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(6,4089);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(7,4897);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(8,6269);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(9,9751);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetBinContent(10,19554);
   _QuadJet_TripleTag_3B_CvL_ref__99->SetEntries(79668);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 79668  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5429");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3594");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvL_ref__99->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvL_ref__99);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_CvL_ref__99->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_3B_CvL_ref__99->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_CvL_ref__99->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL_ref__99->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__99->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_3B_ref->Modified();
   CvL_2016_QuadJet_TripleTag_16_3B_ref->cd();
   CvL_2016_QuadJet_TripleTag_16_3B_ref->SetSelected(CvL_2016_QuadJet_TripleTag_16_3B_ref);
}
