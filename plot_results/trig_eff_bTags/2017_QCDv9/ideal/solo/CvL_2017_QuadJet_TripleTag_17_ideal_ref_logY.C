#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17_ideal_ref/CvL_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("CvL_2017_QuadJet_TripleTag_17_ideal_ref", "CvL_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->Range(-0.2,1.253404,1.133333,3.033);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL_ref__45 = new TH1D("_QuadJet_TripleTag_ideal_CvL_ref__45","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(1,134);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(2,70);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(3,58);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(4,66);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(5,54);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(6,61);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(7,78);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(8,113);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(9,156);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetBinContent(10,378);
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetEntries(1168);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1168   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6381");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   0.33");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL_ref__45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL_ref__45->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL_ref__45->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL_ref__45->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   CvL_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(CvL_2017_QuadJet_TripleTag_17_ideal_ref);
}
