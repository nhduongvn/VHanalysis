#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_DoubleTag_16_ideal/pt_jet1_2016_QuadJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet1_2016_QuadJet_DoubleTag_16_ideal", "pt_jet1_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->Range(-109.1764,-0.02019231,585.8166,0.1480769);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet1__232 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet1__232","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(6,0.009838998);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(7,0.01794454);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(8,0.01935279);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(9,0.02135118);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(10,0.02686671);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(11,0.02667683);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(12,0.02827648);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(13,0.03065134);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(14,0.02648579);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(15,0.0253651);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(16,0.0322887);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(17,0.02883506);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(18,0.03061224);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(19,0.01883562);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(20,0.022);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(21,0.03432494);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(22,0.03658537);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(23,0.0443686);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(24,0.0242915);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(25,0.01515152);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(26,0.01863354);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(27,0.0212766);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(28,0.02970297);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(29,0.01851852);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(30,0.01041667);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(32,0.01587302);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(34,0.08333333);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(35,0.02380952);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(37,0.02777778);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(38,0.03571429);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(42,0.05263158);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(44,0.125);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(45,0.03846154);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetBinContent(51,0.03488372);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetEntries(1.021253);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  120.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet1__232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_pt_jet1__232->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet1__232->Draw("HIST");
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet1_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet1_2016_QuadJet_DoubleTag_16_ideal);
}
