#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18/CvB_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18 = new TCanvas("CvB_2018_QuadJet_TripleTag_18", "CvB_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18->Range(-0.2,3.38371,1.133333,5.228624);
   CvB_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18->SetLogy();
   CvB_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__50 = new TH1D("_QuadJet_TripleTag_CvB__50","",10,0,1);
   _QuadJet_TripleTag_CvB__50->SetBinContent(1,58423);
   _QuadJet_TripleTag_CvB__50->SetBinContent(2,9104);
   _QuadJet_TripleTag_CvB__50->SetBinContent(3,7810);
   _QuadJet_TripleTag_CvB__50->SetBinContent(4,7400);
   _QuadJet_TripleTag_CvB__50->SetBinContent(5,8450);
   _QuadJet_TripleTag_CvB__50->SetBinContent(6,10327);
   _QuadJet_TripleTag_CvB__50->SetBinContent(7,15241);
   _QuadJet_TripleTag_CvB__50->SetBinContent(8,25580);
   _QuadJet_TripleTag_CvB__50->SetBinContent(9,48833);
   _QuadJet_TripleTag_CvB__50->SetBinContent(10,23416);
   _QuadJet_TripleTag_CvB__50->SetEntries(214584);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 214584 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5084");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3612");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__50);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB__50->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__50->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__50->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB__50->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__50->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__50->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__50->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__50->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__50->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18->Modified();
   CvB_2018_QuadJet_TripleTag_18->cd();
   CvB_2018_QuadJet_TripleTag_18->SetSelected(CvB_2018_QuadJet_TripleTag_18);
}
