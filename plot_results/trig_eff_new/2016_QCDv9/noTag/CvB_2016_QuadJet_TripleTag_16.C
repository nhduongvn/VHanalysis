#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16/CvB_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16 = new TCanvas("CvB_2016_QuadJet_TripleTag_16", "CvB_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16->Range(-0.2183529,0.06732535,1.171633,0.2268263);
   CvB_2016_QuadJet_TripleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16->SetFillStyle(4000);
   CvB_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_TripleTag_16->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_TripleTag_16->SetBottomMargin(0.12);
   CvB_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__97 = new TH1D("_QuadJet_TripleTag_CvB__97","",10,0,1);
   _QuadJet_TripleTag_CvB__97->SetBinContent(1,0.2049519);
   _QuadJet_TripleTag_CvB__97->SetBinContent(2,0.1959789);
   _QuadJet_TripleTag_CvB__97->SetBinContent(3,0.1914802);
   _QuadJet_TripleTag_CvB__97->SetBinContent(4,0.1773486);
   _QuadJet_TripleTag_CvB__97->SetBinContent(5,0.1684586);
   _QuadJet_TripleTag_CvB__97->SetBinContent(6,0.1487685);
   _QuadJet_TripleTag_CvB__97->SetBinContent(7,0.1323935);
   _QuadJet_TripleTag_CvB__97->SetBinContent(8,0.1115027);
   _QuadJet_TripleTag_CvB__97->SetBinContent(9,0.09377241);
   _QuadJet_TripleTag_CvB__97->SetBinContent(10,0.09210768);
   _QuadJet_TripleTag_CvB__97->SetEntries(1.516763);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4247");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2738");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__97->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvB__97->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__97->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__97->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvB__97->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__97->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__97->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__97->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvB__97->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__97->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__97->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__97->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__97->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__97->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16->Modified();
   CvB_2016_QuadJet_TripleTag_16->cd();
   CvB_2016_QuadJet_TripleTag_16->SetSelected(CvB_2016_QuadJet_TripleTag_16);
}
