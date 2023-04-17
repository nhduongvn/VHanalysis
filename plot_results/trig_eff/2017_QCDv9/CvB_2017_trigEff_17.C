#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_trigEff_17()
{
//=========Macro generated from canvas: CvB_2017_trigEff_17/CvB_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_trigEff_17 = new TCanvas("CvB_2017_trigEff_17", "CvB_2017_trigEff_17",0,0,600,600);
   CvB_2017_trigEff_17->SetHighLightColor(2);
   CvB_2017_trigEff_17->Range(-0.2183529,0.009519194,1.171633,0.06796443);
   CvB_2017_trigEff_17->SetFillColor(0);
   CvB_2017_trigEff_17->SetFillStyle(4000);
   CvB_2017_trigEff_17->SetBorderMode(0);
   CvB_2017_trigEff_17->SetBorderSize(2);
   CvB_2017_trigEff_17->SetLeftMargin(0.15709);
   CvB_2017_trigEff_17->SetRightMargin(0.1234783);
   CvB_2017_trigEff_17->SetBottomMargin(0.12);
   CvB_2017_trigEff_17->SetFrameFillStyle(1000);
   CvB_2017_trigEff_17->SetFrameBorderMode(0);
   CvB_2017_trigEff_17->SetFrameFillStyle(1000);
   CvB_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_CvB__31 = new TH1D("_trigEff_CvB__31","",10,0,1);
   _trigEff_CvB__31->SetBinContent(1,0.05994908);
   _trigEff_CvB__31->SetBinContent(2,0.04818347);
   _trigEff_CvB__31->SetBinContent(3,0.0448597);
   _trigEff_CvB__31->SetBinContent(4,0.04126864);
   _trigEff_CvB__31->SetBinContent(5,0.03637104);
   _trigEff_CvB__31->SetBinContent(6,0.03114337);
   _trigEff_CvB__31->SetBinContent(7,0.02665951);
   _trigEff_CvB__31->SetBinContent(8,0.02153005);
   _trigEff_CvB__31->SetBinContent(9,0.01860007);
   _trigEff_CvB__31->SetBinContent(10,0.01894926);
   _trigEff_CvB__31->SetEntries(0.3475142);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3933");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2738");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_CvB__31->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_CvB__31);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_CvB__31->SetLineColor(ci);
   _trigEff_CvB__31->GetXaxis()->SetTitle("CvB tagging score");
   _trigEff_CvB__31->GetXaxis()->SetRange(1,100);
   _trigEff_CvB__31->GetXaxis()->SetLabelFont(42);
   _trigEff_CvB__31->GetXaxis()->SetTitleOffset(1);
   _trigEff_CvB__31->GetXaxis()->SetTitleFont(42);
   _trigEff_CvB__31->GetYaxis()->SetTitle("Efficiency");
   _trigEff_CvB__31->GetYaxis()->SetLabelFont(42);
   _trigEff_CvB__31->GetYaxis()->SetTitleFont(42);
   _trigEff_CvB__31->GetZaxis()->SetLabelFont(42);
   _trigEff_CvB__31->GetZaxis()->SetTitleOffset(1);
   _trigEff_CvB__31->GetZaxis()->SetTitleFont(42);
   _trigEff_CvB__31->Draw("HIST");
   CvB_2017_trigEff_17->Modified();
   CvB_2017_trigEff_17->cd();
   CvB_2017_trigEff_17->SetSelected(CvB_2017_trigEff_17);
}
