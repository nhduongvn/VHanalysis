#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_3B/CvB_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_3B = new TCanvas("CvB_2016_QuadJet_TripleTag_16_3B", "CvB_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_3B->Range(-0.2,2.830486,1.133333,4.634987);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_3B->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvB__104 = new TH1D("_QuadJet_TripleTag_3B_CvB__104","",10,0,1);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(1,15031);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(2,3054);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(3,2950);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(4,2685);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(5,2474);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(6,2051);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(7,2187);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(8,2859);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(9,6092);
   _QuadJet_TripleTag_3B_CvB__104->SetBinContent(10,3133);
   _QuadJet_TripleTag_3B_CvB__104->SetEntries(42516);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 42516  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.385");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3478");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvB__104->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvB__104);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_CvB__104->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvB__104->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_3B_CvB__104->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_CvB__104->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__104->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB__104->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__104->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_CvB__104->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__104->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__104->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__104->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB__104->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__104->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_3B->Modified();
   CvB_2016_QuadJet_TripleTag_16_3B->cd();
   CvB_2016_QuadJet_TripleTag_16_3B->SetSelected(CvB_2016_QuadJet_TripleTag_16_3B);
}
