#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18/pt_jet1_2018_QuadJet_noTag_18
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18 = new TCanvas("pt_jet1_2018_QuadJet_noTag_18", "pt_jet1_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18->SetFillStyle(4000);
   pt_jet1_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   pt_jet1_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   pt_jet1_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   pt_jet1_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1__46 = new TH1D("_QuadJet_noTag_pt_jet1__46","",50,0,500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1__46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_pt_jet1__46->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1__46->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1__46->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_pt_jet1__46->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__46->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1__46->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__46->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_pt_jet1__46->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__46->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__46->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1__46->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1__46->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1__46->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18->Modified();
   pt_jet1_2018_QuadJet_noTag_18->cd();
   pt_jet1_2018_QuadJet_noTag_18->SetSelected(pt_jet1_2018_QuadJet_noTag_18);
}
