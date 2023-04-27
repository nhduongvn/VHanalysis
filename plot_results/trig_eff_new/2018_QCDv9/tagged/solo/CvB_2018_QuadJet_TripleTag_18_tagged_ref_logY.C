#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_tagged_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_tagged_ref/CvB_2018_QuadJet_TripleTag_18_tagged_ref
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_tagged_ref = new TCanvas("CvB_2018_QuadJet_TripleTag_18_tagged_ref", "CvB_2018_QuadJet_TripleTag_18_tagged_ref",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->Range(-0.2,3.431501,1.133333,5.227353);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB_ref__105 = new TH1D("_QuadJet_TripleTag_tagged_CvB_ref__105","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(1,58914);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(2,9789);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(3,8168);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(4,9495);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(5,11579);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(6,13248);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(7,18858);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(8,25253);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(9,35404);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetBinContent(10,23308);
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetEntries(214016);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 214016 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.484");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3523");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB_ref__105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB_ref__105->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB_ref__105->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__105->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->Modified();
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->cd();
   CvB_2018_QuadJet_TripleTag_18_tagged_ref->SetSelected(CvB_2018_QuadJet_TripleTag_18_tagged_ref);
}
