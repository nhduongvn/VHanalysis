#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_2b2c_ref/CvL_2016_QuadJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_2b2c_ref = new TCanvas("CvL_2016_QuadJet_TripleTag_16_2b2c_ref", "CvL_2016_QuadJet_TripleTag_16_2b2c_ref",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->Range(-0.2,3.251909,1.133333,4.988162);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvL_ref__153 = new TH1D("_QuadJet_TripleTag_2b2c_CvL_ref__153","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(1,14711);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(2,34434);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(3,10436);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(4,6821);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(5,5354);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(6,5328);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(7,6121);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(8,7882);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(9,11884);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetBinContent(10,23917);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetEntries(126888);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 126888 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4641");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.348");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvL_ref__153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_CvL_ref__153->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvL_ref__153->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->Modified();
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->cd();
   CvL_2016_QuadJet_TripleTag_16_2b2c_ref->SetSelected(CvL_2016_QuadJet_TripleTag_16_2b2c_ref);
}
