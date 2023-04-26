#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16_ideal/pt_jet2_2016_QuadJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16_ideal", "pt_jet2_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->Range(-109.1764,-0.01346154,585.8166,0.09871795);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet2__244 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet2__244","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(5,0.003942181);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(6,0.01682028);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(7,0.02122371);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(8,0.02761563);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(9,0.02743142);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(10,0.02400915);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(11,0.03243243);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(12,0.02444134);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(13,0.03283302);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(14,0.02911392);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(15,0.02936097);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(16,0.02850877);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(17,0.04216867);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(18,0.02074689);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(19,0.02453988);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(20,0.03472222);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(21,0.01754386);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(22,0.05063291);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(25,0.06060606);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(27,0.03703704);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(28,0.03846154);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(29,0.04761905);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetBinContent(32,0.08333333);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetEntries(0.7551443);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  190.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  79.46");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet2__244);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_pt_jet2__244->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet2__244->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16_ideal);
}
