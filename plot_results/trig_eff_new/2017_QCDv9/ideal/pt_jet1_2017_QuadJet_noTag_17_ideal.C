#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ideal/pt_jet1_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ideal", "pt_jet1_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.002670057,585.8166,0.01958042);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1__118 = new TH1D("_QuadJet_noTag_ideal_pt_jet1__118","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(7,0.002227171);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(8,0.001941748);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(9,0.003900709);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(10,0.005085361);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(11,0.008101852);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(12,0.004644682);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(13,0.009513151);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(14,0.005460751);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(15,0.002356638);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(16,0.004739336);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(17,0.005675369);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(18,0.006024096);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(19,0.01351351);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(20,0.01295896);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(21,0.01507538);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(22,0.002967359);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(23,0.01454545);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(24,0.008438819);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(25,0.005555556);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(26,0.007633588);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(28,0.008064516);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(29,0.01652893);
   _QuadJet_noTag_ideal_pt_jet1__118->SetEntries(0.1649529);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  192.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  60.44");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1__118->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1__118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet1__118->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ideal);
}
