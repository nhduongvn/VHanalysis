#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16/CvB_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16 = new TCanvas("CvB_2016_DoubleJet_TripleTag_16", "CvB_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16->Range(-0.2,3.341536,1.133333,5.175325);
   CvB_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB__200 = new TH1D("_DoubleJet_TripleTag_CvB__200","",10,0,1);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(1,46547);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(2,8243);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(3,7236);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(4,6698);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(5,7935);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(6,10062);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(7,15305);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(8,27459);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(9,51808);
   _DoubleJet_TripleTag_CvB__200->SetBinContent(10,23339);
   _DoubleJet_TripleTag_CvB__200->SetEntries(204632);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 204632 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5474");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3496");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvB__200->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvB__200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_CvB__200->SetLineColor(ci);
   _DoubleJet_TripleTag_CvB__200->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_CvB__200->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_CvB__200->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__200->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB__200->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__200->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_CvB__200->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__200->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__200->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__200->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB__200->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__200->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16->Modified();
   CvB_2016_DoubleJet_TripleTag_16->cd();
   CvB_2016_DoubleJet_TripleTag_16->SetSelected(CvB_2016_DoubleJet_TripleTag_16);
}
