#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ref/CvL_2018_QuadJet_TripleTag_18_ref
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ref = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ref", "CvL_2018_QuadJet_TripleTag_18_ref",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ref->Range(-0.2,4.133963,1.133333,6.561011);
   CvL_2018_QuadJet_TripleTag_18_ref->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ref->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ref->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ref->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL_ref__189 = new TH1D("_QuadJet_TripleTag_CvL_ref__189","",10,0,1);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(1,1098392);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(2,352022);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(3,107627);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(4,63861);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(5,49225);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(6,47610);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(7,53600);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(8,70440);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(9,106923);
   _QuadJet_TripleTag_CvL_ref__189->SetBinContent(10,217064);
   _QuadJet_TripleTag_CvL_ref__189->SetEntries(2166764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2166764");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2754");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3232");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL_ref__189->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL_ref__189);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvL_ref__189->SetLineColor(ci);
   _QuadJet_TripleTag_CvL_ref__189->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL_ref__189->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvL_ref__189->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL_ref__189->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL_ref__189->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL_ref__189->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvL_ref__189->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL_ref__189->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL_ref__189->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL_ref__189->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL_ref__189->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL_ref__189->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_ref->Modified();
   CvL_2018_QuadJet_TripleTag_18_ref->cd();
   CvL_2018_QuadJet_TripleTag_18_ref->SetSelected(CvL_2018_QuadJet_TripleTag_18_ref);
}
