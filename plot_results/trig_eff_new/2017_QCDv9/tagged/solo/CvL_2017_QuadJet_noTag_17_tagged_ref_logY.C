#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_tagged_ref/CvL_2017_QuadJet_noTag_17_tagged_ref
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_tagged_ref = new TCanvas("CvL_2017_QuadJet_noTag_17_tagged_ref", "CvL_2017_QuadJet_noTag_17_tagged_ref",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_tagged_ref->Range(-0.2,3.173769,1.133333,4.920101);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetLogy();
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL_ref__102 = new TH1D("_QuadJet_noTag_tagged_CvL_ref__102","",10,0,1);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(1,13348);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(2,29371);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(3,8843);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(4,5534);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(5,4461);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(6,4630);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(7,5193);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(8,6896);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(9,10530);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(10,24914);
   _QuadJet_noTag_tagged_CvL_ref__102->SetEntries(113720);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 113720 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4837");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3566");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL_ref__102->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL_ref__102);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvL_ref__102->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL_ref__102->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvL_ref__102->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL_ref__102->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL_ref__102->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_tagged_ref->Modified();
   CvL_2017_QuadJet_noTag_17_tagged_ref->cd();
   CvL_2017_QuadJet_noTag_17_tagged_ref->SetSelected(CvL_2017_QuadJet_noTag_17_tagged_ref);
}
