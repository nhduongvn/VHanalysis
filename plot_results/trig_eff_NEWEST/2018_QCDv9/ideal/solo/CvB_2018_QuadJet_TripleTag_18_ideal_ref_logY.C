#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal_ref/CvB_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal_ref", "CvB_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->Range(-0.2,1.975716,1.133333,3.993917);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB_ref__27 = new TH1D("_QuadJet_TripleTag_ideal_CvB_ref__27","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(1,3270);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(2,661);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(3,653);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(4,582);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(5,516);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(6,397);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(7,353);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(8,301);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(9,700);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetBinContent(10,339);
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetEntries(7772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7772   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.302");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.315");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB_ref__27);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB_ref__27->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB_ref__27->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB_ref__27->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   CvB_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(CvB_2018_QuadJet_TripleTag_18_ideal_ref);
}
