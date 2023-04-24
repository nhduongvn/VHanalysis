#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ref/CvL_2018_QuadJet_noTag_18_ref
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ref = new TCanvas("CvL_2018_QuadJet_noTag_18_ref", "CvL_2018_QuadJet_noTag_18_ref",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ref->Range(-0.2,3.446167,1.133333,5.195742);
   CvL_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ref->SetLogy();
   CvL_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL_ref__102 = new TH1D("_QuadJet_noTag_tagged_CvL_ref__102","",10,0,1);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(1,24903);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(2,55365);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(3,16777);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(4,10442);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(5,8449);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(6,8359);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(7,9701);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(8,12992);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(9,19877);
   _QuadJet_noTag_tagged_CvL_ref__102->SetBinContent(10,46371);
   _QuadJet_noTag_tagged_CvL_ref__102->SetEntries(213236);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 213236 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4827");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3563");
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
   CvL_2018_QuadJet_noTag_18_ref->Modified();
   CvL_2018_QuadJet_noTag_18_ref->cd();
   CvL_2018_QuadJet_noTag_18_ref->SetSelected(CvL_2018_QuadJet_noTag_18_ref);
}
