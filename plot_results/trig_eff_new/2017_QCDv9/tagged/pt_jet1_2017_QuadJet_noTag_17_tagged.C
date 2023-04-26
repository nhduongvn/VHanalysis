#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_tagged/pt_jet1_2017_QuadJet_noTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_tagged", "pt_jet1_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_tagged->Range(-109.1764,-0.002670057,585.8166,0.01958042);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet1__64 = new TH1D("_QuadJet_noTag_tagged_pt_jet1__64","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(6,0.00170068);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(7,0.0007980846);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(8,0.001863933);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(9,0.003461296);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(10,0.004985755);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(11,0.008098727);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(12,0.004644682);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(13,0.009513151);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(14,0.005460751);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(15,0.002356638);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(16,0.004739336);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(17,0.005675369);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(18,0.006024096);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(19,0.01351351);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(20,0.01295896);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(21,0.01507538);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(22,0.002967359);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(23,0.01454545);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(24,0.008438819);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(25,0.005555556);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(26,0.007633588);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(28,0.008064516);
   _QuadJet_noTag_tagged_pt_jet1__64->SetBinContent(29,0.01652893);
   _QuadJet_noTag_tagged_pt_jet1__64->SetEntries(0.1646046);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  192.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   60.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet1__64->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet1__64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet1__64->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__64->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet1__64->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__64->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__64->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet1_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet1_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet1_2017_QuadJet_noTag_17_tagged);
}
