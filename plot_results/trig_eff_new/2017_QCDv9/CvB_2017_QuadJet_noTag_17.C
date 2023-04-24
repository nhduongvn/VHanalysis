#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17/CvB_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17 = new TCanvas("CvB_2017_QuadJet_noTag_17", "CvB_2017_QuadJet_noTag_17",0,0,600,600);
   CvB_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17->Range(-0.2183529,0.004340895,1.171633,0.005525081);
   CvB_2017_QuadJet_noTag_17->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17->SetFillStyle(4000);
   CvB_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   CvB_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB__208 = new TH1D("_QuadJet_noTag_CvB__208","",10,0,1);
   _QuadJet_noTag_CvB__208->SetBinContent(1,0.004806317);
   _QuadJet_noTag_CvB__208->SetBinContent(2,0.004958271);
   _QuadJet_noTag_CvB__208->SetBinContent(3,0.005172301);
   _QuadJet_noTag_CvB__208->SetBinContent(4,0.004929577);
   _QuadJet_noTag_CvB__208->SetBinContent(5,0.004524887);
   _QuadJet_noTag_CvB__208->SetBinContent(6,0.004629106);
   _QuadJet_noTag_CvB__208->SetBinContent(7,0.004807411);
   _QuadJet_noTag_CvB__208->SetBinContent(8,0.004940745);
   _QuadJet_noTag_CvB__208->SetBinContent(9,0.005130012);
   _QuadJet_noTag_CvB__208->SetBinContent(10,0.005362678);
   _QuadJet_noTag_CvB__208->SetEntries(0.04926131);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5049");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2909");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB__208->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB__208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_CvB__208->SetLineColor(ci);
   _QuadJet_noTag_CvB__208->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB__208->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_CvB__208->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__208->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__208->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__208->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_CvB__208->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__208->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__208->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__208->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__208->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__208->Draw("HIST");
   CvB_2017_QuadJet_noTag_17->Modified();
   CvB_2017_QuadJet_noTag_17->cd();
   CvB_2017_QuadJet_noTag_17->SetSelected(CvB_2017_QuadJet_noTag_17);
}
