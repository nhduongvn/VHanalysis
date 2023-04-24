#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16/CvB_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16 = new TCanvas("CvB_2016_DoubleJet_TripleTag_16", "CvB_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16->Range(-0.2183529,0.04888252,1.171633,0.1668);
   CvB_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFillStyle(4000);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_TripleTag_16->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_TripleTag_16->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB__199 = new TH1D("_DoubleJet_TripleTag_CvB__199","",10,0,1);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(1,0.1506285);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(2,0.1434142);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(3,0.1425434);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(4,0.1318242);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(5,0.1255086);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(6,0.1122765);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(7,0.09904544);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(8,0.08482959);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(9,0.07091711);
   _DoubleJet_TripleTag_CvB__199->SetBinContent(10,0.06720385);
   _DoubleJet_TripleTag_CvB__199->SetEntries(1.128191);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4265");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2733");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvB__199->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvB__199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_CvB__199->SetLineColor(ci);
   _DoubleJet_TripleTag_CvB__199->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_CvB__199->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_CvB__199->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__199->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB__199->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__199->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_CvB__199->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__199->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__199->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB__199->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB__199->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB__199->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16->Modified();
   CvB_2016_DoubleJet_TripleTag_16->cd();
   CvB_2016_DoubleJet_TripleTag_16->SetSelected(CvB_2016_DoubleJet_TripleTag_16);
}
