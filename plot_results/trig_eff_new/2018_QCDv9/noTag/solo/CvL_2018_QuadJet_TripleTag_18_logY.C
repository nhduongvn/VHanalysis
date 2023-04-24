#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18/CvL_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18 = new TCanvas("CvL_2018_QuadJet_TripleTag_18", "CvL_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18->Range(-0.2,3.326681,1.133333,5.302536);
   CvL_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18->SetLogy();
   CvL_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL__44 = new TH1D("_QuadJet_TripleTag_CvL__44","",10,0,1);
   _QuadJet_TripleTag_CvL__44->SetBinContent(1,67205);
   _QuadJet_TripleTag_CvL__44->SetBinContent(2,29872);
   _QuadJet_TripleTag_CvL__44->SetBinContent(3,11326);
   _QuadJet_TripleTag_CvL__44->SetBinContent(4,7540);
   _QuadJet_TripleTag_CvL__44->SetBinContent(5,6688);
   _QuadJet_TripleTag_CvL__44->SetBinContent(6,6892);
   _QuadJet_TripleTag_CvL__44->SetBinContent(7,8399);
   _QuadJet_TripleTag_CvL__44->SetBinContent(8,11768);
   _QuadJet_TripleTag_CvL__44->SetBinContent(9,18788);
   _QuadJet_TripleTag_CvL__44->SetBinContent(10,46106);
   _QuadJet_TripleTag_CvL__44->SetEntries(214584);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 214584 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4437");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3768");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__44);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvL__44->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__44->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvL__44->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__44->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__44->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__44->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__44->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__44->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18->Modified();
   CvL_2018_QuadJet_TripleTag_18->cd();
   CvL_2018_QuadJet_TripleTag_18->SetSelected(CvL_2018_QuadJet_TripleTag_18);
}
