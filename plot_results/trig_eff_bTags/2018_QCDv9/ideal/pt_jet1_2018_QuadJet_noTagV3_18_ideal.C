#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTagV3_18_ideal()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTagV3_18_ideal/pt_jet1_2018_QuadJet_noTagV3_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTagV3_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_noTagV3_18_ideal", "pt_jet1_2018_QuadJet_noTagV3_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetFillStyle(4000);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetLeftMargin(0.15709);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetRightMargin(0.1234783);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetBottomMargin(0.12);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetFrameFillStyle(1000);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_pt_jet1__28 = new TH1D("_QuadJet_noTagV3_ideal_pt_jet1__28","",50,0,500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_pt_jet1__28);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV3_ideal_pt_jet1__28->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetXaxis()->SetRange(1,500);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_pt_jet1__28->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1__28->Draw("HIST");
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->Modified();
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->cd();
   pt_jet1_2018_QuadJet_noTagV3_18_ideal->SetSelected(pt_jet1_2018_QuadJet_noTagV3_18_ideal);
}
