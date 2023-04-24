#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16/pt_jet2_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16", "pt_jet2_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->Range(-109.1764,-0.01076923,585.8166,0.07897436);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet2__58 = new TH1D("_DoubleJet_DoubleTag_pt_jet2__58","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(5,0.001625884);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(6,0.002438746);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(7,0.004546555);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(8,0.006753582);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(9,0.01036638);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(10,0.0131329);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(11,0.01474251);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(12,0.01367982);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(13,0.01383888);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(14,0.01284093);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(15,0.01576671);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(16,0.0159809);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(17,0.01419878);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(18,0.009757739);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(19,0.01641587);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(20,0.01604938);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(21,0.01327088);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(22,0.01306533);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(23,0.0136612);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(24,0.01572327);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(25,0.01089325);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(26,0.006042296);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(27,0.01948052);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(28,0.01587302);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(29,0.02752294);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(30,0.01694915);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(33,0.03960396);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(35,0.01538462);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(36,0.06666667);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(37,0.04545455);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(38,0.03125);
   _DoubleJet_DoubleTag_pt_jet2__58->SetBinContent(40,0.04166667);
   _DoubleJet_DoubleTag_pt_jet2__58->SetEntries(0.5746439);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  100.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet2__58->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet2__58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_pt_jet2__58->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet2__58->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet2__58->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_pt_jet2__58->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__58->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet2__58->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__58->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_pt_jet2__58->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__58->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__58->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__58->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet2__58->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__58->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16);
}
