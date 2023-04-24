#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17/pt_jet3_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17 = new TCanvas("pt_jet3_2017_QuadJet_noTag_17", "pt_jet3_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17->Range(-109.1764,-0.005769231,585.8166,0.04230769);
   pt_jet3_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet3__304 = new TH1D("_QuadJet_noTag_tagged_pt_jet3__304","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(5,0.002172196);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(6,0.003454894);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(7,0.00805286);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(8,0.004455761);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(9,0.008780992);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(10,0.005718954);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(11,0.007481297);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(12,0.003898635);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(13,0.00310559);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(14,0.008888889);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(15,0.01360544);
   _QuadJet_noTag_tagged_pt_jet3__304->SetBinContent(19,0.03571429);
   _QuadJet_noTag_tagged_pt_jet3__304->SetEntries(0.1053298);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  131.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  46.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet3__304->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet3__304);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet3__304->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet3__304->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet3__304->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet3__304->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__304->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__304->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__304->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet3__304->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__304->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__304->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3__304->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3__304->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3__304->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17->Modified();
   pt_jet3_2017_QuadJet_noTag_17->cd();
   pt_jet3_2017_QuadJet_noTag_17->SetSelected(pt_jet3_2017_QuadJet_noTag_17);
}
