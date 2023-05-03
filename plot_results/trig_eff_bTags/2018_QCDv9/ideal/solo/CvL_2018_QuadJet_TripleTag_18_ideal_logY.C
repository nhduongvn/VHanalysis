#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ideal/CvL_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ideal", "CvL_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ideal->Range(-0.2,1.817459,1.133333,3.686087);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__128 = new TH1D("_QuadJet_TripleTag_ideal_CvL__128","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(1,730);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(2,332);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(3,202);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(4,211);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(5,253);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(6,281);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(7,333);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(8,455);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(9,741);
   _QuadJet_TripleTag_ideal_CvL__128->SetBinContent(10,1666);
   _QuadJet_TripleTag_ideal_CvL__128->SetEntries(5204);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5204   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6296");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3401");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__128->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__128);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL__128->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__128->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__128->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL__128->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__128->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__128->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__128->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL__128->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__128->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__128->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__128->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__128->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__128->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvL_2018_QuadJet_TripleTag_18_ideal->cd();
   CvL_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvL_2018_QuadJet_TripleTag_18_ideal);
}
