#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16/CvB_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16 = new TCanvas("CvB_2016_QuadJet_TripleTag_16", "CvB_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16->Range(-0.2,3.471565,1.133333,5.296717);
   CvB_2016_QuadJet_TripleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16->SetLogy();
   CvB_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__194 = new TH1D("_QuadJet_TripleTag_CvB__194","",10,0,1);
   _QuadJet_TripleTag_CvB__194->SetBinContent(1,63407);
   _QuadJet_TripleTag_CvB__194->SetBinContent(2,11278);
   _QuadJet_TripleTag_CvB__194->SetBinContent(3,9745);
   _QuadJet_TripleTag_CvB__194->SetBinContent(4,9018);
   _QuadJet_TripleTag_CvB__194->SetBinContent(5,10670);
   _QuadJet_TripleTag_CvB__194->SetBinContent(6,13349);
   _QuadJet_TripleTag_CvB__194->SetBinContent(7,20483);
   _QuadJet_TripleTag_CvB__194->SetBinContent(8,36135);
   _QuadJet_TripleTag_CvB__194->SetBinContent(9,68652);
   _QuadJet_TripleTag_CvB__194->SetBinContent(10,32059);
   _QuadJet_TripleTag_CvB__194->SetEntries(274796);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 274796 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5447");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.351");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__194->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvB__194->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__194->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__194->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvB__194->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__194->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__194->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__194->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvB__194->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__194->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__194->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__194->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__194->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__194->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16->Modified();
   CvB_2016_QuadJet_TripleTag_16->cd();
   CvB_2016_QuadJet_TripleTag_16->SetSelected(CvB_2016_QuadJet_TripleTag_16);
}
