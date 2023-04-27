#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17/CvB_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17 = new TCanvas("CvB_2017_QuadJet_TripleTag_17", "CvB_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.0159794,1.171633,0.0884849);
   CvB_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   CvB_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   CvB_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvB__49 = new TH1D("_QuadJet_TripleTag_CvB__49","",10,0,1);
   _QuadJet_TripleTag_CvB__49->SetBinContent(1,0.07854129);
   _QuadJet_TripleTag_CvB__49->SetBinContent(2,0.06804191);
   _QuadJet_TripleTag_CvB__49->SetBinContent(3,0.06676591);
   _QuadJet_TripleTag_CvB__49->SetBinContent(4,0.06143597);
   _QuadJet_TripleTag_CvB__49->SetBinContent(5,0.05552842);
   _QuadJet_TripleTag_CvB__49->SetBinContent(6,0.04749808);
   _QuadJet_TripleTag_CvB__49->SetBinContent(7,0.04123335);
   _QuadJet_TripleTag_CvB__49->SetBinContent(8,0.0332516);
   _QuadJet_TripleTag_CvB__49->SetBinContent(9,0.02779183);
   _QuadJet_TripleTag_CvB__49->SetBinContent(10,0.02724488);
   _QuadJet_TripleTag_CvB__49->SetEntries(0.5073332);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4035");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.271");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvB__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvB__49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_CvB__49->SetLineColor(ci);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__49->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__49->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_CvB__49->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__49->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__49->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvB__49->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvB__49->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvB__49->Draw("HIST");
   CvB_2017_QuadJet_TripleTag_17->Modified();
   CvB_2017_QuadJet_TripleTag_17->cd();
   CvB_2017_QuadJet_TripleTag_17->SetSelected(CvB_2017_QuadJet_TripleTag_17);
}
