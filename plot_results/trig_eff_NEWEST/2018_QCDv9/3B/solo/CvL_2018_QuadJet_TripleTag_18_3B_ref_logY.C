#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_3B_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_3B_ref/CvL_2018_QuadJet_TripleTag_18_3B_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_3B_ref = new TCanvas("CvL_2018_QuadJet_TripleTag_18_3B_ref", "CvL_2018_QuadJet_TripleTag_18_3B_ref",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->Range(-0.2,3.216538,1.133333,4.945473);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvL_ref__51 = new TH1D("_QuadJet_TripleTag_3B_CvL_ref__51","",10,0,1);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(1,25989);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(2,9310);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(3,5154);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(4,4952);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(5,4903);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(6,5334);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(7,6334);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(8,8743);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(9,13398);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetBinContent(10,31263);
   _QuadJet_TripleTag_3B_CvL_ref__51->SetEntries(115380);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115380 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5479");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3679");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvL_ref__51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvL_ref__51);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_CvL_ref__51->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_3B_CvL_ref__51->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_CvL_ref__51->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL_ref__51->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL_ref__51->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_3B_ref->Modified();
   CvL_2018_QuadJet_TripleTag_18_3B_ref->cd();
   CvL_2018_QuadJet_TripleTag_18_3B_ref->SetSelected(CvL_2018_QuadJet_TripleTag_18_3B_ref);
}
