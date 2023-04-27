#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17_ideal/pt_jet3_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet3_2017_QuadJet_noTag_17_ideal", "pt_jet3_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.01009615,585.8166,0.07403846);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3__130 = new TH1D("_QuadJet_noTag_ideal_pt_jet3__130","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(6,0.01503759);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(7,0.01287554);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(8,0.00617284);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(11,0.01724138);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(14,0.0625);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(15,0.05555556);
   _QuadJet_noTag_ideal_pt_jet3__130->SetEntries(0.1693829);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  120.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  31.45");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet3__130->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet3__130);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet3__130->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet3__130->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__130->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet3_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet3_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet3_2017_QuadJet_noTag_17_ideal);
}
