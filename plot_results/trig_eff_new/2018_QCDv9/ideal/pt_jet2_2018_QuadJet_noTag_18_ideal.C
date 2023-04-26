#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_ideal/pt_jet2_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_ideal", "pt_jet2_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal->Range(-109.1764,-0.01346154,585.8166,0.09871795);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet2__124 = new TH1D("_QuadJet_noTag_ideal_pt_jet2__124","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(6,0.001464367);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(7,0.003073546);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(8,0.004803074);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(9,0.006802721);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(10,0.005772006);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(11,0.007869742);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(12,0.007966616);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(13,0.00513347);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(14,0.005706134);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(15,0.009871668);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(16,0.006613757);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(17,0.00798722);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(18,0.006802721);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(19,0.00621118);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(20,0.008733624);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(21,0.004926108);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(23,0.01869159);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(26,0.01754386);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(28,0.04878049);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(34,0.08333333);
   _QuadJet_noTag_ideal_pt_jet2__124->SetEntries(0.2680872);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  237.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.02");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet2__124->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet2__124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet2__124->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet2__124->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__124->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_noTag_18_ideal);
}
