#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16/CvB_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16 = new TCanvas("CvB_2016_QuadJet_TripleTag_16", "CvB_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16->Range(-0.2183529,0.06745037,1.171633,0.2269546);
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
   
   TH1D *_QuadJet_TripleTag_CvB__193 = new TH1D("_QuadJet_TripleTag_CvB__193","",10,0,1);
   _QuadJet_TripleTag_CvB__193->SetBinContent(1,0.2050797);
   _QuadJet_TripleTag_CvB__193->SetBinContent(2,0.1964186);
   _QuadJet_TripleTag_CvB__193->SetBinContent(3,0.1918648);
   _QuadJet_TripleTag_CvB__193->SetBinContent(4,0.1775333);
   _QuadJet_TripleTag_CvB__193->SetBinContent(5,0.1687222);
   _QuadJet_TripleTag_CvB__193->SetBinContent(6,0.1488121);
   _QuadJet_TripleTag_CvB__193->SetBinContent(7,0.1325396);
   _QuadJet_TripleTag_CvB__193->SetBinContent(8,0.1116489);
   _QuadJet_TripleTag_CvB__193->SetBinContent(9,0.0939504);
   _QuadJet_TripleTag_CvB__193->SetBinContent(10,0.09223321);
   _QuadJet_TripleTag_CvB__193->SetEntries(1.518803);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4246");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2738");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__193->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__193);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvB__193->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__193->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__193->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvB__193->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__193->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__193->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__193->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvB__193->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__193->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__193->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__193->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__193->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__193->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16->Modified();
   CvB_2016_QuadJet_TripleTag_16->cd();
   CvB_2016_QuadJet_TripleTag_16->SetSelected(CvB_2016_QuadJet_TripleTag_16);
}
