#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ref/CvL_2018_QuadJet_noTag_18_ref
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ref = new TCanvas("CvL_2018_QuadJet_noTag_18_ref", "CvL_2018_QuadJet_noTag_18_ref",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ref->Range(-0.2,4.350799,1.133333,6.796941);
   CvL_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ref->SetLogy();
   CvL_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL_ref__48 = new TH1D("_QuadJet_noTag_CvL_ref__48","",10,0,1);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(1,1882687);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(2,573959);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(3,176293);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(4,103783);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(5,81729);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(6,78785);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(7,89887);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(8,120724);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(9,187192);
   _QuadJet_noTag_CvL_ref__48->SetBinContent(10,441861);
   _QuadJet_noTag_CvL_ref__48->SetEntries(3736900);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3736900");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2892");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3362");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL_ref__48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL_ref__48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvL_ref__48->SetLineColor(ci);
   _QuadJet_noTag_CvL_ref__48->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL_ref__48->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvL_ref__48->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL_ref__48->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL_ref__48->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL_ref__48->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvL_ref__48->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL_ref__48->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL_ref__48->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL_ref__48->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL_ref__48->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL_ref__48->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_ref->Modified();
   CvL_2018_QuadJet_noTag_18_ref->cd();
   CvL_2018_QuadJet_noTag_18_ref->SetSelected(CvL_2018_QuadJet_noTag_18_ref);
}
