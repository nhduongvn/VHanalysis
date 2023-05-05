#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_3B_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_3B/CvB_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_3B = new TCanvas("CvB_2018_QuadJet_TripleTag_18_3B", "CvB_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_3B->Range(-0.2,2.928355,1.133333,4.770854);
   CvB_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_3B->SetLogy();
   CvB_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvB__53 = new TH1D("_QuadJet_TripleTag_3B_CvB__53","",10,0,1);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(1,20373);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(2,3549);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(3,3214);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(4,3105);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(5,2990);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(6,2592);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(7,2845);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(8,3625);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(9,8511);
   _QuadJet_TripleTag_3B_CvB__53->SetBinContent(10,4448);
   _QuadJet_TripleTag_3B_CvB__53->SetEntries(55252);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 55252  ");
   ptstats_LaTex = ptstats->AddText("Mean  =   0.39");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3566");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvB__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvB__53);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_CvB__53->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvB__53->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_3B_CvB__53->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_CvB__53->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__53->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB__53->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__53->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_CvB__53->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__53->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__53->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__53->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB__53->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__53->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18_3B->Modified();
   CvB_2018_QuadJet_TripleTag_18_3B->cd();
   CvB_2018_QuadJet_TripleTag_18_3B->SetSelected(CvB_2018_QuadJet_TripleTag_18_3B);
}
