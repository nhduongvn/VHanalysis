#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ideal/CvL_2018_QuadJet_TripleTag_18_ideal
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ideal", "CvL_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ideal->Range(-0.2,1.821689,1.133333,3.690802);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__152 = new TH1D("_QuadJet_TripleTag_ideal_CvL__152","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(1,738);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(2,336);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(3,204);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(4,215);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(5,255);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(6,283);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(7,335);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(8,460);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(9,750);
   _QuadJet_TripleTag_ideal_CvL__152->SetBinContent(10,1684);
   _QuadJet_TripleTag_ideal_CvL__152->SetEntries(5260);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5260   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6295");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3403");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__152->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__152);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL__152->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__152->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__152->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL__152->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__152->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__152->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__152->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL__152->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__152->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__152->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__152->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__152->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__152->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvL_2018_QuadJet_TripleTag_18_ideal->cd();
   CvL_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvL_2018_QuadJet_TripleTag_18_ideal);
}
