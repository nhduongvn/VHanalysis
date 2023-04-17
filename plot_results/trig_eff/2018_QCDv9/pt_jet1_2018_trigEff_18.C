#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_trigEff_18()
{
//=========Macro generated from canvas: pt_jet1_2018_trigEff_18/pt_jet1_2018_trigEff_18
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_trigEff_18 = new TCanvas("pt_jet1_2018_trigEff_18", "pt_jet1_2018_trigEff_18",0,0,600,600);
   pt_jet1_2018_trigEff_18->SetHighLightColor(2);
   pt_jet1_2018_trigEff_18->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2018_trigEff_18->SetFillColor(0);
   pt_jet1_2018_trigEff_18->SetFillStyle(4000);
   pt_jet1_2018_trigEff_18->SetBorderMode(0);
   pt_jet1_2018_trigEff_18->SetBorderSize(2);
   pt_jet1_2018_trigEff_18->SetLeftMargin(0.15709);
   pt_jet1_2018_trigEff_18->SetRightMargin(0.1234783);
   pt_jet1_2018_trigEff_18->SetBottomMargin(0.12);
   pt_jet1_2018_trigEff_18->SetFrameFillStyle(1000);
   pt_jet1_2018_trigEff_18->SetFrameBorderMode(0);
   pt_jet1_2018_trigEff_18->SetFrameFillStyle(1000);
   pt_jet1_2018_trigEff_18->SetFrameBorderMode(0);
   
   TH1D *_trigEff_pt_jet1__8 = new TH1D("_trigEff_pt_jet1__8","",50,0,500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_trigEff_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_pt_jet1__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_pt_jet1__8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_pt_jet1__8->SetLineColor(ci);
   _trigEff_pt_jet1__8->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _trigEff_pt_jet1__8->GetXaxis()->SetRange(1,500);
   _trigEff_pt_jet1__8->GetXaxis()->SetLabelFont(42);
   _trigEff_pt_jet1__8->GetXaxis()->SetTitleOffset(1);
   _trigEff_pt_jet1__8->GetXaxis()->SetTitleFont(42);
   _trigEff_pt_jet1__8->GetYaxis()->SetTitle("Efficiency");
   _trigEff_pt_jet1__8->GetYaxis()->SetLabelFont(42);
   _trigEff_pt_jet1__8->GetYaxis()->SetTitleFont(42);
   _trigEff_pt_jet1__8->GetZaxis()->SetLabelFont(42);
   _trigEff_pt_jet1__8->GetZaxis()->SetTitleOffset(1);
   _trigEff_pt_jet1__8->GetZaxis()->SetTitleFont(42);
   _trigEff_pt_jet1__8->Draw("HIST");
   pt_jet1_2018_trigEff_18->Modified();
   pt_jet1_2018_trigEff_18->cd();
   pt_jet1_2018_trigEff_18->SetSelected(pt_jet1_2018_trigEff_18);
}
