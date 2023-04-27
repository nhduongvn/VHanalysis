#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal/CvB_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:18:40 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal", "CvB_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->Range(-0.2183529,0.3541566,1.171633,0.4202518);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__313 = new TH1D("_QuadJet_TripleTag_ideal_CvB__313","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(1,0.3987988);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(2,0.385699);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(3,0.3644261);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(4,0.3915909);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(5,0.4079195);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(6,0.4111873);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(7,0.4033095);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(8,0.4076557);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(9,0.410608);
   _QuadJet_TripleTag_ideal_CvB__313->SetBinContent(10,0.3809646);
   _QuadJet_TripleTag_ideal_CvB__313->SetEntries(3.96216);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5034");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2858");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__313->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__313);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvB__313->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__313->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__313->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvB__313->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__313->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__313->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__313->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvB__313->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__313->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__313->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__313->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__313->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__313->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal);
}
